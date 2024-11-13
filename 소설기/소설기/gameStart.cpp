#include "gameStart.h"

gameStart::gameStart() {

}
void gameStart::startGame() {
	draw a;
	drawCharacter ac;
	
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

	startScreen ss;
	drawStage_prologue dsp;
	drawStage1 ds1;

	

	/*ss.drawStartScreen;*/
	while (1) {
		if (ac.progress == 0) {
			dsp.stagePrologueDraw(buffer);
		}
		else if (ac.progress == 1) {
			ds1.stage1Draw(buffer);
		}

		
	}
}
