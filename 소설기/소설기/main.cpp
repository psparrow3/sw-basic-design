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
	SetConsoleTitle(L"�Ҿ���� ����");

	// Ŀ�� �����
	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO curCursorInfo;
	GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
	curCursorInfo.bVisible = 0;
	SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

	// ��׶���(��) ���� ����
	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');


	// �� �׸��� - ���� �����Ǿ� �����Ƿ� �ʱ�ȭ �� �ٽ� �׸��� ����
	
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