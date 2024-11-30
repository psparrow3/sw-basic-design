#include "Boss2.h"

int Boss2::m_x = 1440;
int Boss2::m_y = 340;
int Boss2::hp = 2;

void Boss2::Boss2Attack_change()
{
	character::future = !character::future;
}

void Boss2::Boss2Attack_laser(std::vector<char>& buffer, int x)
{
	draw a;
	
	for (int y = 0; y < 11; y++)
	{
		a.eraseBitmap("empty_boss_attack.bmp", buffer, x, y * 40, SCREEN_WIDTH);
		a.eraseBitmap("empty_boss_attack.bmp", buffer, x, y * 40 + 20, SCREEN_WIDTH);
	}

	for (int y = 0; y < 11; y++)
	{
		a.drawBitmap("laser_length.bmp", buffer, x, y * 40, SCREEN_WIDTH);

	}
}