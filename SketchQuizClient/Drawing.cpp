#include "stdafx.h"

// ======================= 지윤 =======================
// 그림판창 다이얼로그를 만들고 표시하는 함수
void CreateAndShowDialog(HWND hWnd)
{
	g_hDialog = CreateDialog(g_hInstance, MAKEINTRESOURCE(IDD_DIALOG1), hWnd, DlgProc);
	ShowWindow(g_hDialog, SW_SHOW);
	ShowWindow(hWnd, SW_HIDE);
}

void SelectPenColor(DRAW_DETAIL_INFORMATION* g_drawDetailInformation) {
	// 색상 대화 상자 열기
	CHOOSECOLOR cc = { sizeof(CHOOSECOLOR) };
	static COLORREF customColors[16] = { 0 }; // 사용자 정의 색상
	cc.hwndOwner = g_hDrawWnd;
	cc.lpCustColors = customColors;
	cc.Flags = CC_FULLOPEN | CC_RGBINIT;
	cc.rgbResult = g_drawDetailInformation->color;
	if (ChooseColor(&cc)) {
		g_drawDetailInformation->color = cc.rgbResult;
	}
}

void AddLineWidthOption(HWND hDlg) {
	// 항목 추가
	SendDlgItemMessage(hDlg, IDC_LINEWIDTH, CB_ADDSTRING, 0, (LPARAM)_T("얇게"));
	SendDlgItemMessage(hDlg, IDC_LINEWIDTH, CB_ADDSTRING, 0, (LPARAM)_T("보통"));
	SendDlgItemMessage(hDlg, IDC_LINEWIDTH, CB_ADDSTRING, 0, (LPARAM)_T("굵게"));
	SendDlgItemMessage(hDlg, IDC_LINEWIDTH, CB_SETCURSEL, 0, 0); // 초기 선택은 "얇게"
}

void SelectLineWidth(HWND hDlg, DRAW_DETAIL_INFORMATION* g_drawDetailInformation) {
	// Combo Box의 선택이 변경되면 이벤트 처리
	int selectedIndex = SendDlgItemMessage(hDlg, IDC_LINEWIDTH, CB_GETCURSEL, 0, 0);
	switch (selectedIndex)
	{
	case 0: // "얇게" 선택
		// 펜의 굵기를 1px로 설정
		g_drawDetailInformation->width = 1;
		break;
	case 1: // "보통" 선택
		// 펜의 굵기를 3px로 설정
		g_drawDetailInformation->width = 3;
		break;
	case 2: // "굵게" 선택
		// 펜의 굵기를 5px로 설정
		g_drawDetailInformation->width = 5;
		break;
	}
}

// 사용자 ID 배열에 새 사용자 추가 함수
void AddUser(_TCHAR* userIDs[], _TCHAR* newUserID) {
	if (numUsers < MAX_USERS) {
		userIDs[numUsers] = newUserID;
		numUsers++;
	}
}

// 랜덤하게 사용자 아이디 선택하는 함수
_TCHAR* SetRandomUserID(_TCHAR* userIDs[]) {
	// 시드값 설정
	srand((unsigned)time(NULL));

	// 랜덤 인덱스 생성
	int randomIndex = rand() % numUsers;

	// 랜덤으로 선택된 사용자 아이디 반환
	return userIDs[randomIndex];
}

void DisplayDrawingUserID(HWND hDlg, _TCHAR* userIDs[]) {
	HWND hStaticText = GetDlgItem(hDlg, IDC_DRAWINGTEXTID);
	if (hStaticText != NULL) {
		_TCHAR* drawingUserID = SetRandomUserID(userIDs); // 랜덤 사용자 아이디를 가져옴
		if (drawingUserID != NULL) {
			SetWindowText(hStaticText, drawingUserID); // 텍스트 설정
		}
		else {
			SetWindowText(hStaticText, _T("로그인먼저!"));
		}
	}
}

// ======================= 정호 =======================

// 도형 옵션 선택 항목 추가
void AddFigureOption(HWND hDlg)
{
	SendDlgItemMessage(hDlg, IDC_FIGURE, CB_ADDSTRING, 0, (LPARAM)_T("지우개"));
	SendDlgItemMessage(hDlg, IDC_FIGURE, CB_ADDSTRING, 0, (LPARAM)_T("선"));
	SendDlgItemMessage(hDlg, IDC_FIGURE, CB_ADDSTRING, 0, (LPARAM)_T("타원"));
	SendDlgItemMessage(hDlg, IDC_FIGURE, CB_ADDSTRING, 0, (LPARAM)_T("사각형"));
	SendDlgItemMessage(hDlg, IDC_FIGURE, CB_ADDSTRING, 0, (LPARAM)_T("삼각형"));

	// 초기 도형 옵션은 "선"으로 설정 
	SendDlgItemMessage(hDlg, IDC_FIGURE, CB_SETCURSEL, 1, 0);
}

// 그리기 옵션 선택
void SelectFigureOption(HWND hDlg, int &g_currentSelectFigureOption)
{
	// ComboBox의 선택이 변경되면, 이벤트 처리
	int selectedIndex = SendDlgItemMessage(hDlg, IDC_FIGURE, CB_GETCURSEL, 0, 0);
	switch (selectedIndex)
	{
	// "지우개" 모드 선택
	case 0:
		g_currentSelectFigureOption = MODE_ERASE;
		break;
	// "선" 모드 선택
	case 1: 
		g_currentSelectFigureOption = MODE_LINE;
		break;
	// "타원" 모드 선택
	case 2: 
		g_currentSelectFigureOption = MODE_ELLIPSE;
		break;
	// "사각형" 모드 선택
	case 3:
		g_currentSelectFigureOption = MODE_RECTANGLE;
		break;
	// "삼각형" 모드 선택
	case 4:
		g_currentSelectFigureOption = MODE_TRIANGLE;
		break;
	}
}

// 타원 그리기 과정 실행
void DrawEllipseProcess(HWND hWnd, HDC& hDCMem, WPARAM wParam, LPARAM lParam, DRAW_DETAIL_INFORMATION drawDetailInformation)
{
	HDC hDC = GetDC(hWnd);
	HPEN hPen = CreatePen(PS_SOLID, drawDetailInformation.width, drawDetailInformation.color);
	// 윈도우 DC에 타원 출력
	HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);

	// 윈도우 화면에 타원을 1차로 그리기
	DrawEllipseInHDC(hDC, wParam, lParam);

	SelectObject(hDC, hOldPen);
	hOldPen = (HPEN)SelectObject(hDCMem, hPen);

	// 배경 비트맵에 타원을 2차로 그리기
	DrawEllipseInHDC(hDCMem, wParam, lParam);

	SelectObject(hDCMem, hOldPen);

	// 화면 출력용 DC와 Pen 핸들 해제
	DeleteObject(hPen);
	ReleaseDC(hWnd, hDC);
}

// 타원을 특정 HDC에 그림
void DrawEllipseInHDC(HDC tHDC, WPARAM wParam, LPARAM lParam)
{
	// 중심점 찾기
	int centerX = (LOWORD(wParam) + LOWORD(lParam)) / 2;
	int centerY = (HIWORD(wParam) + HIWORD(lParam)) / 2;

	// X,Y에 대한 축 길이 구하기
	int ellipseAxisX = centerX - LOWORD(wParam);
	int ellipseAxisY = centerY - HIWORD(wParam);

	// 각도
	double angle;
	// 종료 위치
	int newX, newY;

	// 시작 위치
	int oldX = LOWORD(lParam);
	int oldY = centerY;

	// 1도씩 회전하면서 타원 그리기
	for (int i = 0; i <= 360; i++)
	{
		// 타원 공식 적용
		angle = 2 * 3.1416 * i / 360;
		newX = centerX + ellipseAxisX * cos(angle);
		newY = centerY + ellipseAxisY * sin(angle);

		// 첫 번째는 같은 지점을 찍으므로 무시
		if (i != 0)
		{
			DrawLineInHDC(tHDC, MAKEWPARAM(oldX, oldY), MAKELPARAM(newX, newY));
		}

		// 종료 위치를 다시 시작 위치로 옮김.
		oldX = newX;
		oldY = newY;
	}
}

// 선 그리기 과정 실행
void DrawLineProcess(HWND hWnd, HDC& hDCMem, WPARAM wParam, LPARAM lParam, DRAW_DETAIL_INFORMATION drawDetailInformation)
{
	HDC hDC = GetDC(hWnd);
	HPEN hPen = CreatePen(PS_SOLID, drawDetailInformation.width, drawDetailInformation.color);
	// 윈도우 화면에 선을 1차로 그리기
	HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);
	DrawLineInHDC(hDC, wParam, lParam);
	SelectObject(hDC, hOldPen);
	// 배경 비트맵에 선을 2차로 그리기
	hOldPen = (HPEN)SelectObject(hDCMem, hPen);
	DrawLineInHDC(hDCMem, wParam, lParam);
	SelectObject(hDCMem, hOldPen);
	// 화면 출력용 DC와 Pen 핸들 해제
	DeleteObject(hPen);
	ReleaseDC(hWnd, hDC);
}

// 선을 특정 HDC에 그림
void DrawLineInHDC(HDC tHDC, WPARAM wParam, LPARAM lParam)
{
	MoveToEx(tHDC, LOWORD(wParam), HIWORD(wParam), NULL);
	LineTo(tHDC, LOWORD(lParam), HIWORD(lParam));
}