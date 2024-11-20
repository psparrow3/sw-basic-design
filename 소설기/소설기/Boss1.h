#pragma once
#include "character.h"
#include "draw.h"
#include "drawStage1.h"
#include <set>

typedef struct attack
{
	int x, y;
	float x_gap, y_gap;
}attack;

class Boss1
{
public:
	static int m_x, m_y;
	Boss1();
	void Boss1Attack();
	void Boss1AttackMove(std::vector<char>& buffer, int (&stage)[25][40]);
	static void Boss1reset();
	static std::vector<attack> at;
	static bool flag;
	static int time;
};