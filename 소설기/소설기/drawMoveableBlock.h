#pragma once
#include "draw.h"
#include "moveableBlock.h"
class drawMoveableBlock : public moveableBlock
{
public:

	drawMoveableBlock();
	void moveableBlockDraw(int posX, int posY, std::vector<char>& buffer);
	void moveableBlockErase(int posX, int posY, std::vector<char>& buffer);
};

