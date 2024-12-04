#include "gameStart.h"

gameStart::gameStart() {
	draw a;

	SetConsoleTitle(L"잃어버린 낙원");
	a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	a.SetConsoleFontSize(1);

	// 커서 숨기기
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
	drawStage2 ds2;
	drawStage3 ds3;

	ss.drawStartScreen(buffer);

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
		case 3:
			ds2.stage2Draw(buffer);
			break;
		case 4:
			ds2.stage2BossDraw(buffer);
			break;
		case 5:
			ds3.stage3BossDraw(buffer);
			break;
		default:
			break;
		}
	}
}