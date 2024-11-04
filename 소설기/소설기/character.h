#pragma once
#include "Windows.h"

#define blockSize 40
#define player_Height 10
#define player_Width 4
class character
{

	int x;
	int y;
	int playerHeart;
	bool facingRight;
	bool future;
	bool invincible;
	int invincibilityDuration;
	
	int attackRange;
	int attackCoolTime;
	int player[500][1900];
	int screen[500][1900];
	character();
	void characterMove(int key);
	int collision();
	void gravity();
	void attack();
	void switchMap();
	void takeDamage();
	void getItem();
	void drawFutureMap();
	void drawPastMap();
	void gameOver();
};