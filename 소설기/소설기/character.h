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
	int x;
	int y;
	bool nextStage;
<<<<<<< HEAD
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
	
=======

	bool facingRight;

	character();
	void characterMove(int stage[24][40], std::vector<char>& buffer);

	void gravity(int stage[24][40], int newX, int newY);
	int collision(int stage[24][40], int newX, int newY);
	void characterLocation(int stage[24][40], int newX, int newY);
	void eraseCharacterLocation(int stage[24][40], int preX, int preY);


private:
	int playerHeart;

>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
	bool future;
	bool invincible;
	
	int invincibilityDuration;
	int attackRange;
	int attackCoolTime;
<<<<<<< HEAD
	
	bool jumping;
	bool movingLeft;
	bool movingRight;
	
	
=======
	bool isJumping;
	bool jumping;
	bool movingLeft;
	bool movingRight;


>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
	void attack();
	void switchMap();
	void takeDamage();
	void getItem();
	void drawFutureMap();
	void drawPastMap();
	void gameOver();


};