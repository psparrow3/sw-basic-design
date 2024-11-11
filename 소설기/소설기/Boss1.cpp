#include "Boss1.h"

Boss1::Boss1(int x, int y)
{
	m_x = x * 80, m_y = y;
}

void Boss1::Boss1Move(int x)
{
	m_x = x * 80;
}