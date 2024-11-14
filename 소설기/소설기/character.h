#pragma once
#include "Windows.h"
#include<iostream>
#include "draw.h"
#include <thread>
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
	bool getKey;
	bool seedPlant;
	static int progress;							// 진행상황
	bool getSeed;
	static bool gameOverCheck;
	int getSeedPiece;
	int characterHeart;
	character();
	void characterMove(int stage[25][40],std::vector<char>& buffer);
	
	void gravity(int stage[25][40], int newX, int newY);
	int collision(int stage[25][40],int newX,int newY);
	
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
	void gameOver(std::vector<char>& buffer);


};