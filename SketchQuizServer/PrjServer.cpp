#include "stdafx.h"

<<<<<<< HEAD
<<<<<<< HEAD
// // =========== ¡§»£ =============
// ≈¨∂Û¿Ãæ∆Æ ∞¸∏Æ πËø≠
int nTotalSockets = 0;
int nTotalUDPSockets = 0;
SOCKETINFO* SocketInfoArray[FD_SETSIZE]; //TCP ¿Ø¿˙µÈ ¿÷¥¬ ∫Øºˆ
SOCKADDR_IN UDPSocketInfoArray[FD_SETSIZE]; //UDP ¿Ø¿˙µÈ ¿÷¥¬ ∫Øºˆ
=======
// // =========== ÔøΩÔøΩ»£ =============
// ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ ÔøΩËø≠
int nTotalSockets = 0;
int nTotalUDPSockets = 0;
SOCKETINFO* SocketInfoArray[FD_SETSIZE]; //TCP ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩ÷¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ
SOCKADDR_IN UDPSocketInfoArray[FD_SETSIZE]; //UDP ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩ÷¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// // =========== ÔøΩÔøΩ»£ =============
// ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ ÔøΩËø≠
int nTotalSockets = 0;
int nTotalUDPSockets = 0;
SOCKETINFO* SocketInfoArray[FD_SETSIZE]; //TCP ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩ÷¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ
SOCKADDR_IN UDPSocketInfoArray[FD_SETSIZE]; //UDP ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩ÷¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)

SOCKET listen_sock4;
SOCKADDR_IN serveraddr;
SOCKET socket_UDP;

<<<<<<< HEAD
<<<<<<< HEAD
// ============= ø¨∞Ê =============== 
//char* g_msgQueue[BUFSIZE];    // ∏ﬁΩ√¡ˆ ø¯«¸ ≈•: ¿Ã¿¸ ¥Î»≠≥ªøÎ «•Ω√. ≤À ¬˜∏È ∞°¿Â ø¿∑°µ» ∏ﬁΩ√¡ˆ∫Œ≈Õ ¡ˆøˆ¡¯¥Ÿ.
//int head = 0, tail = 0;           // ø¯«¸ ≈• ¿Œµ¶Ω∫
=======
// ============= ÔøΩÔøΩÔøΩÔøΩ =============== 
//char* g_msgQueue[BUFSIZE];    // ÔøΩﬁΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ≈•: ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ»≠ÔøΩÔøΩÔøΩÔøΩ «•ÔøΩÔøΩ. ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬁΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ.
//int head = 0, tail = 0;           // ÔøΩÔøΩÔøΩÔøΩ ≈• ÔøΩŒµÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ============= ÔøΩÔøΩÔøΩÔøΩ =============== 
//char* g_msgQueue[BUFSIZE];    // ÔøΩﬁΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ≈•: ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ»≠ÔøΩÔøΩÔøΩÔøΩ «•ÔøΩÔøΩ. ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬁΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ.
//int head = 0, tail = 0;           // ÔøΩÔøΩÔøΩÔøΩ ≈• ÔøΩŒµÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
MESSAGEQUEUE g_msgQueue;

int main(int argc, char* argv[])
{
<<<<<<< HEAD
<<<<<<< HEAD
    // ========= ¡§»£ ========
    // ¿©µµøÏ ≈¨∑°Ω∫ µÓ∑œ
=======
    // ========= ÔøΩÔøΩ»£ ========
    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈¨ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ========= ÔøΩÔøΩ»£ ========
    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈¨ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
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

<<<<<<< HEAD
<<<<<<< HEAD
    // ¿”Ω√ ¿©µµøÏ ª˝º∫
    HWND hWnd = CreateWindow(_T("MyWndClass"), _T("TCP º≠πˆ"), WS_OVERLAPPEDWINDOW,
=======
    // ÔøΩ”ΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
    HWND hWnd = CreateWindow(_T("MyWndClass"), _T("TCP ÔøΩÔøΩÔøΩÔøΩ"), WS_OVERLAPPEDWINDOW,
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ÔøΩ”ΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
    HWND hWnd = CreateWindow(_T("MyWndClass"), _T("TCP ÔøΩÔøΩÔøΩÔøΩ"), WS_OVERLAPPEDWINDOW,
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
        0, 0, 600, 400, NULL, NULL, NULL, NULL);
    if (hWnd == NULL) return 1;
    ShowWindow(hWnd, SW_SHOWNORMAL);
    UpdateWindow(hWnd);

    int retval;

<<<<<<< HEAD
<<<<<<< HEAD
    // ¿©º” √ ±‚»≠
=======
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
        return 1;

<<<<<<< HEAD
<<<<<<< HEAD
    /*----- TCP/IPv4 º“ƒœ √ ±‚»≠ Ω√¿€ -----*/
    // º“ƒœ ª˝º∫
=======
    /*----- TCP/IPv4 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    /*----- TCP/IPv4 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
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

<<<<<<< HEAD
<<<<<<< HEAD
    // TCP/IPv4 º“ƒœø° ≥Ì∫Ì∑Œ≈∑ ∏µÂ º≥¡§
=======
    // TCP/IPv4 ÔøΩÔøΩÔøΩœøÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ≈∑ ÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // TCP/IPv4 ÔøΩÔøΩÔøΩœøÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ≈∑ ÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    u_long nonBlockingModeOn = 1;
    retval = ioctlsocket(listen_sock4, FIONBIO, &nonBlockingModeOn);
    if (retval == SOCKET_ERROR) {
        err_quit("ioctlsocket()");
    }
<<<<<<< HEAD
<<<<<<< HEAD
    /*----- TCP/IPv4 º“ƒœ √ ±‚»≠ ¡æ∑· -----*/

     /*----- UDP/IPv4 º“ƒœ √ ±‚»≠ Ω√¿€ -----*/
    // TODO: º“ƒœ¿ª ª˝º∫«œ∞Ì √ ±‚»≠«—¥Ÿ. == ¡§»£ ==
=======
    /*----- TCP/IPv4 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/

     /*----- UDP/IPv4 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/
    // TODO: ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩœ∞ÔøΩ ÔøΩ ±ÔøΩ»≠ÔøΩ—¥ÔøΩ. == ÔøΩÔøΩ»£ ==
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    /*----- TCP/IPv4 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/

     /*----- UDP/IPv4 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/
    // TODO: ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩœ∞ÔøΩ ÔøΩ ±ÔøΩ»≠ÔøΩ—¥ÔøΩ. == ÔøΩÔøΩ»£ ==
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)

    socket_UDP = socket(AF_INET, SOCK_DGRAM, 0);
    if (socket_UDP == INVALID_SOCKET)
    {
        err_quit("socket()");
    }

<<<<<<< HEAD
<<<<<<< HEAD
    // ∏÷∆ºƒ≥Ω∫∆Æ ±◊∑Ï ∞°¿‘
    struct ip_mreq mreq1;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP1, &mreq1.imr_multiaddr.s_addr); // ∞°¿‘«œ∞≈≥™ ≈ª≈«“ IPv4 ∏÷∆ºƒ…Ω∫∆Æ address(¡÷º“) (∞°¿‘«“ µøæ∆∏Æ)
    mreq1.imr_interface.s_addr = htonl(INADDR_ANY);      // ∑Œƒ√ ip address (≥™)
=======
    // ÔøΩÔøΩ∆ºƒ≥ÔøΩÔøΩ∆Æ ÔøΩ◊∑ÔøΩ ÔøΩÔøΩÔøΩÔøΩ
    struct ip_mreq mreq1;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP1, &mreq1.imr_multiaddr.s_addr); // ÔøΩÔøΩÔøΩÔøΩÔøΩœ∞≈≥ÔøΩ ≈ªÔøΩÔøΩÔøΩÔøΩ IPv4 ÔøΩÔøΩ∆ºÔøΩ…ΩÔøΩ∆Æ address(ÔøΩ÷ºÔøΩ) (ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ∆∏ÔøΩ)
    mreq1.imr_interface.s_addr = htonl(INADDR_ANY);      // ÔøΩÔøΩÔøΩÔøΩ ip address (ÔøΩÔøΩ)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ÔøΩÔøΩ∆ºƒ≥ÔøΩÔøΩ∆Æ ÔøΩ◊∑ÔøΩ ÔøΩÔøΩÔøΩÔøΩ
    struct ip_mreq mreq1;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP1, &mreq1.imr_multiaddr.s_addr); // ÔøΩÔøΩÔøΩÔøΩÔøΩœ∞≈≥ÔøΩ ≈ªÔøΩÔøΩÔøΩÔøΩ IPv4 ÔøΩÔøΩ∆ºÔøΩ…ΩÔøΩ∆Æ address(ÔøΩ÷ºÔøΩ) (ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ∆∏ÔøΩ)
    mreq1.imr_interface.s_addr = htonl(INADDR_ANY);      // ÔøΩÔøΩÔøΩÔøΩ ip address (ÔøΩÔøΩ)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    retval = setsockopt(socket_UDP, IPPROTO_IP, IP_ADD_MEMBERSHIP,
        (char*)&mreq1, sizeof(mreq1));
    if (retval == SOCKET_ERROR) err_quit("setsockopt() 1");

<<<<<<< HEAD
<<<<<<< HEAD
    // ∏÷∆ºƒ≥Ω∫∆Æ ±◊∑Ï ∞°¿‘
    struct ip_mreq mreq2;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP2, &mreq2.imr_multiaddr.s_addr); // ∞°¿‘«œ∞≈≥™ ≈ª≈«“ IPv4 ∏÷∆ºƒ…Ω∫∆Æ address(¡÷º“) (∞°¿‘«“ µøæ∆∏Æ)
=======
    // ÔøΩÔøΩ∆ºƒ≥ÔøΩÔøΩ∆Æ ÔøΩ◊∑ÔøΩ ÔøΩÔøΩÔøΩÔøΩ
    struct ip_mreq mreq2;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP2, &mreq2.imr_multiaddr.s_addr); // ÔøΩÔøΩÔøΩÔøΩÔøΩœ∞≈≥ÔøΩ ≈ªÔøΩÔøΩÔøΩÔøΩ IPv4 ÔøΩÔøΩ∆ºÔøΩ…ΩÔøΩ∆Æ address(ÔøΩ÷ºÔøΩ) (ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ∆∏ÔøΩ)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ÔøΩÔøΩ∆ºƒ≥ÔøΩÔøΩ∆Æ ÔøΩ◊∑ÔøΩ ÔøΩÔøΩÔøΩÔøΩ
    struct ip_mreq mreq2;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP2, &mreq2.imr_multiaddr.s_addr); // ÔøΩÔøΩÔøΩÔøΩÔøΩœ∞≈≥ÔøΩ ≈ªÔøΩÔøΩÔøΩÔøΩ IPv4 ÔøΩÔøΩ∆ºÔøΩ…ΩÔøΩ∆Æ address(ÔøΩ÷ºÔøΩ) (ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ∆∏ÔøΩ)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    mreq2.imr_interface.s_addr = htonl(INADDR_ANY);
    retval = setsockopt(socket_UDP, IPPROTO_IP, IP_ADD_MEMBERSHIP,
        (char*)&mreq2, sizeof(mreq2));
    if (retval == SOCKET_ERROR) err_quit("setsockopt() 2");

<<<<<<< HEAD
<<<<<<< HEAD
    // ---------------- ¡ˆæ» ---------------- //
    // bind() UDP ±◊∑Ï B bind
=======
    // ---------------- ÔøΩÔøΩÔøΩÔøΩ ---------------- //
    // bind() UDP ÔøΩ◊∑ÔøΩ B bind
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ---------------- ÔøΩÔøΩÔøΩÔøΩ ---------------- //
    // bind() UDP ÔøΩ◊∑ÔøΩ B bind
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)

    retval = bind(socket_UDP, (SOCKADDR*)&serveraddr, sizeof(serveraddr));
    if (retval == SOCKET_ERROR) err_quit("bind()");

    // --------------------------------------- //


<<<<<<< HEAD
<<<<<<< HEAD
    /*----- UDP/IPv4 º“ƒœ √ ±‚»≠ ¡æ∑· -----*/

    /*----- UDP/IPv6 º“ƒœ √ ±‚»≠ Ω√¿€ -----*/
    // TODO: º“ƒœ¿ª ª˝º∫«œ∞Ì √ ±‚»≠«—¥Ÿ.
    /*----- UDP/IPv6 º“ƒœ √ ±‚»≠ ¡æ∑· -----*/

    // µ•¿Ã≈Õ ≈ÎΩ≈ø° ªÁøÎ«“ ∫Øºˆ(∞¯≈Î)
    fd_set rset;
    SOCKET client_sock;
    int addrlen;
    // µ•¿Ã≈Õ ≈ÎΩ≈ø° ªÁøÎ«“ ∫Øºˆ(IPv4)
    struct sockaddr_in clientaddr4;
    // µ•¿Ã≈Õ ≈ÎΩ≈ø° ªÁøÎ«“ ∫Øºˆ(IPv6)
    struct sockaddr_in6 clientaddr6;

    // ========== ¡§»£ ==========
    int recvLen; // πﬁ¿∫ ∞°∫Ø µ•¿Ã≈Õ ≈©±‚
    int sendLen; // ∫∏≥æ ∞°∫Ø µ•¿Ã≈Õ ≈©±‚

    // WSAAsyncSelect()

    // TCP¥¬ ø¨∞·¿ª «ÿæﬂ«œπ«∑Œ FD_ACCEPT∏¶ √ﬂ∞°
    retval = WSAAsyncSelect(listen_sock4, hWnd, WM_SOCKET, FD_ACCEPT | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    // UDP¥¬ TCPøÕ ¥ﬁ∏Æ ø¨∞·¿Ã « ø‰æ¯¿∏π«∑Œ
    // FD_ACCEPT∏¶ «œ¡ˆ æ ¿Ω.
    // FD_READ∑Œ µ•¿Ã≈Õ∏¶ ºˆΩ≈«“ ºˆ ¿÷µµ∑œ º≥¡§
=======
    /*----- UDP/IPv4 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/

    /*----- UDP/IPv6 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/
    // TODO: ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩœ∞ÔøΩ ÔøΩ ±ÔøΩ»≠ÔøΩ—¥ÔøΩ.
    /*----- UDP/IPv6 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/

    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ≈øÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ(ÔøΩÔøΩÔøΩÔøΩ)
    fd_set rset;
    SOCKET client_sock;
    int addrlen;
    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ≈øÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ(IPv4)
    struct sockaddr_in clientaddr4;
    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ≈øÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ(IPv6)
    struct sockaddr_in6 clientaddr6;

    // ========== ÔøΩÔøΩ»£ ==========
    int recvLen; // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈©ÔøΩÔøΩ
    int sendLen; // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈©ÔøΩÔøΩ

    // WSAAsyncSelect()

    // TCPÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÿæÔøΩÔøΩœπ«∑ÔøΩ FD_ACCEPTÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
    retval = WSAAsyncSelect(listen_sock4, hWnd, WM_SOCKET, FD_ACCEPT | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    // UDPÔøΩÔøΩ TCPÔøΩÔøΩ ÔøΩﬁ∏ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩ øÔøΩÔøΩÔøΩÔøΩÔøΩ«∑ÔøΩ
    // FD_ACCEPTÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ.
    // FD_READÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÕ∏ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ ÔøΩ÷µÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    /*----- UDP/IPv4 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/

    /*----- UDP/IPv6 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/
    // TODO: ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩœ∞ÔøΩ ÔøΩ ±ÔøΩ»≠ÔøΩ—¥ÔøΩ.
    /*----- UDP/IPv6 ÔøΩÔøΩÔøΩÔøΩ ÔøΩ ±ÔøΩ»≠ ÔøΩÔøΩÔøΩÔøΩ -----*/

    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ≈øÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ(ÔøΩÔøΩÔøΩÔøΩ)
    fd_set rset;
    SOCKET client_sock;
    int addrlen;
    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ≈øÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ(IPv4)
    struct sockaddr_in clientaddr4;
    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ≈øÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ(IPv6)
    struct sockaddr_in6 clientaddr6;

    // ========== ÔøΩÔøΩ»£ ==========
    int recvLen; // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈©ÔøΩÔøΩ
    int sendLen; // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈©ÔøΩÔøΩ

    // WSAAsyncSelect()

    // TCPÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÿæÔøΩÔøΩœπ«∑ÔøΩ FD_ACCEPTÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
    retval = WSAAsyncSelect(listen_sock4, hWnd, WM_SOCKET, FD_ACCEPT | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    // UDPÔøΩÔøΩ TCPÔøΩÔøΩ ÔøΩﬁ∏ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩ øÔøΩÔøΩÔøΩÔøΩÔøΩ«∑ÔøΩ
    // FD_ACCEPTÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ.
    // FD_READÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÕ∏ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ ÔøΩ÷µÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    retval = WSAAsyncSelect(socket_UDP, hWnd, WM_SOCKET, FD_READ | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

<<<<<<< HEAD
<<<<<<< HEAD
    // ¿©º” ¡æ∑·
=======
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    WSACleanup();
    return 0;
}

<<<<<<< HEAD
<<<<<<< HEAD
// ======= ¡§»£ =======
// ¿©µµøÏ ∏ﬁΩ√¡ˆ √≥∏Æ
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg) {
        // =========== ¡ˆ¿± ============
=======
// ======= ÔøΩÔøΩ»£ =======
// ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬁΩÔøΩÔøΩÔøΩ √≥ÔøΩÔøΩ
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg) {
        // =========== ÔøΩÔøΩÔøΩÔøΩ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ======= ÔøΩÔøΩ»£ =======
// ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬁΩÔøΩÔøΩÔøΩ √≥ÔøΩÔøΩ
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg) {
        // =========== ÔøΩÔøΩÔøΩÔøΩ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    case WM_CREATE:
        InitializeListView(hWnd);
        return 0;
        // =============================
<<<<<<< HEAD
<<<<<<< HEAD
    case WM_SOCKET: // º“ƒœ ∞¸∑√ ¿©µµøÏ ∏ﬁΩ√¡ˆ
=======
    case WM_SOCKET: // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬁΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    case WM_SOCKET: // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬁΩÔøΩÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
        ProcessSocketMessage(hWnd, uMsg, wParam, lParam);
        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

<<<<<<< HEAD
<<<<<<< HEAD
// º“ƒœ ∞¸∑√ ¿©µµøÏ ∏ﬁΩ√¡ˆ √≥∏Æ
void ProcessSocketMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    FILE* fd;
    // µ•¿Ã≈Õ ≈ÎΩ≈ø° ªÁøÎ«“ ∫Øºˆ
    SOCKETINFO* ptr;
    SOCKET client_sock;
    SOCKADDR_IN clientaddr;
    int addrlen, retval;
    char buf[BUFSIZE + 1];

    // ø¿∑˘ πﬂª˝ ø©∫Œ »Æ¿Œ
    if (WSAGETSELECTERROR(lParam)) {
        err_display(WSAGETSELECTERROR(lParam));
        RemoveSocketInfo(wParam);
        return;
    }

    // ∏ﬁΩ√¡ˆ √≥∏Æ
    switch (WSAGETSELECTEVENT(lParam)) {
        // ¡¢º”
    case FD_ACCEPT:
        addrlen = sizeof(clientaddr);
        client_sock = accept(listen_sock4, (SOCKADDR*)&clientaddr, &addrlen);
        if (client_sock == INVALID_SOCKET) {
            err_display("accept()");
            return;
        }
        else {
            // ¡¢º”«— ≈¨∂Û¿Ãæ∆Æ ¡§∫∏ √‚∑¬
            printf("\n[TCP/IPv4 º≠πˆ] ≈¨∂Û¿Ãæ∆Æ ¡¢º”: IP ¡÷º“=%s, ∆˜∆Æ π¯»£=%d\n",
                inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
            // =========== ¡ˆ¿± ============
            //AddClientToListView(ntohs(clientaddr.sin_port));
            //DisplayClientList();
            // =============================

            // º“ƒœ ¡§∫∏ √ﬂ∞°
            AddSocketInfoTCP(client_sock);
            retval = WSAAsyncSelect(client_sock, hWnd,
                WM_SOCKET, FD_READ | FD_WRITE | FD_CLOSE);
            if (retval == SOCKET_ERROR) {
                err_display("WSAAsyncSelect()");
                RemoveSocketInfo(client_sock);
            }
=======
// ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬁΩÔøΩÔøΩÔøΩ √≥ÔøΩÔøΩ
void ProcessSocketMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	FILE* fd;
	// Îç∞Ïù¥ÌÑ∞ ÌÜµÏã†Ïóê ÏÇ¨Ïö©Ìï† Î≥ÄÏàò
	SOCKETINFO* ptr;
	SOCKET client_sock;
	SOCKADDR_IN clientaddr;
	int addrlen, retval;
	char buf[BUFSIZE + 1];

	// Ïò§Î•ò Î∞úÏÉù Ïó¨Î∂Ä ÌôïÏù∏
	if (WSAGETSELECTERROR(lParam)) {
		err_display(WSAGETSELECTERROR(lParam));
		RemoveSocketInfo(wParam);
		return;
	}

	// Î©îÏãúÏßÄ Ï≤òÎ¶¨
	switch (WSAGETSELECTEVENT(lParam)) {
	// Ï†ëÏÜç
	case FD_ACCEPT:
		addrlen = sizeof(clientaddr);
		client_sock = accept(listen_sock4, (SOCKADDR*)&clientaddr, &addrlen);
		if (client_sock == INVALID_SOCKET) {
			err_display("accept()");
			return;
		}
		else {
			// Ï†ëÏÜçÌïú ÌÅ¥ÎùºÏù¥Ïñ∏Ìä∏ Ï†ïÎ≥¥ Ï∂úÎ†•
			printf("\n[TCP/IPv4 ÏÑúÎ≤Ñ] ÌÅ¥ÎùºÏù¥Ïñ∏Ìä∏ Ï†ëÏÜç: IP Ï£ºÏÜå=%s, Ìè¨Ìä∏ Î≤àÌò∏=%d\n", 
				inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
			// =========== ÏßÄÏú§ ============
			//AddClientToListView(ntohs(clientaddr.sin_port));
			//DisplayClientList();
			// =============================
			
			// ÏÜåÏºì Ï†ïÎ≥¥ Ï∂îÍ∞Ä
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
			// Í≥†Ï†ï Îç∞Ïù¥ÌÑ∞ Î∞õÍ∏∞
			retval = recv(ptr->sock, ptr->buf, BUFSIZE, 0);
			// ============================== ÏßÄÏïà ================================//
			// COMM_MSG ÌÉÄÏûÖÏúºÎ°ú ÌòïÎ≥ÄÌôò (Í∏∞Î≥¥ÌÉÄÏûÖ) -> Íµ¨Ï°∞Ï≤¥ typeÏùÑ ÏñªÏñ¥ÎÇ¥Í∏∞ ÏúÑÌï®Ïù¥Îã§.
			COMM_MSG* comm_msg;
			comm_msg = (COMM_MSG*)&(ptr->buf);
			printf("[COMM_MSG type] %d\n", comm_msg->type); //ÏñªÏùÄ type Ï∂úÎ†•

			// TypeÏóê Îî∞Îùº Îã§Î•∏ Íµ¨Ï°∞Ï≤¥Î•º Í∞ÄÏßÑ switch (ÏßÅÏ†ë ÌòïÎ≥ÄÌôò Ìï¥Ï§òÏïº Ìï®)
			switch (comm_msg->type) {
				case (TYPE_ID) :	// TYPE_ID Ïù∏ Í≤ΩÏö∞ (id Ï∂úÎ†•)
					ID_MSG* id_msg;
					id_msg = (ID_MSG*)&(ptr->buf); // IDÎ°ú ÌòïÎ≥ÄÌôò
					printf("[TYPE_ID Î∞õÏùÄ Îç∞Ïù¥ÌÑ∞] %s\n", id_msg->msg);
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)

					setIDInSocket(id_msg->msg, ptr); //id Îì±Î°ù
					printf("[TCP] TYPE_ID, ÌòÑÏû¨ ÏÜåÏºì ÎãâÎÑ§ÏûÑ Îì±Î°ùÏôÑÎ£å : %s\n", ptr->id_nickname_char);
					printf("[TCP] TYPE_ID, ÌòÑÏû¨ ÏÜåÏºì port Îì±Î°ùÏôÑÎ£å : %d\n", ptr->sin_port);
					printf("[TCP] TYPE_ID, ÌòÑÏû¨ ÏÜåÏºì Ï£ºÏÜå(char) : %s\n", inet_ntoa(ptr->sin_addr));
					MessageBox(NULL, ptr->id_nickname, _T("ÌòÑÏû¨ ÏÜåÏºì ÎãâÎÑ§ÏûÑ Îì±Î°ùÏôÑÎ£å(_TCHAR)"), MB_ICONERROR);
          
					// =========== ÏßÄÏú§ ============
					AddClientToListView(ptr->sin_port, ptr->id_nickname_char);
					DisplayClientList();
					// =============================

					break;
				// ===== ÔøΩÔøΩÔøΩÔøΩ ====
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

			//printf("[TCP ÌÅ¥ÎùºÏù¥Ïñ∏Ìä∏] %dÎ∞îÏù¥Ìä∏Î•º Î∞õÏïòÏäµÎãàÎã§.\n", retval);
			//printf("[Î∞õÏùÄ Îç∞Ïù¥ÌÑ∞] %s\n", ptr->buf);
			// ================================================================== //
			// 
			// ======== Ïó∞Í≤Ω =======
			addMessage(ptr->buf);
			// ====================

			if (retval == SOCKET_ERROR) {
				err_display("recv()");
				RemoveSocketInfo(wParam);
				return;
			}
			printf("[TCP] Îç∞Ïù¥ÌÑ∞ Í∏∏Ïù¥ : %d, Îç∞Ïù¥ÌÑ∞ : %s\n", retval, buf);
			// Î∞õÏùÄ Î∞îÏù¥Ìä∏ Ïàò ÎàÑÏ†Å
			ptr->recvbytes += retval;

<<<<<<< HEAD
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
            // ∞Ì¡§ µ•¿Ã≈Õ πﬁ±‚
            COMM_MSG comm_msg2;
            retval = recv(ptr->sock, ptr->buf, BUFSIZE, 0);

            // ============================== ¡ˆæ» ================================//
            // COMM_MSG ≈∏¿‘¿∏∑Œ «¸∫Ø»Ø (±‚∫∏≈∏¿‘) -> ±∏¡∂√º type¿ª æÚæÓ≥ª±‚ ¿ß«‘¿Ã¥Ÿ.
            COMM_MSG* comm_msg;
            comm_msg = (COMM_MSG*)&(ptr->buf);
            printf("[COMM_MSG type] %d\n", comm_msg->type); //æÚ¿∫ type √‚∑¬

            // Typeø° µ˚∂Û ¥Ÿ∏• ±∏¡∂√º∏¶ ∞°¡¯ switch (¡˜¡¢ «¸∫Ø»Ø «ÿ¡‡æﬂ «‘)
            switch (comm_msg->type) {
            case (TYPE_ID):   // TYPE_ID ¿Œ ∞ÊøÏ (id √‚∑¬)
                ID_MSG* id_msg;
                id_msg = (ID_MSG*)&(ptr->buf); // ID∑Œ «¸∫Ø»Ø
                printf("[TYPE_ID πﬁ¿∫ µ•¿Ã≈Õ] %s\n", id_msg->msg);
                //strcpy((char*)ptr->id_nickname, id_msg->msg);
                break;
                // ===== ø¨∞Ê ====
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

            printf("[TCP ≈¨∂Û¿Ãæ∆Æ] %dπŸ¿Ã∆Æ∏¶ πﬁæ“Ω¿¥œ¥Ÿ.\n", retval);
            printf("[πﬁ¿∫ µ•¿Ã≈Õ] %s\n", ptr->buf);
            // ================================================================== //
            // 
            // ======== ø¨∞Ê =======
            addMessage(ptr->buf);
            // ====================

            if (retval == SOCKET_ERROR) {
                err_display("recv()");
                RemoveSocketInfo(wParam);
                return;
            }
            printf("[TCP] µ•¿Ã≈Õ ±Ê¿Ã : %d, µ•¿Ã≈Õ : %s\n", retval, buf);
            // πﬁ¿∫ πŸ¿Ã∆Æ ºˆ ¥©¿˚
            ptr->recvbytes += retval;

            // √§∆√ µ•¿Ã≈Õ∏∏ «•±‚«—¥Ÿ.
        }
        // UDP socket
        else
        {
            // µ•¿Ã≈Õ πﬁ±‚
            addrlen = sizeof(clientaddr);
            retval = recvfrom(socket_UDP, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
            printf("[UDP] µ•¿Ã≈Õ ±Ê¿Ã : %d, µ•¿Ã≈Õ : %s\n", retval, buf);
            if (retval == SOCKET_ERROR) {
                err_display("recvfrom()");
                return;
            }
            // ======== ø¨∞Ê =======
            addMessage(buf);
            // ====================

            // UDP∑Œ ¡¢º”«— ≈¨∂Û ¡§∫∏ ºˆ¡˝
            AddSocketInfoUDP(clientaddr);
        }
    case FD_WRITE:
        // UDP º“ƒœ¿Ã æ∆¥— ∞ÊøÏ (TCP¿Œ ∞ÊøÏ)
        if (wParam != socket_UDP)
        {
            ptr = GetSocketInfo(wParam);
            //for (int i = 0; i < nTotalSockets; i++) {
            //   SOCKETINFO* ptr = SocketInfoArray[i];
            if (ptr->recvbytes == BUFSIZE) {
                // πﬁ¿∫ πŸ¿Ã∆Æ ºˆ ∏Æº¬
                ptr->recvbytes = 0;

                // «ˆ¿Á ¡¢º”«— ∏µÁ ≈¨∂Û¿Ãæ∆Æø°∞‘ µ•¿Ã≈Õ∏¶ ∫∏≥ø!
                for (int j = 0; j < nTotalSockets; j++) {
                    SOCKETINFO* ptr2 = SocketInfoArray[j];
                    retval = send(ptr2->sock, ptr->buf, BUFSIZE, 0);
                    if (retval == SOCKET_ERROR) {
                        err_display("send()");
                        RemoveSocketInfo(j);
                        --j; // ∑Á«¡ ¿Œµ¶Ω∫ ∫∏¡§
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
                // µ•¿Ã≈Õ ∫∏≥ª±‚
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

// º“ƒœ ¡§∫∏ æÚ±‚
SOCKETINFO* GetSocketInfo(SOCKET sock)
{
    // «ˆ¿Á ¡¢º”«— ≈¨∂Û¿Ãæ∆Æ ¡ﬂø°º≠ ¿œƒ°«œ¥¬ º“ƒœ ≈Ωªˆ
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // √£æ“¿ª ∞ÊøÏ, «ÿ¥Á º“ƒœ π›»Ø
=======
			// Ï±ÑÌåÖ Îç∞Ïù¥ÌÑ∞Îßå ÌëúÍ∏∞ÌïúÎã§.
		}
		// UDP socket
		else
		{
			// Îç∞Ïù¥ÌÑ∞ Î∞õÍ∏∞
			addrlen = sizeof(clientaddr);
			retval = recvfrom(socket_UDP, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
			printf("[UDP] Îç∞Ïù¥ÌÑ∞ Í∏∏Ïù¥ : %d, Îç∞Ïù¥ÌÑ∞ : %s\n", retval, buf);
			if (retval == SOCKET_ERROR) {
				err_display("recvfrom()");
				return;
			}
			// ======== Ïó∞Í≤Ω =======
			addMessage(buf);
			// ====================

			// UDPÎ°ú Ï†ëÏÜçÌïú ÌÅ¥Îùº Ï†ïÎ≥¥ ÏàòÏßë
			AddSocketInfoUDP(clientaddr);
		}
	case FD_WRITE:
		// UDP ÏÜåÏºìÏù¥ ÏïÑÎãå Í≤ΩÏö∞ (TCPÏù∏ Í≤ΩÏö∞)
		if (wParam != socket_UDP)
		{
			ptr = GetSocketInfo(wParam);
			//for (int i = 0; i < nTotalSockets; i++) {
			//	SOCKETINFO* ptr = SocketInfoArray[i];
			if (ptr->recvbytes == BUFSIZE) {
				// Î∞õÏùÄ Î∞îÏù¥Ìä∏ Ïàò Î¶¨ÏÖã
				ptr->recvbytes = 0;

				// ÌòÑÏû¨ Ï†ëÏÜçÌïú Î™®Îì† ÌÅ¥ÎùºÏù¥Ïñ∏Ìä∏ÏóêÍ≤å Îç∞Ïù¥ÌÑ∞Î•º Î≥¥ÎÉÑ!
				for (int j = 0; j < nTotalSockets; j++) {
					SOCKETINFO* ptr2 = SocketInfoArray[j];
					retval = send(ptr2->sock, ptr->buf, BUFSIZE, 0);
					if (retval == SOCKET_ERROR) {
						err_display("send()");
						RemoveSocketInfo(j);
						--j; // Î£®ÌîÑ Ïù∏Îç±Ïä§ Î≥¥Ï†ï
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
				// Îç∞Ïù¥ÌÑ∞ Î≥¥ÎÇ¥Í∏∞
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

// ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ
SOCKETINFO* GetSocketInfo(SOCKET sock)
{
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩﬂøÔøΩÔøΩÔøΩ ÔøΩÔøΩƒ°ÔøΩœ¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ ≈ΩÔøΩÔøΩ
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // √£ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ, ÔøΩÿ¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ»Ø
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬁΩÔøΩÔøΩÔøΩ √≥ÔøΩÔøΩ
void ProcessSocketMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	FILE* fd;
	// Îç∞Ïù¥ÌÑ∞ ÌÜµÏã†Ïóê ÏÇ¨Ïö©Ìï† Î≥ÄÏàò
	SOCKETINFO* ptr;
	SOCKET client_sock;
	SOCKADDR_IN clientaddr;
	int addrlen, retval;
	char buf[BUFSIZE + 1];

	// Ïò§Î•ò Î∞úÏÉù Ïó¨Î∂Ä ÌôïÏù∏
	if (WSAGETSELECTERROR(lParam)) {
		err_display(WSAGETSELECTERROR(lParam));
		RemoveSocketInfo(wParam);
		return;
	}

	// Î©îÏãúÏßÄ Ï≤òÎ¶¨
	switch (WSAGETSELECTEVENT(lParam)) {
	// Ï†ëÏÜç
	case FD_ACCEPT:
		addrlen = sizeof(clientaddr);
		client_sock = accept(listen_sock4, (SOCKADDR*)&clientaddr, &addrlen);
		if (client_sock == INVALID_SOCKET) {
			err_display("accept()");
			return;
		}
		else {
			// Ï†ëÏÜçÌïú ÌÅ¥ÎùºÏù¥Ïñ∏Ìä∏ Ï†ïÎ≥¥ Ï∂úÎ†•
			printf("\n[TCP/IPv4 ÏÑúÎ≤Ñ] ÌÅ¥ÎùºÏù¥Ïñ∏Ìä∏ Ï†ëÏÜç: IP Ï£ºÏÜå=%s, Ìè¨Ìä∏ Î≤àÌò∏=%d\n", 
				inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
			// =========== ÏßÄÏú§ ============
			//AddClientToListView(ntohs(clientaddr.sin_port));
			//DisplayClientList();
			// =============================
			
			// ÏÜåÏºì Ï†ïÎ≥¥ Ï∂îÍ∞Ä
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
			// Í≥†Ï†ï Îç∞Ïù¥ÌÑ∞ Î∞õÍ∏∞
			retval = recv(ptr->sock, ptr->buf, BUFSIZE, 0);
			// ============================== ÏßÄÏïà ================================//
			// COMM_MSG ÌÉÄÏûÖÏúºÎ°ú ÌòïÎ≥ÄÌôò (Í∏∞Î≥¥ÌÉÄÏûÖ) -> Íµ¨Ï°∞Ï≤¥ typeÏùÑ ÏñªÏñ¥ÎÇ¥Í∏∞ ÏúÑÌï®Ïù¥Îã§.
			COMM_MSG* comm_msg;
			comm_msg = (COMM_MSG*)&(ptr->buf);
			printf("[COMM_MSG type] %d\n", comm_msg->type); //ÏñªÏùÄ type Ï∂úÎ†•

			// TypeÏóê Îî∞Îùº Îã§Î•∏ Íµ¨Ï°∞Ï≤¥Î•º Í∞ÄÏßÑ switch (ÏßÅÏ†ë ÌòïÎ≥ÄÌôò Ìï¥Ï§òÏïº Ìï®)
			switch (comm_msg->type) {
				case (TYPE_ID) :	// TYPE_ID Ïù∏ Í≤ΩÏö∞ (id Ï∂úÎ†•)
					ID_MSG* id_msg;
					id_msg = (ID_MSG*)&(ptr->buf); // IDÎ°ú ÌòïÎ≥ÄÌôò
					printf("[TYPE_ID Î∞õÏùÄ Îç∞Ïù¥ÌÑ∞] %s\n", id_msg->msg);

					setIDInSocket(id_msg->msg, ptr); //id Îì±Î°ù
					printf("[TCP] TYPE_ID, ÌòÑÏû¨ ÏÜåÏºì ÎãâÎÑ§ÏûÑ Îì±Î°ùÏôÑÎ£å : %s\n", ptr->id_nickname_char);
					printf("[TCP] TYPE_ID, ÌòÑÏû¨ ÏÜåÏºì port Îì±Î°ùÏôÑÎ£å : %d\n", ptr->sin_port);
					printf("[TCP] TYPE_ID, ÌòÑÏû¨ ÏÜåÏºì Ï£ºÏÜå(char) : %s\n", inet_ntoa(ptr->sin_addr));
					MessageBox(NULL, ptr->id_nickname, _T("ÌòÑÏû¨ ÏÜåÏºì ÎãâÎÑ§ÏûÑ Îì±Î°ùÏôÑÎ£å(_TCHAR)"), MB_ICONERROR);
          
					// =========== ÏßÄÏú§ ============
					AddClientToListView(ptr->sin_port, ptr->id_nickname_char);
					DisplayClientList();
					// =============================

					break;
				// ===== ÔøΩÔøΩÔøΩÔøΩ ====
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

			//printf("[TCP ÌÅ¥ÎùºÏù¥Ïñ∏Ìä∏] %dÎ∞îÏù¥Ìä∏Î•º Î∞õÏïòÏäµÎãàÎã§.\n", retval);
			//printf("[Î∞õÏùÄ Îç∞Ïù¥ÌÑ∞] %s\n", ptr->buf);
			// ================================================================== //
			// 
			// ======== Ïó∞Í≤Ω =======
			addMessage(ptr->buf);
			// ====================

			if (retval == SOCKET_ERROR) {
				err_display("recv()");
				RemoveSocketInfo(wParam);
				return;
			}
			printf("[TCP] Îç∞Ïù¥ÌÑ∞ Í∏∏Ïù¥ : %d, Îç∞Ïù¥ÌÑ∞ : %s\n", retval, buf);
			// Î∞õÏùÄ Î∞îÏù¥Ìä∏ Ïàò ÎàÑÏ†Å
			ptr->recvbytes += retval;

			// Ï±ÑÌåÖ Îç∞Ïù¥ÌÑ∞Îßå ÌëúÍ∏∞ÌïúÎã§.
		}
		// UDP socket
		else
		{
			// Îç∞Ïù¥ÌÑ∞ Î∞õÍ∏∞
			addrlen = sizeof(clientaddr);
			retval = recvfrom(socket_UDP, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
			printf("[UDP] Îç∞Ïù¥ÌÑ∞ Í∏∏Ïù¥ : %d, Îç∞Ïù¥ÌÑ∞ : %s\n", retval, buf);
			if (retval == SOCKET_ERROR) {
				err_display("recvfrom()");
				return;
			}
			// ======== Ïó∞Í≤Ω =======
			addMessage(buf);
			// ====================

			// UDPÎ°ú Ï†ëÏÜçÌïú ÌÅ¥Îùº Ï†ïÎ≥¥ ÏàòÏßë
			AddSocketInfoUDP(clientaddr);
		}
	case FD_WRITE:
		// UDP ÏÜåÏºìÏù¥ ÏïÑÎãå Í≤ΩÏö∞ (TCPÏù∏ Í≤ΩÏö∞)
		if (wParam != socket_UDP)
		{
			ptr = GetSocketInfo(wParam);
			//for (int i = 0; i < nTotalSockets; i++) {
			//	SOCKETINFO* ptr = SocketInfoArray[i];
			if (ptr->recvbytes == BUFSIZE) {
				// Î∞õÏùÄ Î∞îÏù¥Ìä∏ Ïàò Î¶¨ÏÖã
				ptr->recvbytes = 0;

				// ÌòÑÏû¨ Ï†ëÏÜçÌïú Î™®Îì† ÌÅ¥ÎùºÏù¥Ïñ∏Ìä∏ÏóêÍ≤å Îç∞Ïù¥ÌÑ∞Î•º Î≥¥ÎÉÑ!
				for (int j = 0; j < nTotalSockets; j++) {
					SOCKETINFO* ptr2 = SocketInfoArray[j];
					retval = send(ptr2->sock, ptr->buf, BUFSIZE, 0);
					if (retval == SOCKET_ERROR) {
						err_display("send()");
						RemoveSocketInfo(j);
						--j; // Î£®ÌîÑ Ïù∏Îç±Ïä§ Î≥¥Ï†ï
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
				// Îç∞Ïù¥ÌÑ∞ Î≥¥ÎÇ¥Í∏∞
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

// ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ
SOCKETINFO* GetSocketInfo(SOCKET sock)
{
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩﬂøÔøΩÔøΩÔøΩ ÔøΩÔøΩƒ°ÔøΩœ¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ ≈ΩÔøΩÔøΩ
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // √£ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ, ÔøΩÿ¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ»Ø
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
        if (ptr->sock == sock)
        {
            return ptr;
        }
    }
    return NULL;
}

<<<<<<< HEAD
<<<<<<< HEAD
// UDP ≈¨∂Û ¡§∫∏ √ﬂ∞°
bool AddSocketInfoUDP(SOCKADDR_IN addr)
{
    // ¿Ã¿¸ø° ¡¢º”«— ¿˚¿Ã ¿÷¥¬ ªÛ≈¬¿Œ¡ˆ »Æ¿Œ
=======
// UDP ≈¨ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
bool AddSocketInfoUDP(SOCKADDR_IN addr)
{
    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩ÷¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ »ÆÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// UDP ≈¨ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
bool AddSocketInfoUDP(SOCKADDR_IN addr)
{
    // ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩ÷¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ »ÆÔøΩÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    for (int i = 0; i < nTotalUDPSockets; i++)
    {
        if (inet_ntoa(UDPSocketInfoArray[i].sin_addr) == inet_ntoa(addr.sin_addr) &&
            ntohs(UDPSocketInfoArray[i].sin_port) == ntohs(addr.sin_port) &&
            ntohs(UDPSocketInfoArray[i].sin_family) == ntohs(addr.sin_family))
        {
            return false;
        }
    }

<<<<<<< HEAD
<<<<<<< HEAD
    // UDP ≈¨∂Û ¡§∫∏ √ﬂ∞°
=======
    // UDP ≈¨ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // UDP ≈¨ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    UDPSocketInfoArray[nTotalUDPSockets++] = addr;
    return true;
}

<<<<<<< HEAD
<<<<<<< HEAD
// TCP º“ƒœ ¡§∫∏ √ﬂ∞°
bool AddSocketInfoTCP(SOCKET sock)
{
    if (nTotalSockets >= FD_SETSIZE) {
        printf("[ø¿∑˘] º“ƒœ ¡§∫∏∏¶ √ﬂ∞°«“ ºˆ æ¯Ω¿¥œ¥Ÿ!\n");
=======
// TCP ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
bool AddSocketInfoTCP(SOCKET sock)
{
    if (nTotalSockets >= FD_SETSIZE) {
        printf("[ÔøΩÔøΩÔøΩÔøΩ] ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬂ∞ÔøΩÔøΩÔøΩ ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩœ¥ÔøΩ!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// TCP ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
bool AddSocketInfoTCP(SOCKET sock)
{
    if (nTotalSockets >= FD_SETSIZE) {
        printf("[ÔøΩÔøΩÔøΩÔøΩ] ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩﬂ∞ÔøΩÔøΩÔøΩ ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩœ¥ÔøΩ!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
        return false;
    }
    SOCKETINFO* ptr = new SOCKETINFO;
    if (ptr == NULL) {
<<<<<<< HEAD
<<<<<<< HEAD
        printf("[ø¿∑˘] ∏ﬁ∏∏Æ∞° ∫Œ¡∑«’¥œ¥Ÿ!\n");
=======
        printf("[ÔøΩÔøΩÔøΩÔøΩ] ÔøΩﬁ∏∏Æ∞ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ’¥œ¥ÔøΩ!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
        printf("[ÔøΩÔøΩÔøΩÔøΩ] ÔøΩﬁ∏∏Æ∞ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ’¥œ¥ÔøΩ!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
        return false;
    }
    ptr->sock = sock;
    ptr->recvbytes = 0;


<<<<<<< HEAD
<<<<<<< HEAD
    // TCP º“ƒœ πËø≠ø° √ﬂ∞°
=======
    // TCP ÔøΩÔøΩÔøΩÔøΩ ÔøΩËø≠ÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // TCP ÔøΩÔøΩÔøΩÔøΩ ÔøΩËø≠ÔøΩÔøΩ ÔøΩﬂ∞ÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    SocketInfoArray[nTotalSockets++] = ptr;

    return true;
}

<<<<<<< HEAD
<<<<<<< HEAD
// º“ƒœ ¡§∫∏ ªË¡¶
void RemoveSocketInfo(SOCKET sock)
{

    // ≈¨∂Û¿Ãæ∆Æ ¡§∫∏ æÚ±‚
    struct sockaddr_in clientaddr;
    int addrlen = sizeof(clientaddr);
    getpeername(sock, (struct sockaddr*)&clientaddr, &addrlen);
    // ≈¨∂Û¿Ãæ∆Æ ¡§∫∏ √‚∑¬
    char addr[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &clientaddr.sin_addr, addr, sizeof(addr));
    printf("[TCP/IPv4 º≠πˆ] ≈¨∂Û¿Ãæ∆Æ ¡æ∑·: IP ¡÷º“=%s, ∆˜∆Æ π¯»£=%d\n",
        addr, ntohs(clientaddr.sin_port));
    // =========== ¡ˆ¿± ============
=======
// ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
void RemoveSocketInfo(SOCKET sock)
{

    // ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ
    struct sockaddr_in clientaddr;
    int addrlen = sizeof(clientaddr);
    getpeername(sock, (struct sockaddr*)&clientaddr, &addrlen);
    // ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ
    char addr[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &clientaddr.sin_addr, addr, sizeof(addr));
    printf("[TCP/IPv4 ÔøΩÔøΩÔøΩÔøΩ] ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ: IP ÔøΩ÷ºÔøΩ=%s, ÔøΩÔøΩ∆Æ ÔøΩÔøΩ»£=%d\n",
        addr, ntohs(clientaddr.sin_port));
    // =========== ÔøΩÔøΩÔøΩÔøΩ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
void RemoveSocketInfo(SOCKET sock)
{

    // ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ
    struct sockaddr_in clientaddr;
    int addrlen = sizeof(clientaddr);
    getpeername(sock, (struct sockaddr*)&clientaddr, &addrlen);
    // ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ
    char addr[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &clientaddr.sin_addr, addr, sizeof(addr));
    printf("[TCP/IPv4 ÔøΩÔøΩÔøΩÔøΩ] ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ: IP ÔøΩ÷ºÔøΩ=%s, ÔøΩÔøΩ∆Æ ÔøΩÔøΩ»£=%d\n",
        addr, ntohs(clientaddr.sin_port));
    // =========== ÔøΩÔøΩÔøΩÔøΩ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    RemoveClientFromListView(ntohs(clientaddr.sin_port));
    DisplayClientList();
    // =============================

<<<<<<< HEAD
<<<<<<< HEAD
    // ≈¨∂Û¿Ãæ∆Æ º“ƒœ ¡¶∞≈
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // √£æ“¿ª ∞ÊøÏ, «ÿ¥Á º“ƒœ π›»Ø
=======
    // ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // √£ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ, ÔøΩÿ¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ»Ø
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆Æ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // √£ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ, ÔøΩÿ¥ÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ»Ø
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
        if (ptr->sock == sock)
        {
            if (i != (nTotalSockets - 1))
            {
                SocketInfoArray[i] = SocketInfoArray[nTotalSockets - 1];
            }
            --nTotalSockets;
        }
    }

<<<<<<< HEAD
<<<<<<< HEAD
    // º“ƒœ ¥›±‚
=======
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩ›±ÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ÔøΩÔøΩÔøΩÔøΩ ÔøΩ›±ÔøΩ
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    closesocket(sock);
}


void addMessage(char* message) {
<<<<<<< HEAD
<<<<<<< HEAD
    if ((g_msgQueue.tail + 1) % BUFSIZE == g_msgQueue.head) { //≈•∞° ≤À¬˘ ∞ÊøÏ: 
        g_msgQueue.head = (g_msgQueue.head + 1) % BUFSIZE; //∏∂¡ˆ∏∑ ø‰º“∏¶ «œ≥™ ¡ˆøÏ∞Ì ∞¯∞£ «œ≥™∏¶ »Æ∫∏«—¥Ÿ.
=======
    if ((g_msgQueue.tail + 1) % BUFSIZE == g_msgQueue.head) { //≈•ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ: 
        g_msgQueue.head = (g_msgQueue.head + 1) % BUFSIZE; //ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ“∏ÔøΩ ÔøΩœ≥ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩœ≥ÔøΩÔøΩÔøΩ »ÆÔøΩÔøΩÔøΩ—¥ÔøΩ.
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    if ((g_msgQueue.tail + 1) % BUFSIZE == g_msgQueue.head) { //≈•ÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩ: 
        g_msgQueue.head = (g_msgQueue.head + 1) % BUFSIZE; //ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩ“∏ÔøΩ ÔøΩœ≥ÔøΩ ÔøΩÔøΩÔøΩÔøΩÔøΩ ÔøΩÔøΩÔøΩÔøΩ ÔøΩœ≥ÔøΩÔøΩÔøΩ »ÆÔøΩÔøΩÔøΩ—¥ÔøΩ.
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    }
    strcpy(g_msgQueue.queue[g_msgQueue.tail], message);
    g_msgQueue.tail = (g_msgQueue.tail + 1) % BUFSIZE;
}

<<<<<<< HEAD
<<<<<<< HEAD
// º≠πˆø°º≠ ≈¨∂Û¿Ãæ∆Æø° 
=======
// ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆ÆÔøΩÔøΩ 
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩÔøΩ ≈¨ÔøΩÔøΩÔøΩÃæÔøΩ∆ÆÔøΩÔøΩ 
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
DWORD WINAPI messageQueueThread(LPVOID arg) {
    return 0;
}