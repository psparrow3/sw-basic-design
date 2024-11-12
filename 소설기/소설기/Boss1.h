#pragma once
#include "character.h"
#include "draw.h"

class Boss1
{
public:
	int m_x, m_y;
	Boss1(int x, int y);
	void Boss1Move(int x);
	void Boss1Attack(std::vector<char>& buffer);
};