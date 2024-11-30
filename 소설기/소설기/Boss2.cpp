#include "Boss2.h"

int Boss2::m_x = 1440;
int Boss2::m_y = 340;
int Boss2::hp = 2;

void Boss2::Boss2Attack_change()
{
	character::future = !character::future;
}

void Boss2::Boss2Attack_laser(std::vector<char>& buffer)
{
	draw a;
	
	a.drawBitmap("laser_length.bmp", buffer, 0, 0, SCREEN_WIDTH);
}