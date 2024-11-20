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

	static bool nextStage;
	static bool future;
	static bool isJumping;

	static int seedPiece;
	static bool seedPlant;							// 씨앗을 심었는지
	static int progress;							// 진행상황

	static bool getSeed;
	static bool getKey;
	static int gameOverCheck;
	static int getSeedPiece;
	static int characterHeart;
	static bool attacking;
	static bool pressingButton;
	static bool facingRight;
	static bool land;
	static int leftTime;
	static int rightTime;
	static bool isLeverPull;

	character();

	void characterMove(int(&stage)[25][40], std::vector<char>& buffer);
	void gravity(int(&stage)[25][40], int newX, int newY);
	int collision(int(&stage)[25][40], int newX, int newY);

	void gameOver(int coll, std::vector<char>& buffer);
	static int clearStage[25][40];
	static void takeDamage();

private:
	int sTime;

	bool invincible;
	bool movingLeft;
	bool jumping;
	bool movingRight;
	int attackRange;
	int attackCoolTime;
	int invincibilityDuration;

	void attack(int(&stage)[25][40]);
	void switchMap();
	void getItem();
};