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
	static bool nextStage;
	static bool future;
	bool isJumping;
	bool facingRight;
	bool getKey;
	static int progress;							// 진행상황
	bool getSeed;
	static bool gameOverCheck;
	int getSeedPiece;
	character();
	void characterMove(int stage[25][40],std::vector<char>& buffer);
	void gravity(int stage[25][40], int newX, int newY);
	int collision(int stage[25][40],int newX,int newY);
	
private:
	int playerHeart;
	
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
	void gameOver(std::vector<char>& buffer);
};