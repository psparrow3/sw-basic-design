#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "drawStage.h"

int main() {
    drawStage a;
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
