#include "drawCharacter.h"
#include "character.h"
#include <windows.h>
#include <iostream>
#include "draw.h"

// ĳ���͸� �׸��� �Լ�
drawCharacter::drawCharacter() 
{
    draw a;
    a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    a.SetConsoleFontSize(1);
  

    HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curCursorInfo;
    GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
    curCursorInfo.bVisible = 0; // Ŀ�� �����
    SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

    // ���� ����
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
    a.drawBitmap("character_origianl.bmp", buffer, x, y, SCREEN_WIDTH);
   



    // ���� ������ ����մϴ�.
    a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    getchar();
   
}