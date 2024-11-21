#include "writeText.h"

void writeText::drawText(const std::wstring& text, int x, int y, int fontSize, COLORREF color, const std::wstring& fontName) {
    HWND consoleWindow = GetConsoleWindow();
    HDC hdc = GetDC(consoleWindow);
    
    // 글씨체 및 크기 설정
    HFONT hFont = CreateFont(
        fontSize, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE,        // FW BOLD에서 두께 바꿀 수 있음
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, fontName.c_str()
    );

    // 이전 폰트 저장
    HFONT oldFont = (HFONT)SelectObject(hdc, hFont);

    // 글씨 색상 설정
    SetTextColor(hdc, color);

    // 배경 투명 처리
    SetBkMode(hdc, TRANSPARENT);

    // 텍스트 출력
    TextOut(hdc, x, y, text.c_str(), text.length());

    // 폰트 복원 및 메모리 해제
    SelectObject(hdc, oldFont);
    DeleteObject(hFont);
    ReleaseDC(consoleWindow, hdc);
}
