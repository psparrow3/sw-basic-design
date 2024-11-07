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

    // �ܼ� â ����
    a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    a.SetConsoleFontSize(1);
    SetConsoleTitle(L"�Ҿ���� ����");

    HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curCursorInfo;
    GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
    curCursorInfo.bVisible = 0; // Ŀ�� �����
    SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

    // ȭ�� ���� ���� �� �ʱ�ȭ
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

    // ó���� ���� �׷�����, �̸� �� ���� ǥ��
    int x, y;
    for (x = 0; x < SCREEN_WIDTH - BLOCK_SIZE * 10; x += BLOCK_SIZE * 2) {
        a.drawBitmap("block.bmp", buffer, x, SCREEN_HEIGHT - BLOCK_SIZE, SCREEN_WIDTH);
    }
    for (y = SCREEN_HEIGHT - BLOCK_SIZE; y > 0; y -= BLOCK_SIZE) {
        a.drawBitmap("block.bmp", buffer, x, y, SCREEN_WIDTH);
    }
    a.drawBitmap("tutorial_building.bmp", buffer, x - 383, SCREEN_HEIGHT - BLOCK_SIZE * 10, SCREEN_WIDTH);

    // ���� �� ���� ��� (���� ���� ��)
    a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    character ac;
   
    while (1) {
      
       
        ac.characterMove(buffer);
          
        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
    }
  
    return 0;
}
