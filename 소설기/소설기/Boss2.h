#pragma once
#include "drawCharacter.h"

class Boss2
{
public:
	static int m_x, m_y;
	Boss2();
	void Boss2Attack_laser(std::vector<char>& buffer);
	void Boss2Attack_change();
};