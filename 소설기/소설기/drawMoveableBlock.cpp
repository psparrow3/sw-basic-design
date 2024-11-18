#include "drawMoveableBlock.h"

drawMoveableBlock::drawMoveableBlock()
{

}

void drawMoveableBlock::moveableBlockDraw(int x, int y, std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("moveable_block.bmp", buffer, x, y, SCREEN_WIDTH);
}

void drawMoveableBlock::moveableBlockErase(int x, int y, std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("empty_block.bmp", buffer, x, y, SCREEN_WIDTH);
}