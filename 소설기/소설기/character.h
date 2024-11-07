#pragma once
#include "Windows.h"
#include<iostream>
#include "draw.h"

#define SCREEN_WIDTH 1902
#define SCREEN_HEIGHT 500

#define blockSize 40
#define character_Height 60
#define character_Width 40


class character
{
public:
	int x;
	int y;
	character();
	void characterMove(std::vector<char>& buffer);
private:
	int playerHeart;
	bool facingRight;
	bool future;
	bool invincible;
	int invincibilityDuration;
	int attackRange;
	int attackCoolTime;
	
	
	
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