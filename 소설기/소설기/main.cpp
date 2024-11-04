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
    SetConsoleTitle(L"잃어버린 낙원");

    HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curCursorInfo;
    GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
    curCursorInfo.bVisible = 0; // 커서 숨기기
    SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

    // 버퍼 생성
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
    int x;
    int y;
    for (y = 0; y < SCREEN_HEIGHT - BLOCK_SIZE; y += BLOCK_SIZE) {
        a.drawBitmap("block.bmp", buffer, SCREEN_HEIGHT - BLOCK_SIZE, y, SCREEN_WIDTH);
    }

    // 버퍼 내용을 출력합니다.
    a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    getchar();
    return 0;
}
