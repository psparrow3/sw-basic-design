#pragma once
#include "draw.h"
#include "moveableBlock.h"
class drawMoveableBlock : public moveableBlock
{
public:
	drawMoveableBlock();
	void moveableBlockDraw(int x, int y, std::vector<char>& buffer);
	void moveableBlockErase(int x, int y, std::vector<char>& buffer);
};

