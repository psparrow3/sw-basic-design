#include <iostream>

#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"
#include "drawStage1.h"
#include "Boss1.h"


int main() {
	draw a;
	Boss1 b(18, 40);
	a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	a.SetConsoleFontSize(1);
	SetConsoleTitle(L"잃어버린 낙원");

	// 커서 숨기기
	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO curCursorInfo;
	GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
	curCursorInfo.bVisible = 0;
	SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

	// 백그라운드(맵) 버퍼 생성
	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');


	// 맵 그리기 - 맵은 고정되어 있으므로 초기화 후 다시 그리지 않음
	
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

	a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	int flag = 0;
	int x = 18;

	while (1)
	{
		a.drawBitmap("empty_block.bmp", buffer, b.m_x, b.m_y, SCREEN_WIDTH);

		if (!flag)
		{
			x--;
			b.Boss1Move(x);
			
			if (x == 1)
			{
				flag = 1;
			}

			a.drawBitmap("block.bmp", buffer, b.m_x, b.m_y, SCREEN_WIDTH);

			a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
		}
		else
		{
			x++;
			b.Boss1Move(x);

			if (x == 18)
			{
				flag = 0;
			}
			a.drawBitmap("block.bmp", buffer, b.m_x, b.m_y, SCREEN_WIDTH);

			a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
		}

		Sleep(200);
	}

	getchar();

	return 0;
}