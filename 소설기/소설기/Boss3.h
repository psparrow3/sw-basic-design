#pragma once
#include "drawStage3.h"
#include "character.h"

class Boss3
{
public:
	static int m_x, m_y;
	static int meteor_y;

	static void Boss3Attack_laser(std::vector<char>& buffer);
	static void Boss3Attack_long(std::vector<char>& buffer);
	static void Boss3Attack_meteor(std::vector<char>& buffer);
	static void Boss3Attack_change();
	static void Boss3Location(int(&stage)[25][40]);
	static void Boss3LocationErase(int(&stage)[25][40]);
	static void Boss3TakeDamage(int(&stage)[25][40]);
};