#pragma once
#include "drawCharacter.h"
class movingBlock
{

public:
	movingBlock();
	int m_x, m_y,maxHeight,minHeight;
	bool up = 0;
	void blockMove(int (&stage)[25][40]);

	void collision(int(&stage)[25][40]);
	void blockLocation(int(&stage)[25][40]);
	void blockLocationErase(int(&stage)[25][40]);
	
	



};

