#include "Boss1.h"

int Boss1::m_x = 20;
int Boss1::m_y = 40;
bool Boss1::flag = false;
int Boss1::time = 0;
std::vector<attack> Boss1::at;
std::vector <attack> Boss1::dr;
int Boss1::seed_num = 0;

Boss1::Boss1()
{

}

void Boss1::Boss1reset(std::vector<char>& buffer)
{
	draw a;

	m_x = 20;
	m_y = 40;
	flag = false;
	time = 0;
	
	for (auto i : at)
	{
		a.eraseBitmap("empty_boss_attack.bmp", buffer, i.x, i.y, SCREEN_WIDTH);
	}

	for (auto i : dr)
	{
		a.eraseBitmap("empty_boss_attack.bmp", buffer, i.x, 460, SCREEN_WIDTH);
	}

	at.clear();
	dr.clear();
	seed_num = 0;

	drawStage1::stage1_Future_Boss[9][16] = 0;
	drawStage1::stage1_Future_Boss[9][17] = 0;
	drawStage1::stage1_Future_Boss[9][18] = 0;
	drawStage1::stage1_Future_Boss[9][19] = 0;
	drawStage1::stage1_Future_Boss[12][21] = 0;
	drawStage1::stage1_Future_Boss[12][24] = 0;
	drawStage1::stage1_Future_Boss[12][25] = 0;
	drawStage1::stage1_Future_Boss[12][26] = 0;
	drawStage1::stage1_Future_Boss[12][27] = 0;
	drawStage1::stage1_Future_Boss[15][16] = 0;
	drawStage1::stage1_Future_Boss[15][17] = 0;
	drawStage1::stage1_Future_Boss[15][18] = 0;
	drawStage1::stage1_Future_Boss[15][19] = 0;
	drawStage1::stage1_Future_Boss[18][21] = 0;
	drawStage1::stage1_Future_Boss[18][23] = 0;
	drawStage1::stage1_Future_Boss[18][24] = 0;
	drawStage1::stage1_Future_Boss[18][25] = 0;
	drawStage1::stage1_Future_Boss[18][26] = 0;
	drawStage1::stage1_Future_Boss[21][16] = 0;
	drawStage1::stage1_Future_Boss[21][17] = 0;
	drawStage1::stage1_Future_Boss[21][18] = 0;
	drawStage1::stage1_Future_Boss[21][19] = 0;

	a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	a.eraseBitmap("empty_character.bmp", buffer, character::x, character::y, SCREEN_WIDTH);
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

			if (seed_num < 10)
			{
				if (at[i].y + 20 > 470)
				{
					dr.push_back(at[i]);
					seed_num++;
				}
			}

			continue;
		}

		if (at[i].x < cx + 80 && at[i].x + 40 > cx && at[i].y < cy + 60 && at[i].y + 20 > cy)
		{
			er.insert(i);       // 충돌한 공격 객체 제거
			character::takeDamage(); // 캐릭터 피해 처리
			continue;
		}

		a.eraseBitmap("empty_boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);
		
		at[i].x -= at[i].x_gap / 100;
		at[i].y -= at[i].y_gap / 100;

		a.drawBitmap("boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);
	}

	for (auto o : er)
	{
		a.eraseBitmap("empty_boss_attack.bmp", buffer, at[o].x, at[o].y, SCREEN_WIDTH);

		at.erase(at.begin() + o);
	}

	for (auto i : dr)
	{
		a.drawBitmap("seed_piece.bmp", buffer, i.x, 460, SCREEN_WIDTH);
	}
}