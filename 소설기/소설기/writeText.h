#pragma once
#include <iostream>
#include <Windows.h>
#include <string>

class writeText
{
public:
    void drawText(const std::wstring& text, int x, int y, int fontSize, COLORREF color, const std::wstring& fontName);
};

