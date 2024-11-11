#pragma once
#include "Windows.h"
#include<iostream>
#include "draw.h"

#define SCREEN_WIDTH 1902
#define SCREEN_HEIGHT 501

#define blockSize 40
#define character_Height 60
#define character_Width 40

class character
{
public:
	static int x;
	static int y;
	bool nextStage;
	bool future; 
	bool isJumping;
	bool facingRight;
	
	character();
	void characterMove(int stage[24][40],std::vector<char>& buffer);
	
	void gravity(int stage[24][40], int newX, int newY);
	int collision(int stage[24][40],int newX,int newY);
	void characterLocation(int stage[24][40], int newX, int newY);
	void eraseCharacterLocation(int stage[24][40], int preX, int preY);
	

private:
	int playerHeart;
	int progress;

	
	bool invincible;
	
	bool movingLeft;
	bool jumping;
	bool movingRight;
	int attackRange;
	int attackCoolTime;
	int invincibilityDuration;


	void attack();
	void switchMap();
	void takeDamage();
	void getItem();
	void drawFutureMap();
	void drawPastMap();
	void gameOver();


};