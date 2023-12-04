#include "stdafx.h"

//// ���� ������(char)�� COMM_MSG�� ����ȯ�ϴ� �Լ� 
//COMM_MSG* charArrayToCommMsg(char charArray[]) {
//	COMM_MSG* commMsg;
//	commMsg = (COMM_MSG*)&charArray;
//
//	return commMsg;
//
//}

// ID ���Ͽ� ����ϴ� �Լ�.
void setIDInSocket(char cilentID[], SOCKETINFO* ptr) {
					// ����� id
	//����� id�� ���� ���� ����ü�� �����ϱ�
	// _TCHAR �� ���ڿ� ����
	TCHAR cilentID_Tchar[BUFSIZE];

	// char* �� ���ڿ��� _TCHAR �� ���ڿ��� ��ȯ
	MultiByteToWideChar(CP_ACP, 0, cilentID, -1, cilentID_Tchar, BUFSIZE);
	if (_tcscpy(ptr->id_nickname, cilentID_Tchar) == NULL) {
		// Handle the error
		err_display("setIDInSocket");
	}

}

//ID_MSG* a;
//a = (ID_MSG*)&(ptr->buf);
//printf("[���� ������] %s\n", a->msg);
//setIDInSocket(a->msg, ptr);

// ���� ID (�г���) �ߺ�Ȯ���ϴ� �Լ�. (
bool CheckIDDuplication(int nTotalSockets, SOCKETINFO* SocketInfoArray[], _TCHAR id[])
{							// �� ���� ����, ���� �迭, Ŭ�󿡰� ���� ���� �г���
	// ���� ������ Ŭ���̾�Ʈ �߿��� ��ġ�ϴ� ���� Ž��
	for (int i = 0; i < nTotalSockets; i++)
	{
		SOCKETINFO* ptr = SocketInfoArray[i];
		
		// �ߺ��� ã���� ��� -> false ��ȯ (���̵� ����ȵ�)
		if (_tcscmp(id, ptr->id_nickname) == 0) // Ŭ�󿡰� ���� nickname�� ������ ����ִ� id_nickname�� ������
			//_tcscmp(userId, input_result) == 0
		{
			return false; // false�� ��ȯ�Ѵ�.
		}
	}
	// �ߺ��� ���� ��� -> true ��ȯ (���̵� �ᵵ��)
	
	_tcscpy(SocketInfoArray[nTotalSockets - 1] -> id_nickname, id); //A�� B ���� (���� �� ���Ͽ� �г��� ����)
	return true;
}

/*
// ���� ���� ������ ���� ����ü�� ����
typedef struct _socketinfo
{
	socket sock;
	char   buf[bufsize + 1];
	int    recvbytes;

	// ===== ���� ======
	_tchar id_nickname[bufsize]; // ����� �г���
	int    score = 0;       // ���� �÷��� ����
} socketinfo;

*/