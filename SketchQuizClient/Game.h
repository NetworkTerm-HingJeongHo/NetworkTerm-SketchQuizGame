#pragma once

#include "stdafx.h"




void gameStart(HWND statusTimer, HWND statusWord);//���� �����ϴ� �Լ�
void Display(HWND status, const char* fmt, ...);//EditText�κп� Text ǥ��
DWORD WINAPI TimerThread(LPVOID arg); //Ÿ�̸� ������
DWORD WINAPI GameThread(LPVOID arg);  //���� ������
void newRound();  // �� ���� ���� �� ����
