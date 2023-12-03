#include "stdafx.h"



void gameStart(HWND statusTimer, HWND statusWord) {

	HANDLE hThread[2];
	hThread[0] = CreateThread(NULL, 0, TimerThread, (LPVOID)statusTimer, CREATE_SUSPENDED, NULL);
	hThread[1] = CreateThread(NULL, 0, GameThread, (LPVOID)statusWord, CREATE_SUSPENDED, NULL);

	//WaitForMultipleObjects(2, hThread, TRUE, INFINITE);
	
	//Display(statusTimer, "%d", "10");
	//Display(statusWord, "%s", "tmp");
	//Display(statusTimer, "%d", "10");
	//Display(statusWord, "%s", "tmp");
}

void Display(HWND g_status, const char* fmt, ...)
{

	va_list arg;
	va_start(arg, fmt);
	char cbuf[1024];
	vsprintf(cbuf, fmt, arg);
	va_end(arg);

	int nLength = GetWindowTextLength(g_status);
	SendMessage(g_status, EM_SETSEL, 0, 0);
	SendMessageA(g_status, EM_REPLACESEL, FALSE, (LPARAM)cbuf);
}

DWORD WINAPI TimerThread(LPVOID arg) {
	HWND status = (HWND)arg;
	clock_t start = clock();

	int timer = (int)start;
	countdown = 5 - timer;   //30���� �������� ī��Ʈ�ٿ� ����
	char* timerText = NULL;

	while (!isGameOver) {
		if (countdown <= 0) {
			start = clock();
			newRound();

		}
		sprintf(timerText, "%d", countdown);
		//Display(status, "%d", timerText);
		SetDlgItemTextA(status, IDC_EDIT_TIMER, timerText);
	}

	return 0;
}

DWORD WINAPI GameThread(LPVOID arg) {

	HWND status = (HWND)arg;
	char* roundText = NULL;

	countdown = 30;

	while (!isGameOver) {
		//if (hThread == NULL) return 1;
		//snprintf(roundText,sizeof(roundText), "%s", quizWord[roundNum]);
		WideCharToMultiByte(CP_ACP, 0, quizWord[roundNum], 10, roundText, 10, NULL, NULL);
		Display(status, "%s", "tmp");

		//SetDlgItemTextA(status, IDC_EDIT_WORD, (LPCSTR)quizWord[roundNum]);
		SetDlgItemTextA(status, IDC_EDIT_WORD, "tmp");
	}
	return 0;
}

//�� ���尡 ���۵� �� ����
void newRound() {
	roundNum += 1;
	if (roundNum >= 1) {
		isGameOver = TRUE;
		return;
	}

	// ������ ���� ä�� �޽��� �б� �ϷḦ ��ٸ�
	WaitForSingleObject(g_hReadEvent, INFINITE);
	// ���ο� ä�� �޽����� ��� ���� �ϷḦ �˸�
	g_chatmsg.type = TYPE_NOTY;
	snprintf(g_chatmsg.msg, sizeof(g_chatmsg), "%d��° ����.", roundNum);
	SetEvent(g_hWriteEvent);

	DisplayText("%d ��° ���� �Դϴ�.", roundNum+1);
	if (isOwner) {

		Display(g_hWordStatus, (const char*)quizWord[roundNum]);
	}

}



