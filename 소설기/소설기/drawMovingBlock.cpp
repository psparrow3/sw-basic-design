#include "drawMovingBlock.h"

void drawMovingBlock::movingBlockDraw(std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("block.bmp", buffer, m_x, m_y, SCREEN_WIDTH);

}

void drawMovingBlock::movingBlockErase(std::vector<char>& buffer)
{
	draw a;
	a.eraseBitmap("block.bmp", buffer, m_x, m_y, SCREEN_WIDTH);

}