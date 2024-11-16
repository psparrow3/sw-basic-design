#pragma once
#include "character.h"
#include "drawStage1.h"
class moveable_block
{
public:
	int x, y;
	moveable_block();
	int collision(int stage[25][40], int newX, int newY);
	void gravity(int stage[25][40], int newX, int newY);
	void blockMove(int stage[25][40], bool facingRight,std::vector<char>& buffer);
};

