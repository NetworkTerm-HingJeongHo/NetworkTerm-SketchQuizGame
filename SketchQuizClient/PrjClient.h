#pragma once

#define TYPE_CHAT     1000              // �޽��� Ÿ��: ä��
#define TYPE_DRAWLINE 1001              // �޽��� Ÿ��: �� �׸���
#define TYPE_ERASEPIC 1002              // �޽��� Ÿ��: �׸� �����
#define TYPE_ID		  1003				// �޽��� Ÿ��: id (����)
#define TYPE_Queue    1004              // �޽��� Ÿ��: �޽��� ť(����)

#define WM_DRAWLINE (WM_USER+1)         // ����� ���� ������ �޽���(1)
#define WM_ERASEPIC (WM_USER+2)         // ����� ���� ������ �޽���(2)

#define SIZE_TOT 256                    // ���� ��Ŷ(��� + ������) ��ü ũ��
#define SIZE_DAT (SIZE_TOT-sizeof(int)) // ����� ������ ������ �κи��� ũ��

// ���� �޽��� ����
// sizeof(COMM_MSG) == 256
typedef struct _COMM_MSG
{
	int  type;
	char dummy[SIZE_DAT];
} COMM_MSG;

// ä�� �޽��� ����
// sizeof(CHAT_MSG) == 256
typedef struct _CHAT_MSG
{
	int  type;
	char msg[SIZE_DAT];
} CHAT_MSG;

// �� �׸��� �޽��� ����
// sizeof(DRAWLINE_MSG) == 256
typedef struct _DRAWLINE_MSG
{
	int  type;
	int  width;
	int  color;
	int  x0, y0;
	int  x1, y1;
	char dummy[SIZE_TOT - 7 * sizeof(int)];
} DRAWLINE_MSG;

// �׸� ����� �޽��� ����
// sizeof(ERASEPIC_MSG) == 256
typedef struct _ERASEPIC_MSG
{
	int  type;
	char dummy[SIZE_DAT];
} ERASEPIC_MSG;

// ======= ���� ======= 
typedef struct _MESSAGEQUEUE {
	int type;
	char queue[10][20] = { NULL };         // �޽��� ���� ť: ���� ��ȭ���� ǥ��. �� ���� ���� ������ �޽������� ��������.
	int head = 0;                 // ���� ť �ε���
	int tail = 0;
} MESSAGEQUEUE;

// ======== ���� ======== //
// �α����Ҷ� ID ����
typedef struct ID
{
	int  type;		// �α����Ҷ� ID ����
	char msg[SIZE_DAT];	// id ����
} ID_MSG;
// ====================== //

// ���� ������(ùȭ��) ���ν���
LRESULT CALLBACK MainWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
// ��ȭ����(�׸���) ���ν���
INT_PTR CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);
// �ڽ� ������ ���ν���
LRESULT CALLBACK ChildWndProc(HWND, UINT, WPARAM, LPARAM);

// ���� ��� ������ �Լ�
DWORD WINAPI ClientMain(LPVOID arg);
DWORD WINAPI ReadThread(LPVOID arg);
DWORD WINAPI WriteThread(LPVOID arg);

// ����Ʈ ��Ʈ�� ��� �Լ�
void DisplayText(const char *fmt, ...);
