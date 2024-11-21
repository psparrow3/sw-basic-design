#include "writeText.h"

void writeText::drawText(const std::wstring& text, int x, int y, int fontSize, COLORREF color, const std::wstring& fontName) {
    HWND consoleWindow = GetConsoleWindow();
    HDC hdc = GetDC(consoleWindow);
    
    // �۾�ü �� ũ�� ����
    HFONT hFont = CreateFont(
        fontSize, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE,        // FW BOLD���� �β� �ٲ� �� ����
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, fontName.c_str()
    );

    // ���� ��Ʈ ����
    HFONT oldFont = (HFONT)SelectObject(hdc, hFont);

    // �۾� ���� ����
    SetTextColor(hdc, color);

    // ��� ���� ó��
    SetBkMode(hdc, TRANSPARENT);

    // �ؽ�Ʈ ���
    TextOut(hdc, x, y, text.c_str(), text.length());

    // ��Ʈ ���� �� �޸� ����
    SelectObject(hdc, oldFont);
    DeleteObject(hFont);
    ReleaseDC(consoleWindow, hdc);
}
