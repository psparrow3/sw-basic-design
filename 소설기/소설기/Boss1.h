#pragma once
#include "character.h"
#include "draw.h"

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
	void Boss1Move(int x);
	void Boss1Attack();
	void Boss1AttackMove(std::vector<char>& buffer);
	std::vector<attack> at;
	static bool flag;
};