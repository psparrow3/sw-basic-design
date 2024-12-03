#include "drawMoveableBlock.h"


moveableBlock::moveableBlock()
{

}

void moveableBlock::blockMove(int(&stage)[25][40], int characterX, int characterY)
{
	// 왼쪽으로 밀리는 조건
	if (m_x + 80 >= characterX && m_x <= characterX && m_y == characterY + 20 && !character::facingRight) {
		int preX = m_x;
		m_x -= 20;

		int coll = collision(stage, m_x, m_y);
		if (coll == 2 || coll == 3) {

			m_x = preX;

		}
	}

	// 오른쪽으로 밀리는 조건
	if (m_x - 100 <= characterX && m_x >= characterX && m_y == characterY + 20 && character::facingRight) {
		int preX = m_x;
		m_x += 20;
		int coll = collision(stage, m_x, m_y);
		if (coll == 2 || coll == 3 || m_x > 1280) {
			m_x = preX;
		}
	}
}

int moveableBlock::collision(int (&stage)[25][40], int newX, int newY)

{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int	posX = m_x / 40 + i;
			int posY = m_y / 20 + j;
			if (stage[posY][posX] == 1) {
				return 1;
			}
			else if (stage[posY][posX] == 2) {
				return 2;
			}
			else if (stage[posY][posX] == 3) {
				return 3;
			}



		}
	}
	return 0;

}

void moveableBlock::gravity(int(&stage)[25][40], int newX, int newY)
{

	m_y += 20;
	int coll = collision(stage, newX, m_y + 20);
	if (coll == 2 || coll == 3 || coll == 8)
	{
		m_y = newY;

	}
	if (coll == 2 && m_y == 360)
	{

		m_x -= 20;
	}
	if (coll == 2 && m_y == 100)
	{
		
		m_x -= 20;
		m_y = 85;
	}

}

void moveableBlock::blockLocation(int(&stage)[25][40], int x, int y)
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int posX = x / 40 + i;
			int posY = y / 20 + j;
			stage[posY][posX] = 2;
		}
	}
	
}

void moveableBlock::blockLocationErase(int(&stage)[25][40], int x, int y)
{

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int posX = x / 40 + i;
			int posY = y / 20 + j;
			stage[posY][posX] = 0;
		}
	}

}