#include "Boss3.h"

int Boss3::m_x = 1200;
int Boss3::m_y = 40;
int Boss3::meteor_y = 0;
int Boss3::hp = 6;
int Boss3::phase = 0;
bool Boss3::damaged = FALSE;

void Boss3::Boss3Draw(std::vector<char>& buffer)
{
	draw a;

	if (hp > 3)
	{
		a.eraseBitmap("empty_boss3_p1.bmp", buffer, m_x, m_y, SCREEN_WIDTH);
	}
	else
	{
		a.eraseBitmap("empty_boss3_p2.bmp", buffer, m_x, m_y, SCREEN_WIDTH);
	}

	if (hp % 2 == 0)
	{
		m_x = 1360;
	}
	else
	{
		if (hp > 3)
		{
			m_x = 80;
		}
		else
		{
			m_x = 40;
		}
	}

	if (hp > 3)
	{
		if (hp % 2 == 0)
		{
			a.drawBitmap("stage3_Boss_p1_right.bmp", buffer, m_x, m_y, SCREEN_WIDTH);
		}
		else
		{
			a.drawBitmap("stage3_Boss_p1_left.bmp", buffer, m_x, m_y, SCREEN_WIDTH);
		}
	}
	else
	{
		if (hp % 2 == 0)
		{
			a.drawBitmap("stage3_Boss_p2_right.bmp", buffer, m_x, m_y, SCREEN_WIDTH);
		}
		else
		{
			a.drawBitmap("stage3_Boss_p2_left.bmp", buffer, m_x, m_y, SCREEN_WIDTH);
		}
	}
}

void Boss3::Boss3Attack_laser(std::vector<char>& buffer, int(&stage)[25][40], int cx, int cy)
{
	draw a;

	for (int x = 0; x < 20; x++)
	{
		if (!(x >= m_x / 80 && x <= m_x / 80 + 2) && !(x >= cx && x <= cx + 1))
		{
			for (int y = 0; y < 12; y++)
			{
				a.drawBitmap("laser_length.bmp", buffer, x * 80, y * 40, SCREEN_WIDTH);
				stage[y * 2][x * 2] = 8;
				stage[y * 2 + 1][x * 2] = 8;
			}
		}
	}

	if (phase)
	{
		for (int x = 0; x < 20; x++)
		{
			for (int y = 0; y < 12; y++)
			{
				if (!(y >= m_y / 40 && y <= m_y / 40 + 2) && !(y >= cy && y <= cy + 2))
				{
					a.drawBitmap("laser_width.bmp", buffer, x * 80, y * 40, SCREEN_WIDTH);
					stage[y * 2][x * 2] = 8;
					stage[y * 2 + 1][x * 2] = 8;
				}
			}
		}
	}
}

void Boss3::Boss3Erase_laser(int(&stage)[25][40])
{
	for (int y = 0; y < 25; y++)
	{
		for (int x = 0; x < 40; x++)
		{
			if (stage[y][x] == 8)
			{
				stage[y][x] = 0;
			}
		}
	}
}

void Boss3::Boss3Attack_long(std::vector<char>& buffer)
{

}

void Boss3::Boss3Attack_meteor(std::vector<char>& buffer)
{
	draw a;

	a.drawBitmap("Boss3_meteor.bmp", buffer, 800 - 80, meteor_y, SCREEN_WIDTH);

	if (meteor_y < 480 - 120)
		meteor_y += 5;
}

void Boss3::Boss3Attack_change()
{
	character::future = !character::future;
}

void Boss3::Boss3Location(int(&stage)[25][40])
{
	if (Boss3::hp > 3)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				int posX = m_x / 40 + i;
				int posY = m_y / 20 + j;
				stage[posY][posX] = 100;
			}
		}
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				int posX = m_x / 40 + i;
				int posY = m_y / 20 + j;
				stage[posY][posX] = 100;
			}
		}
	}
}

void Boss3::Boss3LocationErase(int(&stage)[25][40])
{
	if (Boss3::hp > 3)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				int posX = m_x / 40 + i;
				int posY = m_y / 20 + j;
				stage[posY][posX] = 0;
			}
		}
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				int posX = m_x / 40 + i;
				int posY = m_y / 20 + j;
				stage[posY][posX] = 0;
			}
		}
	}
}

void Boss3::Boss3TakeDamage(int(&stage)[25][40])
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

	if (coll == 100)
	{
		hp--;
		damaged = TRUE;
	}
}