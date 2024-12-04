#include "Boss2.h"

int Boss2::m_x = 1440;
int Boss2::m_y = 300;
int Boss2::hp = 2;

void Boss2::Boss2Attack_change()
{
	character::future = !character::future;
}

void Boss2::Boss2Attack_laser(std::vector<char>& buffer, int x)
{
	draw a;
	
	a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);

	for (int y = 0; y < 11; y++)
	{
		a.drawBitmap("laser_length.bmp", buffer, x, y * 40, SCREEN_WIDTH);
	}
}

void Boss2::Boss2Location(int(&stage)[25][40])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++) 
		{
			int posX = m_x / 40 + i;
			int posY = m_y / 20 + j;
			stage[posY][posX] =99;
		}
	}
}

void Boss2::Boss2LocationErase(int(&stage)[25][40])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int posX = m_x / 40 + i;
			int posY = m_y / 20 + j;
			stage[posY][posX] = 0;
		}
	}
}

void Boss2::Boss2TakeDamage(int(&stage)[25][40])
{
	int atX;
	int atY = character::y;

	if (character::facingRight)
	{
		atX = character::x + 80;
	}
	else
	{
		atX = character::x - 80;
	}

	int coll = character::collision(stage, atX, atY);

	if (coll == 99)
	{
		hp--;
	}

	if (hp == 1)
	{
		m_x = 0;
	}
}
