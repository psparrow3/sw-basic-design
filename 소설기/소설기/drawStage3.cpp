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


void drawStage3::stage3BossDraw(std::vector<char>& buffer)
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

	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	int attackTime = rand() % 21 + 20;
	int timeCheck = 0;
	int laserTime = 0;
	int change = 0;
	int BossAttack = 0;

	int cx, cy;
	cx = cy = 0;

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
			ac.gameOverCheck = 0;
			Boss3::hp = 6;
			Boss3::phase = 0;
			Boss3::meteor_y = 0;

			break;
		}

		a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);

		if (ac.attacking)
		{
			if (!(BossAttack && change))
			{
				ac.attacking = 0;
			}
			ac.characterAttackErase(ac.x, ac.y, buffer);
			Boss3::Boss3TakeDamage(stage);

			if (Boss3::hp == 3)
			{
				Boss3::phase = 1;
			}
		}
		else
		{
			ac.characterErase(ac.x, ac.y, buffer);
		}

		int charactercoll = ac.collision(stage, ac.x, ac.y);

		if (charactercoll != 2 && charactercoll != 10 && charactercoll != 11 && charactercoll != 3 && charactercoll != 14 && charactercoll != 15)
		{
			ac.gravity(stage, ac.x, ac.y);
		}

		if (start == 0) 
		{
			a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
			wt.drawText(L"내 낙원을 방해하는 자", 500, 400, 100, RGB(128, 128, 128), L"굴림체");
			Sleep(1000);
			wt.drawText(L"용서치 않겠다", 500, 500, 100, RGB(128, 128, 128), L"굴림체");
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

		if (timeCheck > attackTime)
		{
			BossAttack = 1;

			if (change)				// 메테오
			{
				Boss3::Boss3Attack_meteor(buffer);

				if (ac.attacking)
				{
					ac.attacking = 0;
					
					if (Boss3::damaged)
					{
						timeCheck = 0;
						change = 0;
						attackTime = rand() % 21 + 20;
						Boss3::meteor_y = 0;
						BossAttack = 0;
						Boss3::damaged = FALSE;
					}

					if (ac.facingRight)
					{
						if (character::x + 160 > 720 && character::x + 80 < 880 && 
							character::y + 60 > Boss3::meteor_y && character::y < Boss3::meteor_y + 120)
						{
							timeCheck = 0;
							change = 0;
							attackTime = rand() % 21 + 20;
							Boss3::meteor_y = 0;
							BossAttack = 0;
						}
					}
					else
					{
						if (character::x + 80 > 720 && character::x < 880 && 
							character::y + 60 > Boss3::meteor_y && character::y < Boss3::meteor_y + 120)
						{
							timeCheck = 0;
							change = 0;
							attackTime = rand() % 21 + 20;
							Boss3::meteor_y = 0;
							BossAttack = 0;
						}
					}
				}

				if (character::x + 80 > 720 && character::x < 880 && character::y + 60 > Boss3::meteor_y && character::y < Boss3::meteor_y + 120)
				{
					ac.gameOverCheck = 1;
				}

				if (Boss3::meteor_y == 360)
				{
					Boss3::meteor_y = 0;
					ac.gameOverCheck = 1;
				}
			}
			else					// 레이저
			{
				laserTime++;
				wt.drawText(L"잠시 뒤 레이저 공격이 시작됩니다.", 1650, 650, 20, RGB(128, 128, 128), L"굴림체");
			}
		}

		if (laserTime >= 5)
		{
			if (cx == 0 && cy == 0)
			{
				cx = character::x / 80, cy = character::y / 40;
			}

			Boss3::Boss3Attack_laser(buffer, stage, cx, cy);

			if (laserTime >= 10)
			{
				Boss3::Boss3Erase_laser(stage);
				laserTime = 0;
				timeCheck = 0;
				change = 1;
				cx = cy = 0;
				BossAttack = 0;
			}
		}

		if (Boss3::hp)
		{
			Boss3::Boss3LocationErase(stage);
			Boss3::Boss3Draw(buffer);
			Boss3::Boss3Location(stage);
		}
		else
		{
			BossAttack = 0;
			laserTime = 0;
		}
	
		ac.characterMove(stage, buffer);
		ac.characterDraw(buffer);

		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
		
		wt.drawText(L"가지고 있는 아이템:", 1650, 600, 20, RGB(128, 128, 128), L"굴림체");

		timeCheck++;
	}
}

void drawStage3::stage3FutureBossDraw(std::vector<char>& buffer)
{
	draw a;

	for (int y = 0; y < 12; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			switch (stage3_future_Boss[y][x]) 
			{
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

	for (int y = 0; y < 12; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			switch (stage3_past_Boss[y][x])
			{
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
