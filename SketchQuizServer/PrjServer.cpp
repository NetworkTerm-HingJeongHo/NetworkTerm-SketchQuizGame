#include "stdafx.h"

// // =========== ��ȣ =============
// Ŭ���̾�Ʈ ���� �迭
int nTotalSockets = 0;
int nTotalUDPSockets = 0;
SOCKETINFO* SocketInfoArray[FD_SETSIZE]; //TCP ������ �ִ� ����
SOCKADDR_IN UDPSocketInfoArray[FD_SETSIZE]; //UDP ������ �ִ� ����

SOCKET listen_sock4;
SOCKADDR_IN serveraddr;
SOCKET socket_UDP_groupA, socket_UDP_groupB;

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
	retval = bind(listen_sock4, (struct sockaddr *)&serveraddr,
		sizeof(serveraddr));
	if (retval == SOCKET_ERROR) err_quit("bind()");

	// listen()
	retval = listen(listen_sock4, SOMAXCONN);
	if (retval == SOCKET_ERROR) err_quit("listen()");

	// TCP/IPv4 ���Ͽ� ����ŷ ��� ����
	u_long nonBlockingModeOn = 1;
	retval = ioctlsocket(listen_sock4, FIONBIO, &nonBlockingModeOn);
	if (retval == SOCKET_ERROR) {
		err_quit("ioctlsocket()");
	}
	/*----- TCP/IPv4 ���� �ʱ�ȭ ���� -----*/

	/*----- UDP/IPv4 ���� �ʱ�ȭ ���� -----*/
	// TODO: ������ �����ϰ� �ʱ�ȭ�Ѵ�. == ��ȣ ==

	// GroupA
	socket_UDP_groupA = socket(AF_INET, SOCK_DGRAM, 0);
	if (socket_UDP_groupA == INVALID_SOCKET)
	{
		err_quit("socket()");
	}
	// ��Ƽĳ��Ʈ �׷� ����
	struct ip_mreq mreq;
	mreq.imr_multiaddr.s_addr = inet_addr(SERVERIP4_CHAR_UDP1); // �����ϰų� Ż���� IPv4 ��Ƽ�ɽ�Ʈ address(�ּ�) (������ ���Ƹ�)
	mreq.imr_interface.s_addr = htonl(INADDR_ANY);		// ���� ip address (��)
	retval = setsockopt(socket_UDP_groupA, IPPROTO_IP, IP_ADD_MEMBERSHIP,
		(char*)&mreq, sizeof(mreq));
	if (retval == SOCKET_ERROR) err_quit("setsockopt()");

	// GroupB
	socket_UDP_groupB = socket(AF_INET, SOCK_DGRAM, 0);
	if (socket_UDP_groupB == INVALID_SOCKET)
	{
		err_quit("socket()");
	}

	// ��Ƽĳ��Ʈ �׷� ����
	mreq.imr_multiaddr.s_addr = inet_addr(SERVERIP4_CHAR_UDP2); // �����ϰų� Ż���� IPv4 ��Ƽ�ɽ�Ʈ address(�ּ�) (������ ���Ƹ�)
	retval = setsockopt(socket_UDP_groupB, IPPROTO_IP, IP_ADD_MEMBERSHIP,
		(char*)&mreq, sizeof(mreq));
	if (retval == SOCKET_ERROR) err_quit("setsockopt()");


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
	retval = WSAAsyncSelect(socket_UDP_groupA, hWnd, WM_SOCKET, FD_READ | FD_CLOSE);
	if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

	retval = WSAAsyncSelect(socket_UDP_groupB, hWnd, WM_SOCKET, FD_READ | FD_CLOSE);
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
	// ������ ��ſ� ����� ����
	SOCKETINFO* ptr;
	SOCKET client_sock;
	SOCKADDR_IN clientaddr;
	int addrlen, retval;
	char buf[BUFSIZE + 1];

	// ���� �߻� ���� Ȯ��
	if (WSAGETSELECTERROR(lParam)) {
		err_display(WSAGETSELECTERROR(lParam));
		RemoveSocketInfo(wParam);
		return;
	}

	// �޽��� ó��
	switch (WSAGETSELECTEVENT(lParam)) {
	// ����
	case FD_ACCEPT:
		addrlen = sizeof(clientaddr);
		client_sock = accept(listen_sock4, (SOCKADDR*)&clientaddr, &addrlen);
		if (client_sock == INVALID_SOCKET) {
			err_display("accept()");
			return;
		}
		else {
			// ������ Ŭ���̾�Ʈ ���� ���
			printf("\n[TCP/IPv4 ����] Ŭ���̾�Ʈ ����: IP �ּ�=%s, ��Ʈ ��ȣ=%d\n", 
				inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
			// =========== ���� ============
			AddClientToListView(ntohs(clientaddr.sin_port));
			DisplayClientList();
			// =============================
			
			// ���� ���� �߰�
			AddSocketInfoTCP(client_sock);
			retval = WSAAsyncSelect(client_sock, hWnd,
				WM_SOCKET, FD_READ | FD_WRITE | FD_CLOSE);
			if (retval == SOCKET_ERROR) {
				err_display("WSAAsyncSelect()");
				RemoveSocketInfo(client_sock);
			}


		}

		// ========== ���� =========
		// TCP socket
		if (wParam != socket_UDP_groupA && wParam != socket_UDP_groupB) {
			//for (int i = 0; i < nTotalSockets; i++) {
			//	SOCKETINFO* ptr = SocketInfoArray[i];					
			SOCKETINFO* ptr2 = SocketInfoArray[nTotalSockets-1];
			retval = send(ptr2->sock, (char*)&g_msgQueue, BUFSIZE, 0);
			if (retval == SOCKET_ERROR) {
				err_display("send()");
			}
			
		}
		// UDP socket - Group A
		else if (wParam == socket_UDP_groupA) {
			SOCKADDR_IN clientUDP = UDPSocketInfoArray[nTotalSockets-1];
			// ������ ������
			retval = sendto(socket_UDP_groupA, (char*)&g_msgQueue, BUFSIZE, 0, (SOCKADDR*)&clientUDP, sizeof(clientUDP));
			if (retval == SOCKET_ERROR) {
				err_display("sendto()");
				return;
			}
		}
		// UDP socket - Group B
		else if (wParam == socket_UDP_groupB) {
			SOCKADDR_IN clientUDP = UDPSocketInfoArray[nTotalSockets - 1];
			// ������ ������
			retval = sendto(socket_UDP_groupB, (char*)&g_msgQueue, BUFSIZE, 0, (SOCKADDR*)&clientUDP, sizeof(clientUDP));
			if (retval == SOCKET_ERROR) {
				err_display("sendto()");
				return;
			}
		}


		break;
	case FD_READ:
		// TCP socket
		printf("FD_READ\n");
		if (wParam != socket_UDP_groupA && wParam != socket_UDP_groupB)
		{
			ptr = GetSocketInfo(wParam);
			if (ptr->recvbytes > 0) {
				return;
			}
			// ���� ������ �ޱ�
			retval = recv(ptr->sock, ptr->buf, BUFSIZE, 0);
			// ======== ���� ==========//
			// 
			printf("[TCP Ŭ���̾�Ʈ] %d����Ʈ�� �޾ҽ��ϴ�.\n", retval);
			printf("[���� ������] %s\n", ptr->buf);
			// ======================//
			// 
			// ======== ���� =======
			addMessage(ptr->buf);
			// ====================

			if (retval == SOCKET_ERROR) {
				err_display("recv()");
				RemoveSocketInfo(wParam);
				return;
			}
			printf("[TCP] ������ ���� : %d, ������ : %s\n", retval, buf);
			// ���� ����Ʈ �� ����
			ptr->recvbytes += retval;

			// ä�� �����͸� ǥ���Ѵ�.
		}
		// UDP socket - Group A
		else if(wParam == socket_UDP_groupA)
		{
			// ������ �ޱ�
			addrlen = sizeof(clientaddr);
			retval = recvfrom(socket_UDP_groupA, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
			printf("[UDP] ������ ���� : %d, ������ : %s\n", retval, buf);
			if (retval == SOCKET_ERROR) {
				err_display("recvfrom()");
				return;
			}
			// ======== ���� =======
			addMessage(buf);
			// ====================

			// UDP�� ������ Ŭ�� ���� ����
			AddSocketInfoUDP(clientaddr);
		}
		// UDP socket - Group B
		else
		{
			// ������ �ޱ�
			addrlen = sizeof(clientaddr);
			retval = recvfrom(socket_UDP_groupB, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
			printf("[UDP] ������ ���� : %d, ������ : %s\n", retval, buf);
			if (retval == SOCKET_ERROR) {
				err_display("recvfrom()");
				return;
			}
			// ======== ���� =======
			addMessage(buf);
			// ====================

			// UDP�� ������ Ŭ�� ���� ����
			AddSocketInfoUDP(clientaddr);
		}
	case FD_WRITE:
		// UDP ������ �ƴ� ��� (TCP�� ���)
		if (wParam != socket_UDP_groupA && wParam != socket_UDP_groupB)
		{
			ptr = GetSocketInfo(wParam);
			//for (int i = 0; i < nTotalSockets; i++) {
			//	SOCKETINFO* ptr = SocketInfoArray[i];
			if (ptr->recvbytes == BUFSIZE) {
				// ���� ����Ʈ �� ����
				ptr->recvbytes = 0;

				// ���� ������ ��� Ŭ���̾�Ʈ���� �����͸� ����!
				for (int j = 0; j < nTotalSockets; j++) {
					SOCKETINFO* ptr2 = SocketInfoArray[j];
					retval = send(ptr2->sock, ptr->buf, BUFSIZE, 0);
					if (retval == SOCKET_ERROR) {
						err_display("send()");
						RemoveSocketInfo(j);
						--j; // ���� �ε��� ����
						continue;
					}
				}
			}
			//}
		}
		// UDP socket - Group A
		else if(wParam == socket_UDP_groupA)
		{
			for (int i = 0; i < nTotalUDPSockets; i++)
			{
				SOCKADDR_IN clientUDP = UDPSocketInfoArray[i];
				// ������ ������
				retval = sendto(socket_UDP_groupA, buf, BUFSIZE, 0, (SOCKADDR*)&clientUDP, sizeof(clientUDP));
				if (retval == SOCKET_ERROR) {
					err_display("sendto()");
					return;
				}
			}
		}
		// UDP socket - Group B
		else
		{
			for (int i = 0; i < nTotalUDPSockets; i++)
			{
				SOCKADDR_IN clientUDP = UDPSocketInfoArray[i];
				// ������ ������
				retval = sendto(socket_UDP_groupB, buf, BUFSIZE, 0, (SOCKADDR*)&clientUDP, sizeof(clientUDP));
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
	SOCKETINFO *ptr = new SOCKETINFO;
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
