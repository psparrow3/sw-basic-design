#include "gameStart.h"

gameStart::gameStart() {

}
void gameStart::startGame() {
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

	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');



	/*startScreen ss;
	ss.drawStartScreen(buffer);*/

	drawStage_prologue dsp;
	dsp.stagePrologueDraw(buffer);

	drawStage1 ds1;
	ds1.stage1Draw(buffer);

}
