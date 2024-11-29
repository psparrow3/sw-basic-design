#pragma once
#include "movingBlock.h"
#include "draw.h"
class drawMovingBlock : public movingBlock
{
public:
	
	void movingBlockDraw(std::vector<char>& buffer);
	void movingBlockErase(std::vector<char>& buffer);
};

