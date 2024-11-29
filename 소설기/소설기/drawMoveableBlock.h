#pragma once
#include "draw.h"
#include "moveableBlock.h"
#include "character.h"

class drawMoveableBlock : public moveableBlock
{
public:
	drawMoveableBlock(int x,int y);

	void moveableBlockDraw(int posX, int posY, std::vector<char>& buffer);
	void moveableBlockErase(int posX, int posY, std::vector<char>& buffer);
};

