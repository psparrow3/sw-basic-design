#include "drawCharacter.h"
#include "character.h"
#include <windows.h>
#include <iostream>
#include "draw.h"
#include "conio.h"

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
    int previousX = x;
    int previousY = y;
  

  
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' '); 
    a.drawBitmap("character_original.bmp", buffer, x, y, SCREEN_WIDTH);
  
    // ���� ������ ����մϴ�.
   

    getchar();
   
}