#include "Boss1.h"

int Boss1::m_x = 18;
int Boss1::m_y = 40;
bool Boss1::flag = false;
int Boss1::time = 0;
std::vector<attack> Boss1::at;

Boss1::Boss1()
{
	
}

void Boss1::Boss1Move(int x)
{
	m_x = x * 80;
}

void Boss1::Boss1Attack()
{
	float x_gap = (m_x * 20) + 40 - character::x + 20;
	float y_gap = m_y + 80 - character::y + 30;

	attack b;

	b.x = m_x + 40;
	b.y = m_y + 80;
	b.x_gap = x_gap;
	b.y_gap = y_gap;

	at.push_back(b);
}

void Boss1::Boss1AttackMove(std::vector<char>& buffer)
{
	draw a;

	for (int i = 0; i < at.size(); i++)
	{
		a.drawBitmap("empty_boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);

		at[i].x -= at[i].x_gap / 100;
		at[i].y -= at[i].y_gap / 100;

		a.drawBitmap("boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);

		if ((at[i].y + 20 > 470) || (at[i].x < 0) || (at[i].x > 1600))
		{
			a.drawBitmap("empty_boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);
			at.erase(at.begin() + i);
		}
	}
}