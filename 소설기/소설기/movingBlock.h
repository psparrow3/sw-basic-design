#pragma once

class movingBlock
{

public:
	movingBlock();
	int m_x, m_y;
	bool up = 0;
	void blockMove();

	void blockLocation(int(&stage)[25][40]);
	void blockLocationErase(int(&stage)[25][40]);
	
	



};

