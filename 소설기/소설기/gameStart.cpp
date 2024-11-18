#include "gameStart.h"

gameStart::gameStart() {
	draw a;

	a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	a.SetConsoleFontSize(1);
	SetConsoleTitle(L"ÀÒ¾î¹ö¸° ³«¿ø");

	// Ä¿¼­ ¼û±â±â
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
	/*drawStage2 ds2;*/
	/*drawstage3 ds3;*/
	/*ac.progress+=1;*/

	startScreen a;

	/*ss.drawStartScreen;*/
	while (1) {
		std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

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
			/*ds2.stage2Draw(buffer);*/
			break;
		case 4:
			/*ds2.stage2BossDraw(buffer);*/
			break;
		case 5:
			/*ds3.stage2BossDraw(buffer);*/
			break;
		default:
			break;
		}
	}
}