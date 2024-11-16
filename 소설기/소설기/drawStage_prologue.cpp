#include "drawStage_prologue.h"

#include "draw.h"

std::vector<char> drawStage_prologue::buffer_stp = drawStage_prologue::stpDraw();

drawStage_prologue::drawStage_prologue()
{
	
}

void drawStage_prologue::stagePrologueDraw(std::vector<char>& buffer) {
	drawCharacter ac;

	while (1) {
		if (ac.nextStage)
		{
			draw::drawBuffer(draw::buffer_empty, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
			break;
		}

		// 캐릭터 이전 위치 지우기
		ac.characterErase(ac.x, ac.y, drawCharacter::characterEmpty);

		int coll = ac.collision(stage_prologue, ac.x, ac.y);
		
		if (coll != 2 || coll != 10 || coll != 11) 
		{
			ac.gravity(stage_prologue, ac.x, ac.y);
		}

		int preX = ac.x, preY = ac.y;

		// 캐릭터 이동
		ac.characterMove(stage_prologue);

		if (preX != ac.x || preY != ac.y)
		{
			if (ac.future)
			{
				draw::drawBuffer(buffer_stp, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
			}
			else
			{
				draw::drawBuffer(buffer_stp, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
			}

			if (ac.facingRight)
			{
				ac.characterRightDraw(ac.x, ac.y, drawCharacter::characterRight);
			}
			else
			{
				ac.characterLeftDraw(ac.x, ac.y, drawCharacter::characterLeft);
			}
		}
	}
}

std::vector<char> drawStage_prologue::stpDraw()
{
	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

	buffer = draw::drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	buffer = draw::drawBitmap("tutorial_building.bmp", buffer, 1200, 120, SCREEN_WIDTH);
	buffer = draw::drawBitmap("A_button.bmp", buffer, 100, 60, SCREEN_WIDTH);
	buffer = draw::drawBitmap("S_button.bmp", buffer, 200, 60, SCREEN_WIDTH);
	buffer = draw::drawBitmap("SPACE_button.bmp", buffer, 400, 60, SCREEN_WIDTH);
	buffer = draw::drawBitmap("left_button.bmp", buffer, 900, 60, SCREEN_WIDTH);
	buffer = draw::drawBitmap("right_button.bmp", buffer, 1050, 60, SCREEN_WIDTH);
	buffer = draw::drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

	return buffer;
}