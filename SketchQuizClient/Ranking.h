#pragma once

#define BUFSIZE     256                    // ���� �޽��� ��ü ũ��
#define MSGSIZE     (BUFSIZE-sizeof(int))  // ä�� �޽��� �ִ� ����

void CreateRankDlg(HWND hWnd);
INT_PTR CALLBACK DlgRanking(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);