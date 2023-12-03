#include "stdafx.h"

void InitializeListView(HWND hWnd) {
    g_hListView = CreateWindowEx(0, WC_LISTVIEW, _T("Client List"),
        WS_CHILD | WS_VISIBLE | WS_BORDER | LVS_REPORT | LVS_SINGLESEL,
        10, 10, 200, 320, hWnd, NULL, NULL, NULL);

    // ù ��° �� �߰�
    LVCOLUMN lvc1;
    lvc1.mask = LVCF_TEXT | LVCF_WIDTH;
    lvc1.cx = 100;  // ù ��° ���� �ʺ� ����
    lvc1.pszText = (LPWSTR)_T("Port");  // ù ��° ���� "Port" ǥ��
    ListView_InsertColumn(g_hListView, 0, &lvc1);

    // �� ��° �� �߰�
    LVCOLUMN lvc2;
    lvc2.mask = LVCF_TEXT | LVCF_WIDTH;
    lvc2.cx = 100;  // �� ��° ���� �ʺ� ����
    lvc2.pszText = (LPWSTR)_T("User ID");  // �� ��° ���� "User ID" ǥ��
    ListView_InsertColumn(g_hListView, 1, &lvc2);
}

void AddClientToListView(int port) {
    LVITEM lvItem = { 0 };
    lvItem.mask = LVIF_TEXT | LVIF_PARAM;
    lvItem.iItem = 0;
    lvItem.iSubItem = 0;

    // ��Ʈ ��ȣ�� ���ڿ��� ��ȯ�Ͽ� �߰�
    wchar_t portStrW[10];
    swprintf(portStrW, sizeof(portStrW) / sizeof(portStrW[0]), _T("%d"), port);
    lvItem.pszText = portStrW;
    lvItem.lParam = port; // ��Ʈ ��ȣ ����

    // ù ��° ���� ��Ʈ ��ȣ �߰�
    ListView_InsertItem(g_hListView, &lvItem);
}

// Ŭ���̾�Ʈ ����� ������ â�� ǥ��
void DisplayClientList() {
    // Ŭ���̾�Ʈ ������ ����Ǿ��� �� ȣ���Ͽ� ����Ʈ �並 ������Ʈ�մϴ�.
    ListView_RedrawItems(g_hListView, 0, ListView_GetItemCount(g_hListView) - 1);
    UpdateWindow(g_hListView);
}

void RemoveClientFromListView(int port) {
    LVFINDINFO lvFindInfo;
    lvFindInfo.flags = LVFI_PARAM;

    // �Ķ���ͷ� ��Ʈ ��ȣ�� �˻��� ���
    lvFindInfo.lParam = port;

    int index = ListView_FindItem(g_hListView, -1, &lvFindInfo);
    if (index != -1) {
        ListView_DeleteItem(g_hListView, index);
    }
}