#include "Boss1.h"

int Boss1::m_x = 20;
int Boss1::m_y = 40;
bool Boss1::flag = false;
int Boss1::time = 0;
std::vector<attack> Boss1::at;

Boss1::Boss1()
{

}

void Boss1::Boss1reset()
{
	m_x = 20;
	m_y = 40;
	flag = false;
	time = 0;
	at.clear();
}

void Boss1::Boss1Attack()
{
	float direction;
	int x_gap = (m_x * 20) + 40 - (character::x + 30);
	int y_gap = m_y + 80 - (character::y + 30);

	attack b;

	b.x = (m_x * 20) + 40;
	b.y = m_y + 80;
	b.x_gap = x_gap;
	b.y_gap = y_gap;

	at.push_back(b);
}

void Boss1::Boss1AttackMove(std::vector<char>& buffer, int(&stage)[25][40])
{
	draw a;
	std::set<int> er;
	er.clear();
	int cx = character::x, cy = character::y;

	for (int i = 0; i < at.size(); i++)
	{
		if ((at[i].y + 20 > 470) || (at[i].x <= 0) || (at[i].x + 40 > 1600) || at[i].y <= 0)
		{
			er.insert(i);
			continue;
		}

		if (at[i].x < cx + 80 && at[i].x + 40 > cx && at[i].y < cy + 60 && at[i].y + 20 > cy)
		{
			er.insert(i);       // 충돌한 공격 객체 제거
			character::takeDamage(); // 캐릭터 피해 처리
			continue;
		}

		a.drawBitmap("empty_boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);

		stage[at[i].y / 20][at[i].x / 40] = 0;

		at[i].x -= at[i].x_gap / 100;
		at[i].y -= at[i].y_gap / 100;

		stage[at[i].y / 20][at[i].x / 40] = 7;

		a.drawBitmap("boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);
	}

	for (auto o : er)
	{
		a.drawBitmap("empty_boss_attack.bmp", buffer, at[o].x, at[o].y, SCREEN_WIDTH);

		stage[at[o].y / 20][at[o].x / 40] = 0;

		at.erase(at.begin() + o);
	}
}