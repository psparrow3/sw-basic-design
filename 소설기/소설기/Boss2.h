#pragma once
#include "drawStage2.h"
#include "character.h"
class Boss2
{
public:
	static int m_x, m_y, hp;
	Boss2();
	static void Boss2Attack_laser(std::vector<char>& buffer, int x);
	static void Boss2Attack_change();
	static void Boss2Location(int (&stage)[25][40]);
	static void Boss2LocationErase(int (&stage)[25][40]);
	static void Boss2TakeDamage(int(&stage)[25][40]);
};