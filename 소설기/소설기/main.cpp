#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"

int stage1_pre[12][20] =
{
<<<<<<< HEAD
    draw a;
=======
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

int main() {
	draw a;
	a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	a.SetConsoleFontSize(1);
	SetConsoleTitle(L"�Ҿ���� ����");
>>>>>>> 626dd539c8e70e552ec12d24826020842a09a272

    // �ܼ� â ����
    a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    a.SetConsoleFontSize(1);
    SetConsoleTitle(L"�Ҿ���� ����");

<<<<<<< HEAD
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
=======
	// ���� ����
	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

	int x;

	int y;

	for (y = 0; y < 12; y++)
	{
		for (x = 0; x < 20; x++)
		{
			if (stage1_pre[y][x])
			{
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
			}
		}
	}

	a.drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 10, SCREEN_WIDTH);

	// ���� ������ ����մϴ�.
	a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	getchar();
	return 0;
>>>>>>> 626dd539c8e70e552ec12d24826020842a09a272
}
