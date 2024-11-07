#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"
#include "character.h"

int main()
{
    draw a;

    // 콘솔 창 설정
    a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    a.SetConsoleFontSize(1);
    SetConsoleTitle(L"잃어버린 낙원");

    HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curCursorInfo;
    GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
    curCursorInfo.bVisible = 0; // 커서 숨기기
    SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

    // 화면 버퍼 생성 및 초기화
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

    // 처음에 맵을 그려놓고, 이를 한 번에 표시
    int x, y;
    for (x = 0; x < SCREEN_WIDTH - BLOCK_SIZE * 10; x += BLOCK_SIZE * 2) {
        a.drawBitmap("block.bmp", buffer, x, SCREEN_HEIGHT - BLOCK_SIZE, SCREEN_WIDTH);
    }
    for (y = SCREEN_HEIGHT - BLOCK_SIZE; y > 0; y -= BLOCK_SIZE) {
        a.drawBitmap("block.bmp", buffer, x, y, SCREEN_WIDTH);
    }
    a.drawBitmap("tutorial_building.bmp", buffer, x - 383, SCREEN_HEIGHT - BLOCK_SIZE * 10, SCREEN_WIDTH);

    // 맵을 한 번에 출력 (루프 시작 전)
    a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    character ac;
   
    while (1) {
      
       
        ac.characterMove(buffer);
          
        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
    }
  
    return 0;
}
