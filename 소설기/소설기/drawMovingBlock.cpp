#include "drawMovingBlock.h"

drawMovingBlock::drawMovingBlock(int x, int y)
{
	m_x = x;
	m_y = y;
}

void drawMovingBlock::movingBlockDraw(std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("block.bmp", buffer, m_x, m_y, SCREEN_WIDTH);

}

void drawMovingBlock::movingBlockErase(std::vector<char>& buffer)
{
	draw a;
	a.eraseBitmap("empty_block.bmp", buffer, m_x, m_y, SCREEN_WIDTH);

}