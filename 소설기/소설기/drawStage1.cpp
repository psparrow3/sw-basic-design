#include "drawStage1.h"
#include "drawStage.h"

drawStage1::drawStage1()
{
	draw a;
	a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	a.SetConsoleFontSize(1);
	SetConsoleTitle(L"ÀÒ¾î¹ö¸° ³«¿ø");

	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO curCursorInfo;
	GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
	curCursorInfo.bVisible = 0; // Ä¿¼­ ¼û±â±â
	SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

	// ¹öÆÛ »ý¼º
	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

	int x;

	int y;

	for (x = 0; x < SCREEN_WIDTH - BLOCK_SIZE * 10; x += BLOCK_SIZE * 2)
	{
		a.drawBitmap("block.bmp", buffer, x, SCREEN_HEIGHT - BLOCK_SIZE, SCREEN_WIDTH);
	}

	for (y = SCREEN_HEIGHT - BLOCK_SIZE; y > 0; y -= BLOCK_SIZE)
	{
		a.drawBitmap("block.bmp", buffer, x, y, SCREEN_WIDTH);
	}

	a.drawBitmap("tutorial_building.bmp", buffer, x - 383, SCREEN_HEIGHT - BLOCK_SIZE * 10, SCREEN_WIDTH);
}