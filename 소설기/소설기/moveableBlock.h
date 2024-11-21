#pragma once
#include "character.h"
#include "drawStage1.h"
class moveableBlock
{
public:
	int m_x, m_y;
	moveableBlock();
	int collision(int stage[25][40], int newX, int newY);
	void gravity(int stage[25][40], int newX, int newY);

	void blockMove(int(&stage)[25][40], int characterX, int characterY);
	void blockLocation(int(&stage)[25][40], int x,int y);
	void blockLocationErase(int(&stage)[25][40], int x, int y);

};

