#pragma once
#include "Windows.h"
#include <iostream>
#include "draw.h"
#include "Boss1.h"
#include <dinput.h>
#include "conio.h"
#include "drawMoveableBlock.h"

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
  
	void characterMove(int (&stage)[25][40], std::vector<char>& buffer);
	void gravity(int (&stage)[25][40], int newX, int newY);
	int collision(int (&stage)[25][40],int newX,int newY);
	static void takeDamage();
	void gameOver(int coll,std::vector<char>& buffer);
	static int clearStage[25][40];

private:
	int sTime;
	int notDamage;
	
	bool movingLeft;
	bool jumping;
	bool movingRight;
	int attackRange;
	int attackCoolTime;
	

	void attack(int(&stage)[25][40]);
	void switchMap();

	void getItem();
};