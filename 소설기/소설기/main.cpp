#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"
#include "character.h"

int stage1_pre[12][20] =
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
    {1,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0},
    {0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1},
    {0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};

int main()
{
    draw a;
    character ac;
    a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    a.SetConsoleFontSize(1);
    SetConsoleTitle(L"잃어버린 낙원");

    HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curCursorInfo;
    GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
    curCursorInfo.bVisible = 0; // 커서 숨기기
    SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

    // 버퍼 생성 (힙 메모리에 할당)
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

    // 바닥과 벽 초기 설정
    int x, y;

    // 맨 밑 y좌표 460
    for (y = 0; y < 12; y++)
    {
        for (x = 0; x < 20; x++)
        {
            if (stage1_pre[y][x] == 1)
            {
                int posX = x * BLOCK_SIZE;
                int posY = 460 - y * BLOCK_SIZE;

                // 위치가 유효한지 확인
                if (posX >= 0 && posX < SCREEN_WIDTH && posY >= 0 && posY < SCREEN_HEIGHT)
                {
                    a.drawBitmap("block.bmp", buffer, posX, posY, SCREEN_WIDTH);
                }
            }
        }
    }

    a.drawBitmap("character_original.bmp", buffer, 40, 400, SCREEN_WIDTH);

    a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    return 0;
}
