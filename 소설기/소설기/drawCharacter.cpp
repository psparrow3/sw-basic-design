#include "drawCharacter.h"
#include "character.h"
#include <windows.h>
#include <iostream>
#include "draw.h"
#include "conio.h"

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
    int previousX = x;
    int previousY = y;
  

    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
    while (1) 
    {
        if (_kbhit()) { // 키 입력이 있을 경우
            int key = _getch(); // 키를 가져옵니다

            // 이전 위치를 지웁니다.
            a.drawBitmap("empty_space.bmp", buffer, previousX, previousY, SCREEN_WIDTH);

            // 키 입력에 따라 캐릭터 이동
            characterMove(key);


            // 이동 후 위치 업데이트
            previousX = x;
            previousY = y;
           


           

            // 새로운 위치에 캐릭터를 그립니다.
            a.drawBitmap("character_original.bmp", buffer, x, y, SCREEN_WIDTH);

            
            // 버퍼 내용을 출력합니다.
            a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

            Sleep(16);
        }
    }

    // 버퍼 내용을 출력합니다.
   

    getchar();
   
}