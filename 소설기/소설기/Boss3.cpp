#include "Boss3.h"

int Boss3::m_x = 0;
int Boss3::m_y = 0;
int Boss3::meteor_y = 0;

void Boss3::Boss3Attack_laser(std::vector<char>& buffer, int x)
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

void Boss3::Boss3Attack_long(std::vector<char>& buffer)
{

}

void Boss3::Boss3Attack_meteor(std::vector<char>& buffer)
{
	draw a;

	a.drawBitmap("Boss3_meteor.bmp", buffer, 770, meteor_y, SCREEN_WIDTH);

	if (meteor_y < 280)
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