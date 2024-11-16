#pragma once
#include "Windows.h"
#include<iostream>
#include "draw.h"
#include <thread>

#define SCREEN_WIDTH 1902
#define SCREEN_HEIGHT 501

#define blockSize 40
#define CHARACTER_HEIGHT 60
#define CHARACTER_WIDTH 40

class character 
{
public:
	static int x;
	static int y;
<<<<<<< HEAD
	static bool nextStage;
	static bool future;
	bool isJumping;
=======
	bool nextStage;
	static bool future; 
	static bool isJumping;
>>>>>>> main
	bool facingRight;
	static int seedPiece;
	bool seedPlant;
	static int progress;							// 진행상황
	static bool getSeed;
	static bool getKey;
	static int gameOverCheck;
	static int getSeedPiece;
	int characterHeart;
	bool attacking;
	character();
	void characterMove(int stage[25][40]);
	void gravity(int stage[25][40], int newX, int newY);
	int collision(int stage[25][40],int newX,int newY);
	void gameOver(int coll,std::vector<char>& buffer);
private:
	
	
	bool invincible;
	
	bool movingLeft;
	bool jumping;
	bool movingRight;
	int attackRange;
	int attackCoolTime;
	int invincibilityDuration;

	void attack(int stage[25][40]);
	void switchMap();
	void takeDamage();
	void getItem();
<<<<<<< HEAD
	void gameOver();
=======
	


>>>>>>> main
};