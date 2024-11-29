#include "movingBlock.h"



movingBlock::movingBlock()
{
	m_x = 1280;
	m_y = 200;
}

void movingBlock::blockMove()
{
	if (!up) {
		m_y += 20;
		if (m_y >= 280)
			up = 1;
	}
	
	if (up){
		m_y -= 20;
		if (m_y <= 120)
			up = 0;
	}
		
	
}



void movingBlock::blockLocation(int(&stage)[25][40])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int posX = m_x / 40 + i;
			int posY = m_y / 20 + j;
			stage[posY][posX] = 2;
		}
	}
}

void movingBlock::blockLocationErase(int(&stage)[25][40])
{

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int posX = m_x / 40 + i;
			int posY = m_y / 20 + j;
			stage[posY][posX] = 0;
		}
	}

}
