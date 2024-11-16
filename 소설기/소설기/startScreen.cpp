#include "startScreen.h"
#include "draw.h"
#include "drawCharacter.h"

startScreen::startScreen()
{
	std::vector<char> buffer1(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
	std::vector<char> buffer2(40 * 60, ' ');
	std::vector<char> buffer3(40 * 60, ' ');
	std::vector<char> buffer4(40 * 60, ' ');

	draw::buffer_empty = draw::drawBitmap("empty_map.bmp", buffer1, 0, 0, SCREEN_WIDTH);

	drawCharacter::characterRight = draw::drawBitmap("character_right_original.bmp", buffer2, 0, 0, 40);
	drawCharacter::characterLeft = draw::drawBitmap("character_left_original.bmp", buffer3, 0, 0, 40);
	drawCharacter::characterEmpty = draw::drawBitmap("empty_character.bmp", buffer4, 0, 0, 40);
}

void startScreen::drawStartScreen() 
{
	draw a;
	while (1) {
		if (_kbhit()) {
			break;
		}
		a.drawBuffer(draw::buffer_empty, SCREEN_WIDTH, SCREEN_HEIGHT);
	}
}