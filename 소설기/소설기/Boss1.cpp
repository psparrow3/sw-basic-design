#include "Boss1.h"

int Boss1::m_x = 20;
int Boss1::m_y = 40;
bool Boss1::flag = false;
int Boss1::time = 0;
std::vector<attack> Boss1::at;

Boss1::Boss1()
{

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

void Boss1::Boss1AttackMove(std::vector<char>& buffer)
{
    draw a;
    std::vector<int> er;
    er.clear();

    for (int i = 0; i < at.size(); i++)
    {
        if ((at[i].y + 20 > 470) || (at[i].x <= 0) || (at[i].x > 1600))
        {
            a.drawBitmap("empty_boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);

            er.push_back(i);
        }

        a.drawBitmap("empty_boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);

        drawStage1::stage1_Future_Boss[at[i].y / 20][at[i].x / 20] = 0;
        drawStage1::stage1_Future_Boss[at[i].y / 20][at[i].x / 20] = 0;

        at[i].x -= at[i].x_gap / 100;
        at[i].y -= at[i].y_gap / 100;

        drawStage1::stage1_Future_Boss[at[i].y / 20][at[i].x / 20] = 7;
        drawStage1::stage1_Future_Boss[at[i].y / 20][at[i].x / 20] = 7;

        a.drawBitmap("boss_attack.bmp", buffer, at[i].x, at[i].y, SCREEN_WIDTH);
    }

    for (auto o : er)
    {
        drawStage1::stage1_Future_Boss[at[o].y / 20][at[o].x / 20] = 0;
        drawStage1::stage1_Future_Boss[at[o].y / 20][at[o].x / 20] = 0;
        Boss1::at.erase(at.begin() + o);
    }
}