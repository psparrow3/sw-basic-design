#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"

int stage1_pre[12][20]
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

int main() {
	draw a;
	a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	a.SetConsoleFontSize(1);
	SetConsoleTitle(L"�Ҿ���� ����");


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
		a.drawBitmap("block.bmp", buffer, x, 440, SCREEN_WIDTH);
	}
	for (y = 0; y < 12; y++) {
		a.drawBitmap("block.bmp", buffer, x, y * BLOCK_SIZE, SCREEN_WIDTH);
	}
	a.drawBitmap("tutorial_building.bmp", buffer, x - 383, 80, SCREEN_WIDTH);

	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

	// ���� �� ���� ��� (���� ���� ��)

	drawCharacter ac;



	a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	while (1) {
		int preX = ac.x;
		int preY = ac.y;
		ac.gravity();



		if (_kbhit()) {

			ac.characterMove(buffer);
		}


		ac.characterEraese(preX, preY, buffer);
		ac.characterDraw(ac.x, ac.y, buffer);

		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	}


	return 0;

}
