#include "drawMoveableBlock.h"



drawMoveableBlock::drawMoveableBlock(int x, int y)
{
	m_x = x, m_y = y;
}

void drawMoveableBlock::moveableBlockDraw(int posX, int posY, std::vector<char>& buffer)
{
	draw a;
	
	a.drawBitmap("moveable_block.bmp", buffer, posX, posY, SCREEN_WIDTH);
}

void drawMoveableBlock::moveableBlockErase(int posX, int posY, std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("empty_block.bmp", buffer, posX, posY, SCREEN_WIDTH);
}