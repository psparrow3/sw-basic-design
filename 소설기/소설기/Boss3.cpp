#include "Boss3.h"

int Boss3::m_x = 0;
int Boss3::m_y = 0;
int Boss3::meteor_y = 0;

void Boss3::Boss3Attack_laser(std::vector<char>& buffer)
{
	draw a;

	a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);

	for (int x = 0; x < 20; x++)
	{
		if (!(x >= m_x && x <= m_x + 2))
		{
			for (int y = 0; y < 12; y++)
			{
				a.drawBitmap("laser_length.bmp", buffer, x * 80, y * 40, SCREEN_WIDTH);
			}
		}
	}

	for (int x = 0; x < 20; x++)
	{
		for (int y = 3; y < 12; y++)
		{
			int cy = character::y / 40;
			
			if (!(y > cy - 2 && y < cy + 3))
			{
				a.drawBitmap("laser_width.bmp", buffer, x * 80, y * 40, SCREEN_WIDTH);
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

	a.drawBitmap("Boss3_meteor.bmp", buffer, 800 - 120, meteor_y, SCREEN_WIDTH);

	if (meteor_y < 480 - 120)
		meteor_y += 5;
}

void Boss3::Boss3Attack_change()
{
	character::future = !character::future;
}

void Boss3::Boss3Location(int(&stage)[25][40])
{

}

void Boss3::Boss3LocationErase(int(&stage)[25][40])
{

}

void Boss3::Boss3TakeDamage(int(&stage)[25][40])
{

}