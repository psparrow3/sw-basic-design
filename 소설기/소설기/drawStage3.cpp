#include "drawStage3.h"
#include "drawStage3.h"

int drawStage3::stage3_future_Boss[12][20] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}


};

int drawStage3::stage3_past_Boss[12][20] =
{
	
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}

};


int drawStage3::stage3_Future_Boss[25][40] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	{2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
};

int drawStage3::stage3_Past_Boss[25][40] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
	{0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
};


void drawStage3::stage3BossPage1Draw(std::vector<char>& buffer)
{
	draw a;
	drawCharacter ac;
	
	writeText wt;
	int stage[25][40];
	ac.facingRight = 1;
	ac.future = 1;
	ac.attacking = 0;
	
	int start = 0;
	int resetPastStage[25][40];
	int resetFutureStage[25][40];

	memcpy(resetPastStage, stage3_Past_Boss, sizeof(stage3_Past_Boss));
	memcpy(resetFutureStage, stage3_Future_Boss, sizeof(stage3_Future_Boss));

	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	


	ac.y = 370;

	while (1)
	{
		if (ac.nextStage || ac.gameOverCheck)
		{
			if (ac.nextStage)
			{
				ac.nextStage = 0;
				Sleep(1000);
				a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
				a.eraseBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);
				a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
			}

			if (ac.gameOverCheck)
			{
				ac.getKey = 0;
				ac.isJumping = 0;
				ac.facingRight = 1;
				memcpy(stage3_Past_Boss, resetPastStage, sizeof(stage3_Past_Boss));
				memcpy(stage3_Future_Boss, resetFutureStage, sizeof(stage3_Future_Boss));
			}

			character::characterHeart = 3;
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			a.eraseBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);

			ac.x = 0;
			ac.y = 370;
			ac.facingRight = 1;
			
			/*Boss3::hp = 2;*/

			ac.gameOverCheck = 0;
			break;
		}

		a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);

		if (ac.attacking)
		{
			ac.attacking = 0;
			ac.characterAttackErase(ac.x, ac.y, buffer);
			/*Boss3::Boss2TakeDamage(stage);*/
		}
		else
		{
			ac.characterErase(ac.x, ac.y, buffer);
		}

		int charactercoll = ac.collision(stage, ac.x, ac.y);

		if (charactercoll != 2 && charactercoll != 10 && charactercoll != 11 && charactercoll != 3 && charactercoll != 14 && charactercoll != 15) {
			ac.gravity(stage, ac.x, ac.y);
		}

		if (start == 0) {
			a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
			wt.drawText(L"낙원을 방해하는 자", 500, 400, 100, RGB(128, 128, 128), L"굴림체");
			Sleep(1000);
			wt.drawText(L"용서하지 않는다", 500, 500, 100, RGB(128, 128, 128), L"굴림체");
			Sleep(1000);
			start = 1;
		}
		else
		{
			if (ac.future)
			{
				memcpy(stage, stage3_Future_Boss, sizeof(stage3_Future_Boss));
				stage3FutureBossDraw(buffer);
			}
			else
			{
				memcpy(stage, stage3_Past_Boss, sizeof(stage3_Past_Boss));

				
				stage3PastBossDraw(buffer);
			}
		}
		/*Boss3::Boss3LocationErase(stage);
		Boss3::Boss3Location(stage);*/
	
		ac.characterMove(stage, buffer);
		ac.characterDraw(buffer);


		

		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
		
		wt.drawText(L"가지고 있는 아이템:", 1650, 600, 20, RGB(128, 128, 128), L"굴림체");
	
		
	}
}


void drawStage3::stage3BossPage2Draw(std::vector<char>& buffer)
{
	draw a;
	drawCharacter ac;

	writeText wt;
	int stage[25][40];
	ac.facingRight = 1;
	ac.future = 0;
	ac.attacking = 0;

	int start = 0;
	int resetPastStage[25][40];
	int resetFutureStage[25][40];

	memcpy(resetPastStage, stage3_Past_Boss, sizeof(stage3_Past_Boss));
	memcpy(resetFutureStage, stage3_Future_Boss, sizeof(stage3_Future_Boss));

	std::srand(static_cast<unsigned int>(std::time(nullptr)));




	ac.y = 370;

	while (1)
	{
		if (ac.nextStage || ac.gameOverCheck)
		{
			if (ac.nextStage)
			{
				ac.nextStage = 0;
				Sleep(1000);
				a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
				a.eraseBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);
				a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
			}

			if (ac.gameOverCheck)
			{
			
				ac.isJumping = 0;
				ac.facingRight = 1;
				ac.future = 0;
				memcpy(stage3_Past_Boss, resetPastStage, sizeof(stage3_Past_Boss));
				memcpy(stage3_Future_Boss, resetFutureStage, sizeof(stage3_Future_Boss));
			}

			character::characterHeart = 3;
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			a.eraseBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);

			ac.x = 0;
			ac.y = 370;
			ac.facingRight = 1;

			/*Boss3::hp = 2;*/

			ac.gameOverCheck = 0;
			break;
		}

		a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);

		if (ac.attacking)
		{
			ac.attacking = 0;
			ac.characterAttackErase(ac.x, ac.y, buffer);
			/*Boss3::Boss2TakeDamage(stage);*/
		}
		else
		{
			ac.characterErase(ac.x, ac.y, buffer);
		}

		int charactercoll = ac.collision(stage, ac.x, ac.y);

		if (charactercoll != 2 && charactercoll != 10 && charactercoll != 11 && charactercoll != 3 && charactercoll != 14 && charactercoll != 15) {
			ac.gravity(stage, ac.x, ac.y);
		}


		
		if (ac.future)
		{
			memcpy(stage, stage3_Future_Boss, sizeof(stage3_Future_Boss));

			stage3FutureBossDraw(buffer);
		}
		else
		{
			memcpy(stage, stage3_Past_Boss, sizeof(stage3_Past_Boss));
			stage3PastBossDraw(buffer);
		}

		/*Boss3::Boss2LocationErase(stage);
		Boss3::Boss2Location(stage);*/
		
		ac.characterMove(stage, buffer);
		ac.characterDraw(buffer);




		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
		

		wt.drawText(L"가지고 있는 아이템:", 1650, 600, 20, RGB(128, 128, 128), L"굴림체");


	}
}


void drawStage3::stage3FutureBossDraw(std::vector<char>& buffer)
{
	draw a;
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch (stage3_future_Boss[y][x]) {
			case 1:
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("button1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("laser_length.bmp", buffer, 2 * x * BLOCK_SIZE + 20, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 8:
				a.drawBitmap("laser_width.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 10, SCREEN_WIDTH);
				break;
			case 9:
				a.drawBitmap("bridge.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;

			}
		}
	}
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

}

void drawStage3::stage3PastBossDraw(std::vector<char>& buffer)
{
	draw a;

	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch (stage3_past_Boss[y][x]) {
			case 1:
				a.drawBitmap("past_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("button1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("laser_length.bmp", buffer, 2 * x * BLOCK_SIZE + 20, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 8:
				a.drawBitmap("laser_width.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 10, SCREEN_WIDTH);
				break;
			case 9:
				a.drawBitmap("bridge.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;

			}
		}
	}
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
}
