#include "stdafx.h"

// // =========== ��ȣ =============
// Ŭ���̾�Ʈ ���� �迭
int nTotalSockets = 0;
int nTotalUDPSockets = 0;
SOCKETINFO* SocketInfoArray[FD_SETSIZE]; //TCP ������ �ִ� ����
SOCKADDR_IN UDPSocketInfoArray[FD_SETSIZE]; //UDP ������ �ִ� ����

SOCKET listen_sock4;
SOCKADDR_IN serveraddr;
SOCKET socket_UDP;

// ============= ���� =============== 
//char* g_msgQueue[BUFSIZE];    // �޽��� ���� ť: ���� ��ȭ���� ǥ��. �� ���� ���� ������ �޽������� ��������.
//int head = 0, tail = 0;           // ���� ť �ε���
MESSAGEQUEUE g_msgQueue;

int main(int argc, char* argv[])
{
    // ========= ��ȣ ========
    // ������ Ŭ���� ���
    WNDCLASS wndclass;
    wndclass.style = CS_HREDRAW | CS_VREDRAW;
    wndclass.lpfnWndProc = WndProc;
    wndclass.cbClsExtra = 0;
    wndclass.cbWndExtra = 0;
    wndclass.hInstance = NULL;
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wndclass.lpszMenuName = NULL;
    wndclass.lpszClassName = _T("MyWndClass");
    if (!RegisterClass(&wndclass)) return 1;

    // �ӽ� ������ ����
    HWND hWnd = CreateWindow(_T("MyWndClass"), _T("TCP ����"), WS_OVERLAPPEDWINDOW,
        0, 0, 600, 400, NULL, NULL, NULL, NULL);
    if (hWnd == NULL) return 1;
    ShowWindow(hWnd, SW_SHOWNORMAL);
    UpdateWindow(hWnd);

    int retval;

    // ���� �ʱ�ȭ
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
        return 1;

    /*----- TCP/IPv4 ���� �ʱ�ȭ ���� -----*/
    // ���� ����
    listen_sock4 = socket(AF_INET, SOCK_STREAM, 0);
    if (listen_sock4 == INVALID_SOCKET) err_quit("socket()");

    // bind()
    memset(&serveraddr, 0, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);
    serveraddr.sin_port = htons(SERVERPORT);
    retval = bind(listen_sock4, (struct sockaddr*)&serveraddr,
        sizeof(serveraddr));
    if (retval == SOCKET_ERROR) err_quit("bind()");

    // listen()
    retval = listen(listen_sock4, SOMAXCONN);
    if (retval == SOCKET_ERROR) err_quit("listen()");

    // TCP/IPv4 ���Ͽ� ������ŷ ��� ����
    u_long nonBlockingModeOn = 1;
    retval = ioctlsocket(listen_sock4, FIONBIO, &nonBlockingModeOn);
    if (retval == SOCKET_ERROR) {
        err_quit("ioctlsocket()");
    }
    /*----- TCP/IPv4 ���� �ʱ�ȭ ���� -----*/

     /*----- UDP/IPv4 ���� �ʱ�ȭ ���� -----*/
    // TODO: ������ �����ϰ� �ʱ�ȭ�Ѵ�. == ��ȣ ==

    socket_UDP = socket(AF_INET, SOCK_DGRAM, 0);
    if (socket_UDP == INVALID_SOCKET)
    {
        err_quit("socket()");
    }

    // ��Ƽĳ��Ʈ �׷� ����
    struct ip_mreq mreq1;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP1, &mreq1.imr_multiaddr.s_addr); // �����ϰų� Ż���� IPv4 ��Ƽ�ɽ�Ʈ address(�ּ�) (������ ���Ƹ�)
    mreq1.imr_interface.s_addr = htonl(INADDR_ANY);      // ���� ip address (��)
    retval = setsockopt(socket_UDP, IPPROTO_IP, IP_ADD_MEMBERSHIP,
        (char*)&mreq1, sizeof(mreq1));
    if (retval == SOCKET_ERROR) err_quit("setsockopt() 1");

    // ��Ƽĳ��Ʈ �׷� ����
    struct ip_mreq mreq2;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP2, &mreq2.imr_multiaddr.s_addr); // �����ϰų� Ż���� IPv4 ��Ƽ�ɽ�Ʈ address(�ּ�) (������ ���Ƹ�)
    mreq2.imr_interface.s_addr = htonl(INADDR_ANY);
    retval = setsockopt(socket_UDP, IPPROTO_IP, IP_ADD_MEMBERSHIP,
        (char*)&mreq2, sizeof(mreq2));
    if (retval == SOCKET_ERROR) err_quit("setsockopt() 2");

    // ---------------- ���� ---------------- //
    // bind() UDP �׷� B bind

    retval = bind(socket_UDP, (SOCKADDR*)&serveraddr, sizeof(serveraddr));
    if (retval == SOCKET_ERROR) err_quit("bind()");

    // --------------------------------------- //


    /*----- UDP/IPv4 ���� �ʱ�ȭ ���� -----*/

    /*----- UDP/IPv6 ���� �ʱ�ȭ ���� -----*/
    // TODO: ������ �����ϰ� �ʱ�ȭ�Ѵ�.
    /*----- UDP/IPv6 ���� �ʱ�ȭ ���� -----*/

    // ������ ��ſ� ����� ����(����)
    fd_set rset;
    SOCKET client_sock;
    int addrlen;
    // ������ ��ſ� ����� ����(IPv4)
    struct sockaddr_in clientaddr4;
    // ������ ��ſ� ����� ����(IPv6)
    struct sockaddr_in6 clientaddr6;

    // ========== ��ȣ ==========
    int recvLen; // ���� ���� ������ ũ��
    int sendLen; // ���� ���� ������ ũ��

    // WSAAsyncSelect()

    // TCP�� ������ �ؾ��ϹǷ� FD_ACCEPT�� �߰�
    retval = WSAAsyncSelect(listen_sock4, hWnd, WM_SOCKET, FD_ACCEPT | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    // UDP�� TCP�� �޸� ������ �ʿ�����Ƿ�
    // FD_ACCEPT�� ���� ����.
    // FD_READ�� �����͸� ������ �� �ֵ��� ����
    retval = WSAAsyncSelect(socket_UDP, hWnd, WM_SOCKET, FD_READ | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // ���� ����
    WSACleanup();
    return 0;
}

// ======= ��ȣ =======
// ������ �޽��� ó��
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg) {
        // =========== ���� ============
    case WM_CREATE:
        InitializeListView(hWnd);
        return 0;
        // =============================
    case WM_SOCKET: // ���� ���� ������ �޽���
        ProcessSocketMessage(hWnd, uMsg, wParam, lParam);
        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

// ���� ���� ������ �޽��� ó��
void ProcessSocketMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	FILE* fd;
	// 데이터 통신에 사용할 변수
	SOCKETINFO* ptr;
	SOCKET client_sock;
	SOCKADDR_IN clientaddr;
	int addrlen, retval;
	char buf[BUFSIZE + 1];

	// 오류 발생 여부 확인
	if (WSAGETSELECTERROR(lParam)) {
		err_display(WSAGETSELECTERROR(lParam));
		RemoveSocketInfo(wParam);
		return;
	}

	// 메시지 처리
	switch (WSAGETSELECTEVENT(lParam)) {
	// 접속
	case FD_ACCEPT:
		addrlen = sizeof(clientaddr);
		client_sock = accept(listen_sock4, (SOCKADDR*)&clientaddr, &addrlen);
		if (client_sock == INVALID_SOCKET) {
			err_display("accept()");
			return;
		}
		else {
			// 접속한 클라이언트 정보 출력
			printf("\n[TCP/IPv4 서버] 클라이언트 접속: IP 주소=%s, 포트 번호=%d\n", 
				inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
			// =========== 지윤 ============
			//AddClientToListView(ntohs(clientaddr.sin_port));
			//DisplayClientList();
			// =============================
			
			// 소켓 정보 추가
			AddSocketInfoTCP(client_sock);
			retval = WSAAsyncSelect(client_sock, hWnd,
				WM_SOCKET, FD_READ | FD_WRITE | FD_CLOSE);
			if (retval == SOCKET_ERROR) {
				err_display("WSAAsyncSelect()");
				RemoveSocketInfo(client_sock);
			}
		}
		break;
	case FD_READ:
		// TCP socket
		printf("FD_READ\n");
		if (wParam != socket_UDP)
		{
			ptr = GetSocketInfo(wParam);
			if (ptr->recvbytes > 0) {
				return;
			}
			// 고정 데이터 받기
			retval = recv(ptr->sock, ptr->buf, BUFSIZE, 0);
			// ============================== 지안 ================================//
			// COMM_MSG 타입으로 형변환 (기보타입) -> 구조체 type을 얻어내기 위함이다.
			COMM_MSG* comm_msg;
			comm_msg = (COMM_MSG*)&(ptr->buf);
			printf("[COMM_MSG type] %d\n", comm_msg->type); //얻은 type 출력

			// Type에 따라 다른 구조체를 가진 switch (직접 형변환 해줘야 함)
			switch (comm_msg->type) {
				case (TYPE_ID) :	// TYPE_ID 인 경우 (id 출력)
					ID_MSG* id_msg;
					id_msg = (ID_MSG*)&(ptr->buf); // ID로 형변환
					printf("[TYPE_ID 받은 데이터] %s\n", id_msg->msg);

					setIDInSocket(id_msg->msg, ptr); //id 등록
					printf("[TCP] TYPE_ID, 현재 소켓 닉네임 등록완료 : %s\n", ptr->id_nickname_char);
					printf("[TCP] TYPE_ID, 현재 소켓 port 등록완료 : %d\n", ptr->sin_port);
					printf("[TCP] TYPE_ID, 현재 소켓 주소(char) : %s\n", inet_ntoa(ptr->sin_addr));
					MessageBox(NULL, ptr->id_nickname, _T("현재 소켓 닉네임 등록완료(_TCHAR)"), MB_ICONERROR);
          
					// =========== 지윤 ============
					AddClientToListView(ptr->sin_port, ptr->id_nickname_char);
					DisplayClientList();
					// =============================

					break;
				// ===== ���� ====
				case TYPE_CHAT:
					fd = fopen("chatting_log.txt", "a");
					CHAT_MSG* chat_msg;
					chat_msg = (CHAT_MSG*)comm_msg;
					fwrite(chat_msg->msg, sizeof(char*), sizeof(chat_msg->msg), fd);
					fclose(fd);

					break;
				default:
					break;
			}

			//printf("[TCP 클라이언트] %d바이트를 받았습니다.\n", retval);
			//printf("[받은 데이터] %s\n", ptr->buf);
			// ================================================================== //
			// 
			// ======== 연경 =======
			addMessage(ptr->buf);
			// ====================

			if (retval == SOCKET_ERROR) {
				err_display("recv()");
				RemoveSocketInfo(wParam);
				return;
			}
			printf("[TCP] 데이터 길이 : %d, 데이터 : %s\n", retval, buf);
			// 받은 바이트 수 누적
			ptr->recvbytes += retval;

			// 채팅 데이터만 표기한다.
		}
		// UDP socket
		else
		{
			// 데이터 받기
			addrlen = sizeof(clientaddr);
			retval = recvfrom(socket_UDP, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
			printf("[UDP] 데이터 길이 : %d, 데이터 : %s\n", retval, buf);
			if (retval == SOCKET_ERROR) {
				err_display("recvfrom()");
				return;
			}
			// ======== 연경 =======
			addMessage(buf);
			// ====================

			// UDP로 접속한 클라 정보 수집
			AddSocketInfoUDP(clientaddr);
		}
	case FD_WRITE:
		// UDP 소켓이 아닌 경우 (TCP인 경우)
		if (wParam != socket_UDP)
		{
			ptr = GetSocketInfo(wParam);
			//for (int i = 0; i < nTotalSockets; i++) {
			//	SOCKETINFO* ptr = SocketInfoArray[i];
			if (ptr->recvbytes == BUFSIZE) {
				// 받은 바이트 수 리셋
				ptr->recvbytes = 0;

				// 현재 접속한 모든 클라이언트에게 데이터를 보냄!
				for (int j = 0; j < nTotalSockets; j++) {
					SOCKETINFO* ptr2 = SocketInfoArray[j];
					retval = send(ptr2->sock, ptr->buf, BUFSIZE, 0);
					if (retval == SOCKET_ERROR) {
						err_display("send()");
						RemoveSocketInfo(j);
						--j; // 루프 인덱스 보정
						continue;
					}
				}
			}
			//}
		}
		// UDP socket
		else
		{
			for (int i = 0; i < nTotalUDPSockets; i++)
			{
				SOCKADDR_IN clientUDP = UDPSocketInfoArray[i];
				// 데이터 보내기
				retval = sendto(socket_UDP, buf, BUFSIZE, 0, (SOCKADDR*)&clientUDP, sizeof(clientUDP));
				if (retval == SOCKET_ERROR) {
					err_display("sendto()");
					return;
				}
			}
		}
		break;
	case FD_CLOSE:
		RemoveSocketInfo(wParam);
		break;
	}
}

// ���� ���� ���
SOCKETINFO* GetSocketInfo(SOCKET sock)
{
    // ���� ������ Ŭ���̾�Ʈ �߿��� ��ġ�ϴ� ���� Ž��
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // ã���� ���, �ش� ���� ��ȯ
        if (ptr->sock == sock)
        {
            return ptr;
        }
    }
    return NULL;
}

// UDP Ŭ�� ���� �߰�
bool AddSocketInfoUDP(SOCKADDR_IN addr)
{
    // ������ ������ ���� �ִ� �������� Ȯ��
    for (int i = 0; i < nTotalUDPSockets; i++)
    {
        if (inet_ntoa(UDPSocketInfoArray[i].sin_addr) == inet_ntoa(addr.sin_addr) &&
            ntohs(UDPSocketInfoArray[i].sin_port) == ntohs(addr.sin_port) &&
            ntohs(UDPSocketInfoArray[i].sin_family) == ntohs(addr.sin_family))
        {
            return false;
        }
    }

    // UDP Ŭ�� ���� �߰�
    UDPSocketInfoArray[nTotalUDPSockets++] = addr;
    return true;
}

// TCP ���� ���� �߰�
bool AddSocketInfoTCP(SOCKET sock)
{
    if (nTotalSockets >= FD_SETSIZE) {
        printf("[����] ���� ������ �߰��� �� �����ϴ�!\n");
        return false;
    }
    SOCKETINFO* ptr = new SOCKETINFO;
    if (ptr == NULL) {
        printf("[����] �޸𸮰� �����մϴ�!\n");
        return false;
    }
    ptr->sock = sock;
    ptr->recvbytes = 0;


    // TCP ���� �迭�� �߰�
    SocketInfoArray[nTotalSockets++] = ptr;

    return true;
}

// ���� ���� ����
void RemoveSocketInfo(SOCKET sock)
{

    // Ŭ���̾�Ʈ ���� ���
    struct sockaddr_in clientaddr;
    int addrlen = sizeof(clientaddr);
    getpeername(sock, (struct sockaddr*)&clientaddr, &addrlen);
    // Ŭ���̾�Ʈ ���� ���
    char addr[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &clientaddr.sin_addr, addr, sizeof(addr));
    printf("[TCP/IPv4 ����] Ŭ���̾�Ʈ ����: IP �ּ�=%s, ��Ʈ ��ȣ=%d\n",
        addr, ntohs(clientaddr.sin_port));
    // =========== ���� ============
    RemoveClientFromListView(ntohs(clientaddr.sin_port));
    DisplayClientList();
    // =============================

    // Ŭ���̾�Ʈ ���� ����
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // ã���� ���, �ش� ���� ��ȯ
        if (ptr->sock == sock)
        {
            if (i != (nTotalSockets - 1))
            {
                SocketInfoArray[i] = SocketInfoArray[nTotalSockets - 1];
            }
            --nTotalSockets;
        }
    }

    // ���� �ݱ�
    closesocket(sock);
}


void addMessage(char* message) {
    if ((g_msgQueue.tail + 1) % BUFSIZE == g_msgQueue.head) { //ť�� ���� ���: 
        g_msgQueue.head = (g_msgQueue.head + 1) % BUFSIZE; //������ ��Ҹ� �ϳ� ����� ���� �ϳ��� Ȯ���Ѵ�.
    }
    strcpy(g_msgQueue.queue[g_msgQueue.tail], message);
    g_msgQueue.tail = (g_msgQueue.tail + 1) % BUFSIZE;
}

// �������� Ŭ���̾�Ʈ�� 
DWORD WINAPI messageQueueThread(LPVOID arg) {
    return 0;
}