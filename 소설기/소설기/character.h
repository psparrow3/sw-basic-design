#pragma once
class character
{
	int x;
	int y;
	int player[500][1800];
	character();
	void characterMove(int key);
	int collision();
	void gravity();
};