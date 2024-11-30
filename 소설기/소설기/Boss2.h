#pragma once
#include "drawCharacter.h"
#include "drawStage2.h"

class Boss2
{
public:
	static int m_x, m_y, hp;
	Boss2();
	static void Boss2Attack_laser(std::vector<char>& buffer, int x);
	static void Boss2Attack_change();
};