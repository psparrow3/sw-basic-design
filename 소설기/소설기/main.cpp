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
	{0,0,2,0,0,0,0,0,3,0,3,0,0,0,0,0,0,0,0,0},
	{4,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,1,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
	{0,0,0,0,1,0,0,0,0,0,0,0,6,0,3,0,0,1,0,0},
	{1,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,7,0,5},
	{0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1},
	{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};

int main() {
	draw a;
	a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	a.SetConsoleFontSize(1);
	SetConsoleTitle(L"�Ҿ���� ����");
<<<<<<< HEAD

=======
>>>>>>> f32f47c4da7f569eda8d32ad9e96d075d4c1bd3b

	// �ܼ� Ŀ�� �����
	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO curCursorInfo;
	GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
	curCursorInfo.bVisible = 0;
	SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

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
  
   

	//for (y = 0; y < 12; y++)
	//{
	//	for (x = 0; x < 20; x++)
	//	{
	//		if (stage1_pre[y][x])
	//		{
	//			a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
	//		}
	//	}
	//}

	//a.drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 10, SCREEN_WIDTH);

	//// ���� ������ ����մϴ�.
	//a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	
	return 0;

=======
	// ȭ�� ���� ����
	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

	// stage1_pre �迭 ������� ���� �׸�
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch(stage1_pre[y][x]){
			case 1:
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 2:
				a.drawBitmap("cold_lava.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 3:
				a.drawBitmap("movable_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("laser1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			}
		}
	}

	// ���� �׸���
	a.drawBitmap("broken_door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);

	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

	// �� ���
	a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	// ĳ���� �̵� ����
	character ac;

	
	
	while (1) {
		ac.characterMove(buffer);
		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
	}

	return 0;
>>>>>>> f32f47c4da7f569eda8d32ad9e96d075d4c1bd3b
}
