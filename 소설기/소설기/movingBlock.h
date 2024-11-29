#pragma once
#include "drawCharacter.h"
class movingBlock
{

public:
	movingBlock();
	int m_x, m_y;
	bool up = 0;
	void blockMove();

	void collision();
	void blockLocation(int(&stage)[25][40]);
	void blockLocationErase(int(&stage)[25][40]);
	
	



};

