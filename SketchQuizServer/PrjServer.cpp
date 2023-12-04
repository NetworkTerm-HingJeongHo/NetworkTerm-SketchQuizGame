#include "stdafx.h"

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// // =========== Á¤È£ =============
// Å¬¶óÀÌ¾ğÆ® °ü¸® ¹è¿­
int nTotalSockets = 0;
int nTotalUDPSockets = 0;
SOCKETINFO* SocketInfoArray[FD_SETSIZE]; //TCP À¯Àúµé ÀÖ´Â º¯¼ö
SOCKADDR_IN UDPSocketInfoArray[FD_SETSIZE]; //UDP À¯Àúµé ÀÖ´Â º¯¼ö
=======
// // =========== ï¿½ï¿½È£ =============
// Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½è¿­
int nTotalSockets = 0;
int nTotalUDPSockets = 0;
SOCKETINFO* SocketInfoArray[FD_SETSIZE]; //TCP ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½
SOCKADDR_IN UDPSocketInfoArray[FD_SETSIZE]; //UDP ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// // =========== ï¿½ï¿½È£ =============
// Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½è¿­
int nTotalSockets = 0;
int nTotalUDPSockets = 0;
SOCKETINFO* SocketInfoArray[FD_SETSIZE]; //TCP ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½
SOCKADDR_IN UDPSocketInfoArray[FD_SETSIZE]; //UDP ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// // =========== ï¿½ï¿½È£ =============
// Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½è¿­
int nTotalSockets = 0;
int nTotalUDPSockets = 0;
SOCKETINFO* SocketInfoArray[FD_SETSIZE]; //TCP ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½
SOCKADDR_IN UDPSocketInfoArray[FD_SETSIZE]; //UDP ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)

SOCKET listen_sock4;
SOCKADDR_IN serveraddr;
SOCKET socket_UDP;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// ============= ¿¬°æ =============== 
//char* g_msgQueue[BUFSIZE];    // ¸Ş½ÃÁö ¿øÇü Å¥: ÀÌÀü ´ëÈ­³»¿ë Ç¥½Ã. ²Ë Â÷¸é °¡Àå ¿À·¡µÈ ¸Ş½ÃÁöºÎÅÍ Áö¿öÁø´Ù.
//int head = 0, tail = 0;           // ¿øÇü Å¥ ÀÎµ¦½º
=======
// ============= ï¿½ï¿½ï¿½ï¿½ =============== 
//char* g_msgQueue[BUFSIZE];    // ï¿½Ş½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ Å¥: ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È­ï¿½ï¿½ï¿½ï¿½ Ç¥ï¿½ï¿½. ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.
//int head = 0, tail = 0;           // ï¿½ï¿½ï¿½ï¿½ Å¥ ï¿½Îµï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ============= ï¿½ï¿½ï¿½ï¿½ =============== 
//char* g_msgQueue[BUFSIZE];    // ï¿½Ş½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ Å¥: ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È­ï¿½ï¿½ï¿½ï¿½ Ç¥ï¿½ï¿½. ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.
//int head = 0, tail = 0;           // ï¿½ï¿½ï¿½ï¿½ Å¥ ï¿½Îµï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ============= ï¿½ï¿½ï¿½ï¿½ =============== 
//char* g_msgQueue[BUFSIZE];    // ï¿½Ş½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ Å¥: ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È­ï¿½ï¿½ï¿½ï¿½ Ç¥ï¿½ï¿½. ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½.
//int head = 0, tail = 0;           // ï¿½ï¿½ï¿½ï¿½ Å¥ ï¿½Îµï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
MESSAGEQUEUE g_msgQueue;

int main(int argc, char* argv[])
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    // ========= Á¤È£ ========
    // À©µµ¿ì Å¬·¡½º µî·Ï
=======
    // ========= ï¿½ï¿½È£ ========
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å¬ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ========= ï¿½ï¿½È£ ========
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å¬ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ========= ï¿½ï¿½È£ ========
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å¬ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
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
<<<<<<< HEAD
    // ÀÓ½Ã À©µµ¿ì »ı¼º
    HWND hWnd = CreateWindow(_T("MyWndClass"), _T("TCP ¼­¹ö"), WS_OVERLAPPEDWINDOW,
=======
    // ï¿½Ó½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
    HWND hWnd = CreateWindow(_T("MyWndClass"), _T("TCP ï¿½ï¿½ï¿½ï¿½"), WS_OVERLAPPEDWINDOW,
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½Ó½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
    HWND hWnd = CreateWindow(_T("MyWndClass"), _T("TCP ï¿½ï¿½ï¿½ï¿½"), WS_OVERLAPPEDWINDOW,
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½Ó½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
    HWND hWnd = CreateWindow(_T("MyWndClass"), _T("TCP ï¿½ï¿½ï¿½ï¿½"), WS_OVERLAPPEDWINDOW,
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
        0, 0, 600, 400, NULL, NULL, NULL, NULL);
    if (hWnd == NULL) return 1;
    ShowWindow(hWnd, SW_SHOWNORMAL);
    UpdateWindow(hWnd);

    int retval;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    // À©¼Ó ÃÊ±âÈ­
=======
    // ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
        return 1;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    /*----- TCP/IPv4 ¼ÒÄÏ ÃÊ±âÈ­ ½ÃÀÛ -----*/
    // ¼ÒÄÏ »ı¼º
=======
    /*----- TCP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/
    // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    /*----- TCP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/
    // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    /*----- TCP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/
    // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
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
<<<<<<< HEAD
    // TCP/IPv4 ¼ÒÄÏ¿¡ ³íºí·ÎÅ· ¸ğµå ¼³Á¤
=======
    // TCP/IPv4 ï¿½ï¿½ï¿½Ï¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Å· ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // TCP/IPv4 ï¿½ï¿½ï¿½Ï¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Å· ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // TCP/IPv4 ï¿½ï¿½ï¿½Ï¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Å· ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    u_long nonBlockingModeOn = 1;
    retval = ioctlsocket(listen_sock4, FIONBIO, &nonBlockingModeOn);
    if (retval == SOCKET_ERROR) {
        err_quit("ioctlsocket()");
    }
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    /*----- TCP/IPv4 ¼ÒÄÏ ÃÊ±âÈ­ Á¾·á -----*/

     /*----- UDP/IPv4 ¼ÒÄÏ ÃÊ±âÈ­ ½ÃÀÛ -----*/
    // TODO: ¼ÒÄÏÀ» »ı¼ºÇÏ°í ÃÊ±âÈ­ÇÑ´Ù. == Á¤È£ ==
=======
    /*----- TCP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/

     /*----- UDP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/
    // TODO: ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï°ï¿½ ï¿½Ê±ï¿½È­ï¿½Ñ´ï¿½. == ï¿½ï¿½È£ ==
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    /*----- TCP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/

     /*----- UDP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/
    // TODO: ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï°ï¿½ ï¿½Ê±ï¿½È­ï¿½Ñ´ï¿½. == ï¿½ï¿½È£ ==
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    /*----- TCP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/

     /*----- UDP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/
    // TODO: ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï°ï¿½ ï¿½Ê±ï¿½È­ï¿½Ñ´ï¿½. == ï¿½ï¿½È£ ==
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)

    socket_UDP = socket(AF_INET, SOCK_DGRAM, 0);
    if (socket_UDP == INVALID_SOCKET)
    {
        err_quit("socket()");
    }

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    // ¸ÖÆ¼Ä³½ºÆ® ±×·ì °¡ÀÔ
    struct ip_mreq mreq1;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP1, &mreq1.imr_multiaddr.s_addr); // °¡ÀÔÇÏ°Å³ª Å»ÅğÇÒ IPv4 ¸ÖÆ¼ÄÉ½ºÆ® address(ÁÖ¼Ò) (°¡ÀÔÇÒ µ¿¾Æ¸®)
    mreq1.imr_interface.s_addr = htonl(INADDR_ANY);      // ·ÎÄÃ ip address (³ª)
=======
    // ï¿½ï¿½Æ¼Ä³ï¿½ï¿½Æ® ï¿½×·ï¿½ ï¿½ï¿½ï¿½ï¿½
    struct ip_mreq mreq1;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP1, &mreq1.imr_multiaddr.s_addr); // ï¿½ï¿½ï¿½ï¿½ï¿½Ï°Å³ï¿½ Å»ï¿½ï¿½ï¿½ï¿½ IPv4 ï¿½ï¿½Æ¼ï¿½É½ï¿½Æ® address(ï¿½Ö¼ï¿½) (ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Æ¸ï¿½)
    mreq1.imr_interface.s_addr = htonl(INADDR_ANY);      // ï¿½ï¿½ï¿½ï¿½ ip address (ï¿½ï¿½)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½Æ¼Ä³ï¿½ï¿½Æ® ï¿½×·ï¿½ ï¿½ï¿½ï¿½ï¿½
    struct ip_mreq mreq1;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP1, &mreq1.imr_multiaddr.s_addr); // ï¿½ï¿½ï¿½ï¿½ï¿½Ï°Å³ï¿½ Å»ï¿½ï¿½ï¿½ï¿½ IPv4 ï¿½ï¿½Æ¼ï¿½É½ï¿½Æ® address(ï¿½Ö¼ï¿½) (ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Æ¸ï¿½)
    mreq1.imr_interface.s_addr = htonl(INADDR_ANY);      // ï¿½ï¿½ï¿½ï¿½ ip address (ï¿½ï¿½)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½Æ¼Ä³ï¿½ï¿½Æ® ï¿½×·ï¿½ ï¿½ï¿½ï¿½ï¿½
    struct ip_mreq mreq1;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP1, &mreq1.imr_multiaddr.s_addr); // ï¿½ï¿½ï¿½ï¿½ï¿½Ï°Å³ï¿½ Å»ï¿½ï¿½ï¿½ï¿½ IPv4 ï¿½ï¿½Æ¼ï¿½É½ï¿½Æ® address(ï¿½Ö¼ï¿½) (ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Æ¸ï¿½)
    mreq1.imr_interface.s_addr = htonl(INADDR_ANY);      // ï¿½ï¿½ï¿½ï¿½ ip address (ï¿½ï¿½)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    retval = setsockopt(socket_UDP, IPPROTO_IP, IP_ADD_MEMBERSHIP,
        (char*)&mreq1, sizeof(mreq1));
    if (retval == SOCKET_ERROR) err_quit("setsockopt() 1");

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    // ¸ÖÆ¼Ä³½ºÆ® ±×·ì °¡ÀÔ
    struct ip_mreq mreq2;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP2, &mreq2.imr_multiaddr.s_addr); // °¡ÀÔÇÏ°Å³ª Å»ÅğÇÒ IPv4 ¸ÖÆ¼ÄÉ½ºÆ® address(ÁÖ¼Ò) (°¡ÀÔÇÒ µ¿¾Æ¸®)
=======
    // ï¿½ï¿½Æ¼Ä³ï¿½ï¿½Æ® ï¿½×·ï¿½ ï¿½ï¿½ï¿½ï¿½
    struct ip_mreq mreq2;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP2, &mreq2.imr_multiaddr.s_addr); // ï¿½ï¿½ï¿½ï¿½ï¿½Ï°Å³ï¿½ Å»ï¿½ï¿½ï¿½ï¿½ IPv4 ï¿½ï¿½Æ¼ï¿½É½ï¿½Æ® address(ï¿½Ö¼ï¿½) (ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Æ¸ï¿½)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½Æ¼Ä³ï¿½ï¿½Æ® ï¿½×·ï¿½ ï¿½ï¿½ï¿½ï¿½
    struct ip_mreq mreq2;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP2, &mreq2.imr_multiaddr.s_addr); // ï¿½ï¿½ï¿½ï¿½ï¿½Ï°Å³ï¿½ Å»ï¿½ï¿½ï¿½ï¿½ IPv4 ï¿½ï¿½Æ¼ï¿½É½ï¿½Æ® address(ï¿½Ö¼ï¿½) (ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Æ¸ï¿½)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½Æ¼Ä³ï¿½ï¿½Æ® ï¿½×·ï¿½ ï¿½ï¿½ï¿½ï¿½
    struct ip_mreq mreq2;
    inet_pton(AF_INET, SERVERIP4_CHAR_UDP2, &mreq2.imr_multiaddr.s_addr); // ï¿½ï¿½ï¿½ï¿½ï¿½Ï°Å³ï¿½ Å»ï¿½ï¿½ï¿½ï¿½ IPv4 ï¿½ï¿½Æ¼ï¿½É½ï¿½Æ® address(ï¿½Ö¼ï¿½) (ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½Æ¸ï¿½)
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    mreq2.imr_interface.s_addr = htonl(INADDR_ANY);
    retval = setsockopt(socket_UDP, IPPROTO_IP, IP_ADD_MEMBERSHIP,
        (char*)&mreq2, sizeof(mreq2));
    if (retval == SOCKET_ERROR) err_quit("setsockopt() 2");

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    // ---------------- Áö¾È ---------------- //
    // bind() UDP ±×·ì B bind
=======
    // ---------------- ï¿½ï¿½ï¿½ï¿½ ---------------- //
    // bind() UDP ï¿½×·ï¿½ B bind
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ---------------- ï¿½ï¿½ï¿½ï¿½ ---------------- //
    // bind() UDP ï¿½×·ï¿½ B bind
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ---------------- ï¿½ï¿½ï¿½ï¿½ ---------------- //
    // bind() UDP ï¿½×·ï¿½ B bind
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)

    retval = bind(socket_UDP, (SOCKADDR*)&serveraddr, sizeof(serveraddr));
    if (retval == SOCKET_ERROR) err_quit("bind()");

    // --------------------------------------- //


<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    /*----- UDP/IPv4 ¼ÒÄÏ ÃÊ±âÈ­ Á¾·á -----*/

    /*----- UDP/IPv6 ¼ÒÄÏ ÃÊ±âÈ­ ½ÃÀÛ -----*/
    // TODO: ¼ÒÄÏÀ» »ı¼ºÇÏ°í ÃÊ±âÈ­ÇÑ´Ù.
    /*----- UDP/IPv6 ¼ÒÄÏ ÃÊ±âÈ­ Á¾·á -----*/

    // µ¥ÀÌÅÍ Åë½Å¿¡ »ç¿ëÇÒ º¯¼ö(°øÅë)
    fd_set rset;
    SOCKET client_sock;
    int addrlen;
    // µ¥ÀÌÅÍ Åë½Å¿¡ »ç¿ëÇÒ º¯¼ö(IPv4)
    struct sockaddr_in clientaddr4;
    // µ¥ÀÌÅÍ Åë½Å¿¡ »ç¿ëÇÒ º¯¼ö(IPv6)
    struct sockaddr_in6 clientaddr6;

    // ========== Á¤È£ ==========
    int recvLen; // ¹ŞÀº °¡º¯ µ¥ÀÌÅÍ Å©±â
    int sendLen; // º¸³¾ °¡º¯ µ¥ÀÌÅÍ Å©±â

    // WSAAsyncSelect()

    // TCP´Â ¿¬°áÀ» ÇØ¾ßÇÏ¹Ç·Î FD_ACCEPT¸¦ Ãß°¡
    retval = WSAAsyncSelect(listen_sock4, hWnd, WM_SOCKET, FD_ACCEPT | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    // UDP´Â TCP¿Í ´Ş¸® ¿¬°áÀÌ ÇÊ¿ä¾øÀ¸¹Ç·Î
    // FD_ACCEPT¸¦ ÇÏÁö ¾ÊÀ½.
    // FD_READ·Î µ¥ÀÌÅÍ¸¦ ¼ö½ÅÇÒ ¼ö ÀÖµµ·Ï ¼³Á¤
=======
    /*----- UDP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/

    /*----- UDP/IPv6 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/
    // TODO: ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï°ï¿½ ï¿½Ê±ï¿½È­ï¿½Ñ´ï¿½.
    /*----- UDP/IPv6 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/

    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½(ï¿½ï¿½ï¿½ï¿½)
    fd_set rset;
    SOCKET client_sock;
    int addrlen;
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½(IPv4)
    struct sockaddr_in clientaddr4;
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½(IPv6)
    struct sockaddr_in6 clientaddr6;

    // ========== ï¿½ï¿½È£ ==========
    int recvLen; // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å©ï¿½ï¿½
    int sendLen; // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å©ï¿½ï¿½

    // WSAAsyncSelect()

    // TCPï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ø¾ï¿½ï¿½Ï¹Ç·ï¿½ FD_ACCEPTï¿½ï¿½ ï¿½ß°ï¿½
    retval = WSAAsyncSelect(listen_sock4, hWnd, WM_SOCKET, FD_ACCEPT | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    // UDPï¿½ï¿½ TCPï¿½ï¿½ ï¿½Ş¸ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ê¿ï¿½ï¿½ï¿½ï¿½ï¿½Ç·ï¿½
    // FD_ACCEPTï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½.
    // FD_READï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Í¸ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½Öµï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    /*----- UDP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/

    /*----- UDP/IPv6 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/
    // TODO: ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï°ï¿½ ï¿½Ê±ï¿½È­ï¿½Ñ´ï¿½.
    /*----- UDP/IPv6 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/

    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½(ï¿½ï¿½ï¿½ï¿½)
    fd_set rset;
    SOCKET client_sock;
    int addrlen;
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½(IPv4)
    struct sockaddr_in clientaddr4;
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½(IPv6)
    struct sockaddr_in6 clientaddr6;

    // ========== ï¿½ï¿½È£ ==========
    int recvLen; // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å©ï¿½ï¿½
    int sendLen; // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å©ï¿½ï¿½

    // WSAAsyncSelect()

    // TCPï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ø¾ï¿½ï¿½Ï¹Ç·ï¿½ FD_ACCEPTï¿½ï¿½ ï¿½ß°ï¿½
    retval = WSAAsyncSelect(listen_sock4, hWnd, WM_SOCKET, FD_ACCEPT | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    // UDPï¿½ï¿½ TCPï¿½ï¿½ ï¿½Ş¸ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ê¿ï¿½ï¿½ï¿½ï¿½ï¿½Ç·ï¿½
    // FD_ACCEPTï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½.
    // FD_READï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Í¸ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½Öµï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    /*----- UDP/IPv4 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/

    /*----- UDP/IPv6 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/
    // TODO: ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï°ï¿½ ï¿½Ê±ï¿½È­ï¿½Ñ´ï¿½.
    /*----- UDP/IPv6 ï¿½ï¿½ï¿½ï¿½ ï¿½Ê±ï¿½È­ ï¿½ï¿½ï¿½ï¿½ -----*/

    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½(ï¿½ï¿½ï¿½ï¿½)
    fd_set rset;
    SOCKET client_sock;
    int addrlen;
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½(IPv4)
    struct sockaddr_in clientaddr4;
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Å¿ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½(IPv6)
    struct sockaddr_in6 clientaddr6;

    // ========== ï¿½ï¿½È£ ==========
    int recvLen; // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å©ï¿½ï¿½
    int sendLen; // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å©ï¿½ï¿½

    // WSAAsyncSelect()

    // TCPï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ø¾ï¿½ï¿½Ï¹Ç·ï¿½ FD_ACCEPTï¿½ï¿½ ï¿½ß°ï¿½
    retval = WSAAsyncSelect(listen_sock4, hWnd, WM_SOCKET, FD_ACCEPT | FD_CLOSE);
    if (retval == SOCKET_ERROR) err_quit("WSAAsyncSelect()");

    // UDPï¿½ï¿½ TCPï¿½ï¿½ ï¿½Ş¸ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ê¿ï¿½ï¿½ï¿½ï¿½ï¿½Ç·ï¿½
    // FD_ACCEPTï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½.
    // FD_READï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Í¸ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½Öµï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
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
<<<<<<< HEAD
    // À©¼Ó Á¾·á
=======
    // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    WSACleanup();
    return 0;
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// ======= Á¤È£ =======
// À©µµ¿ì ¸Ş½ÃÁö Ã³¸®
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg) {
        // =========== ÁöÀ± ============
=======
// ======= ï¿½ï¿½È£ =======
// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½ Ã³ï¿½ï¿½
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg) {
        // =========== ï¿½ï¿½ï¿½ï¿½ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ======= ï¿½ï¿½È£ =======
// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½ Ã³ï¿½ï¿½
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg) {
        // =========== ï¿½ï¿½ï¿½ï¿½ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ======= ï¿½ï¿½È£ =======
// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½ Ã³ï¿½ï¿½
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg) {
        // =========== ï¿½ï¿½ï¿½ï¿½ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    case WM_CREATE:
        InitializeListView(hWnd);
        return 0;
        // =============================
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    case WM_SOCKET: // ¼ÒÄÏ °ü·Ã À©µµ¿ì ¸Ş½ÃÁö
=======
    case WM_SOCKET: // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    case WM_SOCKET: // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    case WM_SOCKET: // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½
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
<<<<<<< HEAD
// ¼ÒÄÏ °ü·Ã À©µµ¿ì ¸Ş½ÃÁö Ã³¸®
void ProcessSocketMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    FILE* fd;
    // µ¥ÀÌÅÍ Åë½Å¿¡ »ç¿ëÇÒ º¯¼ö
    SOCKETINFO* ptr;
    SOCKET client_sock;
    SOCKADDR_IN clientaddr;
    int addrlen, retval;
    char buf[BUFSIZE + 1];

    // ¿À·ù ¹ß»ı ¿©ºÎ È®ÀÎ
    if (WSAGETSELECTERROR(lParam)) {
        err_display(WSAGETSELECTERROR(lParam));
        RemoveSocketInfo(wParam);
        return;
    }

    // ¸Ş½ÃÁö Ã³¸®
    switch (WSAGETSELECTEVENT(lParam)) {
        // Á¢¼Ó
    case FD_ACCEPT:
        addrlen = sizeof(clientaddr);
        client_sock = accept(listen_sock4, (SOCKADDR*)&clientaddr, &addrlen);
        if (client_sock == INVALID_SOCKET) {
            err_display("accept()");
            return;
        }
        else {
            // Á¢¼ÓÇÑ Å¬¶óÀÌ¾ğÆ® Á¤º¸ Ãâ·Â
            printf("\n[TCP/IPv4 ¼­¹ö] Å¬¶óÀÌ¾ğÆ® Á¢¼Ó: IP ÁÖ¼Ò=%s, Æ÷Æ® ¹øÈ£=%d\n",
                inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
            // =========== ÁöÀ± ============
            //AddClientToListView(ntohs(clientaddr.sin_port));
            //DisplayClientList();
            // =============================

            // ¼ÒÄÏ Á¤º¸ Ãß°¡
            AddSocketInfoTCP(client_sock);
            retval = WSAAsyncSelect(client_sock, hWnd,
                WM_SOCKET, FD_READ | FD_WRITE | FD_CLOSE);
            if (retval == SOCKET_ERROR) {
                err_display("WSAAsyncSelect()");
                RemoveSocketInfo(client_sock);
            }
=======
// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½ Ã³ï¿½ï¿½
void ProcessSocketMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	FILE* fd;
	// ë°ì´í„° í†µì‹ ì— ì‚¬ìš©í•  ë³€ìˆ˜
	SOCKETINFO* ptr;
	SOCKET client_sock;
	SOCKADDR_IN clientaddr;
	int addrlen, retval;
	char buf[BUFSIZE + 1];

	// ì˜¤ë¥˜ ë°œìƒ ì—¬ë¶€ í™•ì¸
	if (WSAGETSELECTERROR(lParam)) {
		err_display(WSAGETSELECTERROR(lParam));
		RemoveSocketInfo(wParam);
		return;
	}

	// ë©”ì‹œì§€ ì²˜ë¦¬
	switch (WSAGETSELECTEVENT(lParam)) {
	// ì ‘ì†
	case FD_ACCEPT:
		addrlen = sizeof(clientaddr);
		client_sock = accept(listen_sock4, (SOCKADDR*)&clientaddr, &addrlen);
		if (client_sock == INVALID_SOCKET) {
			err_display("accept()");
			return;
		}
		else {
			// ì ‘ì†í•œ í´ë¼ì´ì–¸íŠ¸ ì •ë³´ ì¶œë ¥
			printf("\n[TCP/IPv4 ì„œë²„] í´ë¼ì´ì–¸íŠ¸ ì ‘ì†: IP ì£¼ì†Œ=%s, í¬íŠ¸ ë²ˆí˜¸=%d\n", 
				inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
			// =========== ì§€ìœ¤ ============
			//AddClientToListView(ntohs(clientaddr.sin_port));
			//DisplayClientList();
			// =============================
			
			// ì†Œì¼“ ì •ë³´ ì¶”ê°€
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
			// ê³ ì • ë°ì´í„° ë°›ê¸°
			retval = recv(ptr->sock, ptr->buf, BUFSIZE, 0);
			// ============================== ì§€ì•ˆ ================================//
			// COMM_MSG íƒ€ì…ìœ¼ë¡œ í˜•ë³€í™˜ (ê¸°ë³´íƒ€ì…) -> êµ¬ì¡°ì²´ typeì„ ì–»ì–´ë‚´ê¸° ìœ„í•¨ì´ë‹¤.
			COMM_MSG* comm_msg;
			comm_msg = (COMM_MSG*)&(ptr->buf);
			printf("[COMM_MSG type] %d\n", comm_msg->type); //ì–»ì€ type ì¶œë ¥

			// Typeì— ë”°ë¼ ë‹¤ë¥¸ êµ¬ì¡°ì²´ë¥¼ ê°€ì§„ switch (ì§ì ‘ í˜•ë³€í™˜ í•´ì¤˜ì•¼ í•¨)
			switch (comm_msg->type) {
				case (TYPE_ID) :	// TYPE_ID ì¸ ê²½ìš° (id ì¶œë ¥)
					ID_MSG* id_msg;
					id_msg = (ID_MSG*)&(ptr->buf); // IDë¡œ í˜•ë³€í™˜
					printf("[TYPE_ID ë°›ì€ ë°ì´í„°] %s\n", id_msg->msg);
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)

					setIDInSocket(id_msg->msg, ptr); //id ë“±ë¡
					printf("[TCP] TYPE_ID, í˜„ì¬ ì†Œì¼“ ë‹‰ë„¤ì„ ë“±ë¡ì™„ë£Œ : %s\n", ptr->id_nickname_char);
					printf("[TCP] TYPE_ID, í˜„ì¬ ì†Œì¼“ port ë“±ë¡ì™„ë£Œ : %d\n", ptr->sin_port);
					printf("[TCP] TYPE_ID, í˜„ì¬ ì†Œì¼“ ì£¼ì†Œ(char) : %s\n", inet_ntoa(ptr->sin_addr));
					MessageBox(NULL, ptr->id_nickname, _T("í˜„ì¬ ì†Œì¼“ ë‹‰ë„¤ì„ ë“±ë¡ì™„ë£Œ(_TCHAR)"), MB_ICONERROR);
          
					// =========== ì§€ìœ¤ ============
					AddClientToListView(ptr->sin_port, ptr->id_nickname_char);
					DisplayClientList();
					// =============================

					break;
				// ===== ï¿½ï¿½ï¿½ï¿½ ====
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

			//printf("[TCP í´ë¼ì´ì–¸íŠ¸] %dë°”ì´íŠ¸ë¥¼ ë°›ì•˜ìŠµë‹ˆë‹¤.\n", retval);
			//printf("[ë°›ì€ ë°ì´í„°] %s\n", ptr->buf);
			// ================================================================== //
			// 
			// ======== ì—°ê²½ =======
			addMessage(ptr->buf);
			// ====================

			if (retval == SOCKET_ERROR) {
				err_display("recv()");
				RemoveSocketInfo(wParam);
				return;
			}
			printf("[TCP] ë°ì´í„° ê¸¸ì´ : %d, ë°ì´í„° : %s\n", retval, buf);
			// ë°›ì€ ë°”ì´íŠ¸ ìˆ˜ ëˆ„ì 
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
            // °íÁ¤ µ¥ÀÌÅÍ ¹Ş±â
            COMM_MSG comm_msg2;
            retval = recv(ptr->sock, ptr->buf, BUFSIZE, 0);

            // ============================== Áö¾È ================================//
            // COMM_MSG Å¸ÀÔÀ¸·Î Çüº¯È¯ (±âº¸Å¸ÀÔ) -> ±¸Á¶Ã¼ typeÀ» ¾ò¾î³»±â À§ÇÔÀÌ´Ù.
            COMM_MSG* comm_msg;
            comm_msg = (COMM_MSG*)&(ptr->buf);
            printf("[COMM_MSG type] %d\n", comm_msg->type); //¾òÀº type Ãâ·Â

            // Type¿¡ µû¶ó ´Ù¸¥ ±¸Á¶Ã¼¸¦ °¡Áø switch (Á÷Á¢ Çüº¯È¯ ÇØÁà¾ß ÇÔ)
            switch (comm_msg->type) {
            case (TYPE_ID):   // TYPE_ID ÀÎ °æ¿ì (id Ãâ·Â)
                ID_MSG* id_msg;
                id_msg = (ID_MSG*)&(ptr->buf); // ID·Î Çüº¯È¯
                printf("[TYPE_ID ¹ŞÀº µ¥ÀÌÅÍ] %s\n", id_msg->msg);
                //strcpy((char*)ptr->id_nickname, id_msg->msg);
                break;
                // ===== ¿¬°æ ====
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

            printf("[TCP Å¬¶óÀÌ¾ğÆ®] %d¹ÙÀÌÆ®¸¦ ¹Ş¾Ò½À´Ï´Ù.\n", retval);
            printf("[¹ŞÀº µ¥ÀÌÅÍ] %s\n", ptr->buf);
            // ================================================================== //
            // 
            // ======== ¿¬°æ =======
            addMessage(ptr->buf);
            // ====================

            if (retval == SOCKET_ERROR) {
                err_display("recv()");
                RemoveSocketInfo(wParam);
                return;
            }
            printf("[TCP] µ¥ÀÌÅÍ ±æÀÌ : %d, µ¥ÀÌÅÍ : %s\n", retval, buf);
            // ¹ŞÀº ¹ÙÀÌÆ® ¼ö ´©Àû
            ptr->recvbytes += retval;

            // Ã¤ÆÃ µ¥ÀÌÅÍ¸¸ Ç¥±âÇÑ´Ù.
        }
        // UDP socket
        else
        {
            // µ¥ÀÌÅÍ ¹Ş±â
            addrlen = sizeof(clientaddr);
            retval = recvfrom(socket_UDP, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
            printf("[UDP] µ¥ÀÌÅÍ ±æÀÌ : %d, µ¥ÀÌÅÍ : %s\n", retval, buf);
            if (retval == SOCKET_ERROR) {
                err_display("recvfrom()");
                return;
            }
            // ======== ¿¬°æ =======
            addMessage(buf);
            // ====================

            // UDP·Î Á¢¼ÓÇÑ Å¬¶ó Á¤º¸ ¼öÁı
            AddSocketInfoUDP(clientaddr);
        }
    case FD_WRITE:
        // UDP ¼ÒÄÏÀÌ ¾Æ´Ñ °æ¿ì (TCPÀÎ °æ¿ì)
        if (wParam != socket_UDP)
        {
            ptr = GetSocketInfo(wParam);
            //for (int i = 0; i < nTotalSockets; i++) {
            //   SOCKETINFO* ptr = SocketInfoArray[i];
            if (ptr->recvbytes == BUFSIZE) {
                // ¹ŞÀº ¹ÙÀÌÆ® ¼ö ¸®¼Â
                ptr->recvbytes = 0;

                // ÇöÀç Á¢¼ÓÇÑ ¸ğµç Å¬¶óÀÌ¾ğÆ®¿¡°Ô µ¥ÀÌÅÍ¸¦ º¸³¿!
                for (int j = 0; j < nTotalSockets; j++) {
                    SOCKETINFO* ptr2 = SocketInfoArray[j];
                    retval = send(ptr2->sock, ptr->buf, BUFSIZE, 0);
                    if (retval == SOCKET_ERROR) {
                        err_display("send()");
                        RemoveSocketInfo(j);
                        --j; // ·çÇÁ ÀÎµ¦½º º¸Á¤
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
                // µ¥ÀÌÅÍ º¸³»±â
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

// ¼ÒÄÏ Á¤º¸ ¾ò±â
SOCKETINFO* GetSocketInfo(SOCKET sock)
{
    // ÇöÀç Á¢¼ÓÇÑ Å¬¶óÀÌ¾ğÆ® Áß¿¡¼­ ÀÏÄ¡ÇÏ´Â ¼ÒÄÏ Å½»ö
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // Ã£¾ÒÀ» °æ¿ì, ÇØ´ç ¼ÒÄÏ ¹İÈ¯
=======
			// ì±„íŒ… ë°ì´í„°ë§Œ í‘œê¸°í•œë‹¤.
		}
		// UDP socket
		else
		{
			// ë°ì´í„° ë°›ê¸°
			addrlen = sizeof(clientaddr);
			retval = recvfrom(socket_UDP, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
			printf("[UDP] ë°ì´í„° ê¸¸ì´ : %d, ë°ì´í„° : %s\n", retval, buf);
			if (retval == SOCKET_ERROR) {
				err_display("recvfrom()");
				return;
			}
			// ======== ì—°ê²½ =======
			addMessage(buf);
			// ====================

			// UDPë¡œ ì ‘ì†í•œ í´ë¼ ì •ë³´ ìˆ˜ì§‘
			AddSocketInfoUDP(clientaddr);
		}
	case FD_WRITE:
		// UDP ì†Œì¼“ì´ ì•„ë‹Œ ê²½ìš° (TCPì¸ ê²½ìš°)
		if (wParam != socket_UDP)
		{
			ptr = GetSocketInfo(wParam);
			//for (int i = 0; i < nTotalSockets; i++) {
			//	SOCKETINFO* ptr = SocketInfoArray[i];
			if (ptr->recvbytes == BUFSIZE) {
				// ë°›ì€ ë°”ì´íŠ¸ ìˆ˜ ë¦¬ì…‹
				ptr->recvbytes = 0;

				// í˜„ì¬ ì ‘ì†í•œ ëª¨ë“  í´ë¼ì´ì–¸íŠ¸ì—ê²Œ ë°ì´í„°ë¥¼ ë³´ëƒ„!
				for (int j = 0; j < nTotalSockets; j++) {
					SOCKETINFO* ptr2 = SocketInfoArray[j];
					retval = send(ptr2->sock, ptr->buf, BUFSIZE, 0);
					if (retval == SOCKET_ERROR) {
						err_display("send()");
						RemoveSocketInfo(j);
						--j; // ë£¨í”„ ì¸ë±ìŠ¤ ë³´ì •
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
				// ë°ì´í„° ë³´ë‚´ê¸°
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

// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
SOCKETINFO* GetSocketInfo(SOCKET sock)
{
    // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ß¿ï¿½ï¿½ï¿½ ï¿½ï¿½Ä¡ï¿½Ï´ï¿½ ï¿½ï¿½ï¿½ï¿½ Å½ï¿½ï¿½
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // Ã£ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½, ï¿½Ø´ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¯
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½ Ã³ï¿½ï¿½
void ProcessSocketMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	FILE* fd;
	// ë°ì´í„° í†µì‹ ì— ì‚¬ìš©í•  ë³€ìˆ˜
	SOCKETINFO* ptr;
	SOCKET client_sock;
	SOCKADDR_IN clientaddr;
	int addrlen, retval;
	char buf[BUFSIZE + 1];

	// ì˜¤ë¥˜ ë°œìƒ ì—¬ë¶€ í™•ì¸
	if (WSAGETSELECTERROR(lParam)) {
		err_display(WSAGETSELECTERROR(lParam));
		RemoveSocketInfo(wParam);
		return;
	}

	// ë©”ì‹œì§€ ì²˜ë¦¬
	switch (WSAGETSELECTEVENT(lParam)) {
	// ì ‘ì†
	case FD_ACCEPT:
		addrlen = sizeof(clientaddr);
		client_sock = accept(listen_sock4, (SOCKADDR*)&clientaddr, &addrlen);
		if (client_sock == INVALID_SOCKET) {
			err_display("accept()");
			return;
		}
		else {
			// ì ‘ì†í•œ í´ë¼ì´ì–¸íŠ¸ ì •ë³´ ì¶œë ¥
			printf("\n[TCP/IPv4 ì„œë²„] í´ë¼ì´ì–¸íŠ¸ ì ‘ì†: IP ì£¼ì†Œ=%s, í¬íŠ¸ ë²ˆí˜¸=%d\n", 
				inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
			// =========== ì§€ìœ¤ ============
			//AddClientToListView(ntohs(clientaddr.sin_port));
			//DisplayClientList();
			// =============================
			
			// ì†Œì¼“ ì •ë³´ ì¶”ê°€
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
			// ê³ ì • ë°ì´í„° ë°›ê¸°
			retval = recv(ptr->sock, ptr->buf, BUFSIZE, 0);
			// ============================== ì§€ì•ˆ ================================//
			// COMM_MSG íƒ€ì…ìœ¼ë¡œ í˜•ë³€í™˜ (ê¸°ë³´íƒ€ì…) -> êµ¬ì¡°ì²´ typeì„ ì–»ì–´ë‚´ê¸° ìœ„í•¨ì´ë‹¤.
			COMM_MSG* comm_msg;
			comm_msg = (COMM_MSG*)&(ptr->buf);
			printf("[COMM_MSG type] %d\n", comm_msg->type); //ì–»ì€ type ì¶œë ¥

			// Typeì— ë”°ë¼ ë‹¤ë¥¸ êµ¬ì¡°ì²´ë¥¼ ê°€ì§„ switch (ì§ì ‘ í˜•ë³€í™˜ í•´ì¤˜ì•¼ í•¨)
			switch (comm_msg->type) {
				case (TYPE_ID) :	// TYPE_ID ì¸ ê²½ìš° (id ì¶œë ¥)
					ID_MSG* id_msg;
					id_msg = (ID_MSG*)&(ptr->buf); // IDë¡œ í˜•ë³€í™˜
					printf("[TYPE_ID ë°›ì€ ë°ì´í„°] %s\n", id_msg->msg);

					setIDInSocket(id_msg->msg, ptr); //id ë“±ë¡
					printf("[TCP] TYPE_ID, í˜„ì¬ ì†Œì¼“ ë‹‰ë„¤ì„ ë“±ë¡ì™„ë£Œ : %s\n", ptr->id_nickname_char);
					printf("[TCP] TYPE_ID, í˜„ì¬ ì†Œì¼“ port ë“±ë¡ì™„ë£Œ : %d\n", ptr->sin_port);
					printf("[TCP] TYPE_ID, í˜„ì¬ ì†Œì¼“ ì£¼ì†Œ(char) : %s\n", inet_ntoa(ptr->sin_addr));
					MessageBox(NULL, ptr->id_nickname, _T("í˜„ì¬ ì†Œì¼“ ë‹‰ë„¤ì„ ë“±ë¡ì™„ë£Œ(_TCHAR)"), MB_ICONERROR);
          
					// =========== ì§€ìœ¤ ============
					AddClientToListView(ptr->sin_port, ptr->id_nickname_char);
					DisplayClientList();
					// =============================

					break;
				// ===== ï¿½ï¿½ï¿½ï¿½ ====
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

			//printf("[TCP í´ë¼ì´ì–¸íŠ¸] %dë°”ì´íŠ¸ë¥¼ ë°›ì•˜ìŠµë‹ˆë‹¤.\n", retval);
			//printf("[ë°›ì€ ë°ì´í„°] %s\n", ptr->buf);
			// ================================================================== //
			// 
			// ======== ì—°ê²½ =======
			addMessage(ptr->buf);
			// ====================

			if (retval == SOCKET_ERROR) {
				err_display("recv()");
				RemoveSocketInfo(wParam);
				return;
			}
			printf("[TCP] ë°ì´í„° ê¸¸ì´ : %d, ë°ì´í„° : %s\n", retval, buf);
			// ë°›ì€ ë°”ì´íŠ¸ ìˆ˜ ëˆ„ì 
			ptr->recvbytes += retval;

			// ì±„íŒ… ë°ì´í„°ë§Œ í‘œê¸°í•œë‹¤.
		}
		// UDP socket
		else
		{
			// ë°ì´í„° ë°›ê¸°
			addrlen = sizeof(clientaddr);
			retval = recvfrom(socket_UDP, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
			printf("[UDP] ë°ì´í„° ê¸¸ì´ : %d, ë°ì´í„° : %s\n", retval, buf);
			if (retval == SOCKET_ERROR) {
				err_display("recvfrom()");
				return;
			}
			// ======== ì—°ê²½ =======
			addMessage(buf);
			// ====================

			// UDPë¡œ ì ‘ì†í•œ í´ë¼ ì •ë³´ ìˆ˜ì§‘
			AddSocketInfoUDP(clientaddr);
		}
	case FD_WRITE:
		// UDP ì†Œì¼“ì´ ì•„ë‹Œ ê²½ìš° (TCPì¸ ê²½ìš°)
		if (wParam != socket_UDP)
		{
			ptr = GetSocketInfo(wParam);
			//for (int i = 0; i < nTotalSockets; i++) {
			//	SOCKETINFO* ptr = SocketInfoArray[i];
			if (ptr->recvbytes == BUFSIZE) {
				// ë°›ì€ ë°”ì´íŠ¸ ìˆ˜ ë¦¬ì…‹
				ptr->recvbytes = 0;

				// í˜„ì¬ ì ‘ì†í•œ ëª¨ë“  í´ë¼ì´ì–¸íŠ¸ì—ê²Œ ë°ì´í„°ë¥¼ ë³´ëƒ„!
				for (int j = 0; j < nTotalSockets; j++) {
					SOCKETINFO* ptr2 = SocketInfoArray[j];
					retval = send(ptr2->sock, ptr->buf, BUFSIZE, 0);
					if (retval == SOCKET_ERROR) {
						err_display("send()");
						RemoveSocketInfo(j);
						--j; // ë£¨í”„ ì¸ë±ìŠ¤ ë³´ì •
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
				// ë°ì´í„° ë³´ë‚´ê¸°
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

// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
SOCKETINFO* GetSocketInfo(SOCKET sock)
{
    // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ß¿ï¿½ï¿½ï¿½ ï¿½ï¿½Ä¡ï¿½Ï´ï¿½ ï¿½ï¿½ï¿½ï¿½ Å½ï¿½ï¿½
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // Ã£ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½, ï¿½Ø´ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¯
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ş½ï¿½ï¿½ï¿½ Ã³ï¿½ï¿½
void ProcessSocketMessage(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	FILE* fd;
	// ë°ì´í„° í†µì‹ ì— ì‚¬ìš©í•  ë³€ìˆ˜
	SOCKETINFO* ptr;
	SOCKET client_sock;
	SOCKADDR_IN clientaddr;
	int addrlen, retval;
	char buf[BUFSIZE + 1];

	// ì˜¤ë¥˜ ë°œìƒ ì—¬ë¶€ í™•ì¸
	if (WSAGETSELECTERROR(lParam)) {
		err_display(WSAGETSELECTERROR(lParam));
		RemoveSocketInfo(wParam);
		return;
	}

	// ë©”ì‹œì§€ ì²˜ë¦¬
	switch (WSAGETSELECTEVENT(lParam)) {
	// ì ‘ì†
	case FD_ACCEPT:
		addrlen = sizeof(clientaddr);
		client_sock = accept(listen_sock4, (SOCKADDR*)&clientaddr, &addrlen);
		if (client_sock == INVALID_SOCKET) {
			err_display("accept()");
			return;
		}
		else {
			// ì ‘ì†í•œ í´ë¼ì´ì–¸íŠ¸ ì •ë³´ ì¶œë ¥
			printf("\n[TCP/IPv4 ì„œë²„] í´ë¼ì´ì–¸íŠ¸ ì ‘ì†: IP ì£¼ì†Œ=%s, í¬íŠ¸ ë²ˆí˜¸=%d\n", 
				inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
			// =========== ì§€ìœ¤ ============
			//AddClientToListView(ntohs(clientaddr.sin_port));
			//DisplayClientList();
			// =============================
			
			// ì†Œì¼“ ì •ë³´ ì¶”ê°€
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
			// ê³ ì • ë°ì´í„° ë°›ê¸°
			retval = recv(ptr->sock, ptr->buf, BUFSIZE, 0);
			// ============================== ì§€ì•ˆ ================================//
			// COMM_MSG íƒ€ì…ìœ¼ë¡œ í˜•ë³€í™˜ (ê¸°ë³´íƒ€ì…) -> êµ¬ì¡°ì²´ typeì„ ì–»ì–´ë‚´ê¸° ìœ„í•¨ì´ë‹¤.
			COMM_MSG* comm_msg;
			comm_msg = (COMM_MSG*)&(ptr->buf);
			printf("[COMM_MSG type] %d\n", comm_msg->type); //ì–»ì€ type ì¶œë ¥

			// Typeì— ë”°ë¼ ë‹¤ë¥¸ êµ¬ì¡°ì²´ë¥¼ ê°€ì§„ switch (ì§ì ‘ í˜•ë³€í™˜ í•´ì¤˜ì•¼ í•¨)
			switch (comm_msg->type) {
				case (TYPE_ID) :	// TYPE_ID ì¸ ê²½ìš° (id ì¶œë ¥)
					ID_MSG* id_msg;
					id_msg = (ID_MSG*)&(ptr->buf); // IDë¡œ í˜•ë³€í™˜
					printf("[TYPE_ID ë°›ì€ ë°ì´í„°] %s\n", id_msg->msg);

					setIDInSocket(id_msg->msg, ptr); //id ë“±ë¡
					printf("[TCP] TYPE_ID, í˜„ì¬ ì†Œì¼“ ë‹‰ë„¤ì„ ë“±ë¡ì™„ë£Œ : %s\n", ptr->id_nickname_char);
					printf("[TCP] TYPE_ID, í˜„ì¬ ì†Œì¼“ port ë“±ë¡ì™„ë£Œ : %d\n", ptr->sin_port);
					printf("[TCP] TYPE_ID, í˜„ì¬ ì†Œì¼“ ì£¼ì†Œ(char) : %s\n", inet_ntoa(ptr->sin_addr));
					MessageBox(NULL, ptr->id_nickname, _T("í˜„ì¬ ì†Œì¼“ ë‹‰ë„¤ì„ ë“±ë¡ì™„ë£Œ(_TCHAR)"), MB_ICONERROR);
          
					// =========== ì§€ìœ¤ ============
					AddClientToListView(ptr->sin_port, ptr->id_nickname_char);
					DisplayClientList();
					// =============================

					break;
				// ===== ï¿½ï¿½ï¿½ï¿½ ====
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

			//printf("[TCP í´ë¼ì´ì–¸íŠ¸] %dë°”ì´íŠ¸ë¥¼ ë°›ì•˜ìŠµë‹ˆë‹¤.\n", retval);
			//printf("[ë°›ì€ ë°ì´í„°] %s\n", ptr->buf);
			// ================================================================== //
			// 
			// ======== ì—°ê²½ =======
			addMessage(ptr->buf);
			// ====================

			if (retval == SOCKET_ERROR) {
				err_display("recv()");
				RemoveSocketInfo(wParam);
				return;
			}
			printf("[TCP] ë°ì´í„° ê¸¸ì´ : %d, ë°ì´í„° : %s\n", retval, buf);
			// ë°›ì€ ë°”ì´íŠ¸ ìˆ˜ ëˆ„ì 
			ptr->recvbytes += retval;

			// ì±„íŒ… ë°ì´í„°ë§Œ í‘œê¸°í•œë‹¤.
		}
		// UDP socket
		else
		{
			// ë°ì´í„° ë°›ê¸°
			addrlen = sizeof(clientaddr);
			retval = recvfrom(socket_UDP, buf, BUFSIZE, 0, (SOCKADDR*)&clientaddr, &addrlen);
			printf("[UDP] ë°ì´í„° ê¸¸ì´ : %d, ë°ì´í„° : %s\n", retval, buf);
			if (retval == SOCKET_ERROR) {
				err_display("recvfrom()");
				return;
			}
			// ======== ì—°ê²½ =======
			addMessage(buf);
			// ====================

			// UDPë¡œ ì ‘ì†í•œ í´ë¼ ì •ë³´ ìˆ˜ì§‘
			AddSocketInfoUDP(clientaddr);
		}
	case FD_WRITE:
		// UDP ì†Œì¼“ì´ ì•„ë‹Œ ê²½ìš° (TCPì¸ ê²½ìš°)
		if (wParam != socket_UDP)
		{
			ptr = GetSocketInfo(wParam);
			//for (int i = 0; i < nTotalSockets; i++) {
			//	SOCKETINFO* ptr = SocketInfoArray[i];
			if (ptr->recvbytes == BUFSIZE) {
				// ë°›ì€ ë°”ì´íŠ¸ ìˆ˜ ë¦¬ì…‹
				ptr->recvbytes = 0;

				// í˜„ì¬ ì ‘ì†í•œ ëª¨ë“  í´ë¼ì´ì–¸íŠ¸ì—ê²Œ ë°ì´í„°ë¥¼ ë³´ëƒ„!
				for (int j = 0; j < nTotalSockets; j++) {
					SOCKETINFO* ptr2 = SocketInfoArray[j];
					retval = send(ptr2->sock, ptr->buf, BUFSIZE, 0);
					if (retval == SOCKET_ERROR) {
						err_display("send()");
						RemoveSocketInfo(j);
						--j; // ë£¨í”„ ì¸ë±ìŠ¤ ë³´ì •
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
				// ë°ì´í„° ë³´ë‚´ê¸°
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

// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
SOCKETINFO* GetSocketInfo(SOCKET sock)
{
    // ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ß¿ï¿½ï¿½ï¿½ ï¿½ï¿½Ä¡ï¿½Ï´ï¿½ ï¿½ï¿½ï¿½ï¿½ Å½ï¿½ï¿½
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // Ã£ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½, ï¿½Ø´ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¯
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
<<<<<<< HEAD
// UDP Å¬¶ó Á¤º¸ Ãß°¡
bool AddSocketInfoUDP(SOCKADDR_IN addr)
{
    // ÀÌÀü¿¡ Á¢¼ÓÇÑ ÀûÀÌ ÀÖ´Â »óÅÂÀÎÁö È®ÀÎ
=======
// UDP Å¬ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½
bool AddSocketInfoUDP(SOCKADDR_IN addr)
{
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ È®ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// UDP Å¬ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½
bool AddSocketInfoUDP(SOCKADDR_IN addr)
{
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ È®ï¿½ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// UDP Å¬ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½
bool AddSocketInfoUDP(SOCKADDR_IN addr)
{
    // ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ È®ï¿½ï¿½
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
<<<<<<< HEAD
    // UDP Å¬¶ó Á¤º¸ Ãß°¡
=======
    // UDP Å¬ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // UDP Å¬ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // UDP Å¬ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    UDPSocketInfoArray[nTotalUDPSockets++] = addr;
    return true;
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// TCP ¼ÒÄÏ Á¤º¸ Ãß°¡
bool AddSocketInfoTCP(SOCKET sock)
{
    if (nTotalSockets >= FD_SETSIZE) {
        printf("[¿À·ù] ¼ÒÄÏ Á¤º¸¸¦ Ãß°¡ÇÒ ¼ö ¾ø½À´Ï´Ù!\n");
=======
// TCP ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½
bool AddSocketInfoTCP(SOCKET sock)
{
    if (nTotalSockets >= FD_SETSIZE) {
        printf("[ï¿½ï¿½ï¿½ï¿½] ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï´ï¿½!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// TCP ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½
bool AddSocketInfoTCP(SOCKET sock)
{
    if (nTotalSockets >= FD_SETSIZE) {
        printf("[ï¿½ï¿½ï¿½ï¿½] ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï´ï¿½!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// TCP ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½
bool AddSocketInfoTCP(SOCKET sock)
{
    if (nTotalSockets >= FD_SETSIZE) {
        printf("[ï¿½ï¿½ï¿½ï¿½] ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ß°ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï´ï¿½!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
        return false;
    }
    SOCKETINFO* ptr = new SOCKETINFO;
    if (ptr == NULL) {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        printf("[¿À·ù] ¸Ş¸ğ¸®°¡ ºÎÁ·ÇÕ´Ï´Ù!\n");
=======
        printf("[ï¿½ï¿½ï¿½ï¿½] ï¿½Ş¸ğ¸®°ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿½!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
        printf("[ï¿½ï¿½ï¿½ï¿½] ï¿½Ş¸ğ¸®°ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿½!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
        printf("[ï¿½ï¿½ï¿½ï¿½] ï¿½Ş¸ğ¸®°ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Õ´Ï´ï¿½!\n");
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
        return false;
    }
    ptr->sock = sock;
    ptr->recvbytes = 0;


<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    // TCP ¼ÒÄÏ ¹è¿­¿¡ Ãß°¡
=======
    // TCP ï¿½ï¿½ï¿½ï¿½ ï¿½è¿­ï¿½ï¿½ ï¿½ß°ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // TCP ï¿½ï¿½ï¿½ï¿½ ï¿½è¿­ï¿½ï¿½ ï¿½ß°ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // TCP ï¿½ï¿½ï¿½ï¿½ ï¿½è¿­ï¿½ï¿½ ï¿½ß°ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    SocketInfoArray[nTotalSockets++] = ptr;

    return true;
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// ¼ÒÄÏ Á¤º¸ »èÁ¦
void RemoveSocketInfo(SOCKET sock)
{

    // Å¬¶óÀÌ¾ğÆ® Á¤º¸ ¾ò±â
    struct sockaddr_in clientaddr;
    int addrlen = sizeof(clientaddr);
    getpeername(sock, (struct sockaddr*)&clientaddr, &addrlen);
    // Å¬¶óÀÌ¾ğÆ® Á¤º¸ Ãâ·Â
    char addr[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &clientaddr.sin_addr, addr, sizeof(addr));
    printf("[TCP/IPv4 ¼­¹ö] Å¬¶óÀÌ¾ğÆ® Á¾·á: IP ÁÖ¼Ò=%s, Æ÷Æ® ¹øÈ£=%d\n",
        addr, ntohs(clientaddr.sin_port));
    // =========== ÁöÀ± ============
=======
// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
void RemoveSocketInfo(SOCKET sock)
{

    // Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
    struct sockaddr_in clientaddr;
    int addrlen = sizeof(clientaddr);
    getpeername(sock, (struct sockaddr*)&clientaddr, &addrlen);
    // Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
    char addr[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &clientaddr.sin_addr, addr, sizeof(addr));
    printf("[TCP/IPv4 ï¿½ï¿½ï¿½ï¿½] Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½: IP ï¿½Ö¼ï¿½=%s, ï¿½ï¿½Æ® ï¿½ï¿½È£=%d\n",
        addr, ntohs(clientaddr.sin_port));
    // =========== ï¿½ï¿½ï¿½ï¿½ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
void RemoveSocketInfo(SOCKET sock)
{

    // Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
    struct sockaddr_in clientaddr;
    int addrlen = sizeof(clientaddr);
    getpeername(sock, (struct sockaddr*)&clientaddr, &addrlen);
    // Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
    char addr[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &clientaddr.sin_addr, addr, sizeof(addr));
    printf("[TCP/IPv4 ï¿½ï¿½ï¿½ï¿½] Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½: IP ï¿½Ö¼ï¿½=%s, ï¿½ï¿½Æ® ï¿½ï¿½È£=%d\n",
        addr, ntohs(clientaddr.sin_port));
    // =========== ï¿½ï¿½ï¿½ï¿½ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
void RemoveSocketInfo(SOCKET sock)
{

    // Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
    struct sockaddr_in clientaddr;
    int addrlen = sizeof(clientaddr);
    getpeername(sock, (struct sockaddr*)&clientaddr, &addrlen);
    // Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½
    char addr[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &clientaddr.sin_addr, addr, sizeof(addr));
    printf("[TCP/IPv4 ï¿½ï¿½ï¿½ï¿½] Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½: IP ï¿½Ö¼ï¿½=%s, ï¿½ï¿½Æ® ï¿½ï¿½È£=%d\n",
        addr, ntohs(clientaddr.sin_port));
    // =========== ï¿½ï¿½ï¿½ï¿½ ============
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    RemoveClientFromListView(ntohs(clientaddr.sin_port));
    DisplayClientList();
    // =============================

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    // Å¬¶óÀÌ¾ğÆ® ¼ÒÄÏ Á¦°Å
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // Ã£¾ÒÀ» °æ¿ì, ÇØ´ç ¼ÒÄÏ ¹İÈ¯
=======
    // Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // Ã£ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½, ï¿½Ø´ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¯
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // Ã£ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½, ï¿½Ø´ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¯
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ® ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½
    for (int i = 0; i < nTotalSockets; i++)
    {
        SOCKETINFO* ptr = SocketInfoArray[i];
        // Ã£ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½, ï¿½Ø´ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¯
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
<<<<<<< HEAD
    // ¼ÒÄÏ ´İ±â
=======
    // ï¿½ï¿½ï¿½ï¿½ ï¿½İ±ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½ï¿½ï¿½ ï¿½İ±ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    // ï¿½ï¿½ï¿½ï¿½ ï¿½İ±ï¿½
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    closesocket(sock);
}


void addMessage(char* message) {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    if ((g_msgQueue.tail + 1) % BUFSIZE == g_msgQueue.head) { //Å¥°¡ ²ËÂù °æ¿ì: 
        g_msgQueue.head = (g_msgQueue.head + 1) % BUFSIZE; //¸¶Áö¸· ¿ä¼Ò¸¦ ÇÏ³ª Áö¿ì°í °ø°£ ÇÏ³ª¸¦ È®º¸ÇÑ´Ù.
=======
    if ((g_msgQueue.tail + 1) % BUFSIZE == g_msgQueue.head) { //Å¥ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½: 
        g_msgQueue.head = (g_msgQueue.head + 1) % BUFSIZE; //ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Ò¸ï¿½ ï¿½Ï³ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ï³ï¿½ï¿½ï¿½ È®ï¿½ï¿½ï¿½Ñ´ï¿½.
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    if ((g_msgQueue.tail + 1) % BUFSIZE == g_msgQueue.head) { //Å¥ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½: 
        g_msgQueue.head = (g_msgQueue.head + 1) % BUFSIZE; //ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Ò¸ï¿½ ï¿½Ï³ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ï³ï¿½ï¿½ï¿½ È®ï¿½ï¿½ï¿½Ñ´ï¿½.
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
    if ((g_msgQueue.tail + 1) % BUFSIZE == g_msgQueue.head) { //Å¥ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½: 
        g_msgQueue.head = (g_msgQueue.head + 1) % BUFSIZE; //ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Ò¸ï¿½ ï¿½Ï³ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ï³ï¿½ï¿½ï¿½ È®ï¿½ï¿½ï¿½Ñ´ï¿½.
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
    }
    strcpy(g_msgQueue.queue[g_msgQueue.tail], message);
    g_msgQueue.tail = (g_msgQueue.tail + 1) % BUFSIZE;
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// ¼­¹ö¿¡¼­ Å¬¶óÀÌ¾ğÆ®¿¡ 
=======
// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ®ï¿½ï¿½ 
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ®ï¿½ï¿½ 
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
=======
// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ Å¬ï¿½ï¿½ï¿½Ì¾ï¿½Æ®ï¿½ï¿½ 
>>>>>>> parent of ae3783a (Merge pull request #36 from NetworkTerm-HingJeongHo/Chatting_Game_kyk)
DWORD WINAPI messageQueueThread(LPVOID arg) {
    return 0;
}