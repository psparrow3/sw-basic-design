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
	SetConsoleTitle(L"잃어버린 낙원");


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
		a.drawBitmap("block.bmp", buffer, x, 440, SCREEN_WIDTH);
	}
	for (y = 0; y < 12; y++) {
		a.drawBitmap("block.bmp", buffer, x, y * BLOCK_SIZE, SCREEN_WIDTH);
	}
	a.drawBitmap("tutorial_building.bmp", buffer, x - 383, 80, SCREEN_WIDTH);

	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

	// 맵을 한 번에 출력 (루프 시작 전)

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
