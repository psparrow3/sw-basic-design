#pragma once
#include "movingBlock.h"
#include "draw.h"
class drawMovingBlock : public movingBlock
{
public:
	drawMovingBlock();
	drawMovingBlock(int x, int y,int Height1,int Height2);
	void movingBlockDraw(std::vector<char>& buffer);
	void movingBlockErase(std::vector<char>& buffer);

	void BlockMoving(int(&stage)[25][40], std::vector<char>& buffer);
};

