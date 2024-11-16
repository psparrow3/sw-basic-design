#include "gameStart.h"

gameStart::gameStart() {
	draw a;

	a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	a.SetConsoleFontSize(1);
	SetConsoleTitle(L"�Ҿ���� ����");

	// Ŀ�� �����
	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO curCursorInfo;
	GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
	curCursorInfo.bVisible = 0;
	SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
}

void gameStart::startGame() {
	drawCharacter ac;

	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

	startScreen ss;
	drawStage_prologue dsp;
	drawStage1 ds1;

	startScreen a;

	a.drawStartScreen();

	/*ss.drawStartScreen;*/
	while (1) {
		switch (character::progress)
		{
		case 0:
			dsp.stagePrologueDraw(buffer);
			break;
		case 1:
			ds1.stage1Draw(buffer);
			break;
		case 2:
			ds1.stage1BossDraw(buffer);
			break;
		default:
			break;
		}
	}
}