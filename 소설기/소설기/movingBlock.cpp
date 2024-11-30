#include "movingBlock.h"



movingBlock::movingBlock()
{
	
}

void movingBlock::blockMove(int (&stage)[25][40])
{
	
	if (!up) {
		
		m_y += 20;
		
		if (m_y+20 == drawCharacter::y && m_x - 40 <= drawCharacter::x && m_x + 60 >= drawCharacter::x) {
			drawCharacter::y += 20;
		}
		
		if (m_y >= minHeight) 
			up = 1;
		
			
	}
	
	if (up){
		
		m_y -= 20;
		
		
		if (m_y == drawCharacter::y + 40 && m_x - 40 <= drawCharacter::x && m_x + 60 >= drawCharacter::x) {
			drawCharacter::y -= 20;
		}



		if (m_y <= maxHeight)
			up = 0;
	}

	
}

void movingBlock::collision(int(&stage)[25][40]) 
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int posX = m_x / 40 + i;
			int posY = m_y / 20 + j;
			
		}
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
