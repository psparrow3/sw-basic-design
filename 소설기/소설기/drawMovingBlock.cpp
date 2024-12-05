#include "drawMovingBlock.h"

drawMovingBlock::drawMovingBlock(int x, int y, int height1, int height2)
{
	m_x = x;
	m_y = y;
	minHeight = height1;
	maxHeight = height2;
}

void drawMovingBlock::movingBlockDraw(std::vector<char>& buffer)
{
	draw a;
	
	if (character::future)
	{
		a.drawBitmap("block.bmp", buffer, m_x, m_y, SCREEN_WIDTH);
	}
	else
	{
		a.drawBitmap("past_block.bmp", buffer, m_x, m_y, SCREEN_WIDTH);
	}
}

void drawMovingBlock::movingBlockErase(std::vector<char>& buffer)
{
	draw a;
	a.eraseBitmap("empty_block.bmp", buffer, m_x, m_y, SCREEN_WIDTH);

}