#pragma once
#include "Windows.h"


#define SCREEN_WIDTH 1902
#define SCREEN_HEIGHT 500

#define blockSize 40
#define player_Height 60
#define player_Width 40


class character
{
public:
	int x;
	int y;
	character();

private:
	int playerHeart;
	bool facingRight;
	bool future;
	bool invincible;
	int invincibilityDuration;
	int attackRange;
	int attackCoolTime;
	int player[500][1900];
	int screen[500][1900];

	
	void characterMove(int key,HDC hdc);
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