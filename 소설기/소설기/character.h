#pragma once
class character
{
	int x;
	int y;
	int player[500][1900];
	int screen[500][1900];
	character();
	void characterMove(int key);
	int collision();
	void gravity();
};