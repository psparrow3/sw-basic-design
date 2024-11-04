#include "drawCharacter.h"
#include "character.h"
#include <windows.h>
#include <iostream>
#include "draw.h"

// 캐릭터를 그리는 함수
drawCharacter::drawCharacter() 
{
    draw a;
    a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    a.SetConsoleFontSize(1);
  

    HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curCursorInfo;
    GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
    curCursorInfo.bVisible = 0; // 커서 숨기기
    SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

    // 버퍼 생성
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
    a.drawBitmap("character_origianl.bmp", buffer, x, y, SCREEN_WIDTH);
   



    // 버퍼 내용을 출력합니다.
    a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    getchar();
   
}