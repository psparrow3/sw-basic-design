#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"

int main() {
    draw a;
    a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    a.SetConsoleFontSize(1);
    SetConsoleTitle(L"�Ҿ���� ����");

    HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curCursorInfo;
    GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
    curCursorInfo.bVisible = 0; // Ŀ�� �����
    SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

    // ���� ����
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
    a.drawBitmap("character_origianl.bmp", buffer, 50, 50, SCREEN_WIDTH);
    int x;
    int y;
    for (x = 0; x < SCREEN_WIDTH - BLOCK_SIZE * 7; x += BLOCK_SIZE * 2) {
        a.drawBitmap("block.bmp", buffer, x, SCREEN_HEIGHT- BLOCK_SIZE, SCREEN_WIDTH);
    }
    
    
    
    // ���� ������ ����մϴ�.
    a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    getchar();
    return 0;
}
