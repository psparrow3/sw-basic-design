#include "Boss1.h"

Boss1::Boss1(int x, int y)
{
	m_x = x * 80, m_y = y;
}

void Boss1::Boss1Move(int x)
{
	m_x = x * 80;
}

void Boss1::Boss1Attack(std::vector<char>& buffer)
{
	draw a;
	float direction;
	int x_gap = m_x - character::x;
	int y_gap = m_y - character::y;

	a.drawBitmap("boss_attack.bmp", buffer, m_x, m_y, SCREEN_WIDTH);
	a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	int x, y, pre_x, pre_y;
	
	x = m_x, y = m_y;

	while (y < 480)
	{
		pre_x = x, pre_y = y;

		x -= x_gap / 25;
		y -= y_gap / 25;

		a.drawBitmap("empty_boss_attack.bmp", buffer, pre_x, pre_y, SCREEN_WIDTH);
		a.drawBitmap("boss_attack.bmp", buffer, x, y, SCREEN_WIDTH);
		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

		Sleep(10);
	}
}