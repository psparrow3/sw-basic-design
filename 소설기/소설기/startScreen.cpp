#include "startScreen.h"

startScreen::startScreen() {

}
void drawStartScreen(std::vector<char>& buffer) 
{
	draw a;
	while (1) {
		if (_kbhit()) {
			break;
		}
		a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	}
}