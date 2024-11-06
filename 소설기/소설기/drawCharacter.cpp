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
    while (1) 
    {
        if (_kbhit()) { // Ű �Է��� ���� ���
            int key = _getch(); // Ű�� �����ɴϴ�

            // ���� ��ġ�� ����ϴ�.
            a.drawBitmap("empty_space.bmp", buffer, previousX, previousY, SCREEN_WIDTH);

            // Ű �Է¿� ���� ĳ���� �̵�
            characterMove(key);


            // �̵� �� ��ġ ������Ʈ
            previousX = x;
            previousY = y;
           


           

            // ���ο� ��ġ�� ĳ���͸� �׸��ϴ�.
            a.drawBitmap("character_original.bmp", buffer, x, y, SCREEN_WIDTH);

            
            // ���� ������ ����մϴ�.
            a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

            Sleep(16);
        }
    }

    // ���� ������ ����մϴ�.
   

    getchar();
   
}