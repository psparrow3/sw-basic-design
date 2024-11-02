#pragma once

#define blockSize 40
#define character_Height 10
#define character_Width 4
class character
{
	int x;
	int y;
	bool facingRight;
	bool future;
	
	int player[500][1900];
	int screen[500][1900];
	character();
	void characterMove(int key);
	int collision();
	void gravity();
	void attack();
	void switchMap();
};