#pragma once
#include "drawCharacter.h"

class Boss2
{
public:
	static int m_x, m_y, hp;
	Boss2();
	static void Boss2Attack_laser(std::vector<char>& buffer);
	static void Boss2Attack_change();
};