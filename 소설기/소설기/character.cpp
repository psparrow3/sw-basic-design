#include "character.h"
#include "conio.h"
#include "Windows.h"
#include "drawCharacter.h"
#include <iostream>
#include <dinput.h>
#include "draw.h"
#include "drawMoveableBlock.h"


int character::x = 0;
int character::y = 420;

int character::progress = 0;                     // 진행상황
int character::gameOverCheck = 0;
bool character::future = 0;
bool character::isJumping = 0;
bool character::getSeed = 0;
bool character::getKey = 0;
int character::getSeedPiece = 0;
bool character::pressingButton = 0; 
bool character::seedPlant = 0;
bool character::nextStage = 0;
int character::characterHeart = 3;
int character::clearStage[25][40] = { 0 };
bool character::land = 1;

character::character()
{
	facingRight = 1;
	invincible = false;
	invincibilityDuration = 2000;

	attackCoolTime = 1000;      //공격 쿨타임 (밀리초,1초)
	sTime = 3;

	nextStage = 0;

	attackRange = 1;            // 공격 사거리
}

void character::gameOver(int coll, std::vector<char>& buffer)
{
	gameOverCheck = 1;
}

void character::getItem()
{

}

void character::takeDamage()
{
	characterHeart--;

	if (characterHeart == 0)
	{
		gameOverCheck = 1;
	}
}

void character::switchMap()
{
	future = !future;
}

void character::attack(int(&stage)[25][40])
{
	attacking = 1;
}

void character::characterMove(int (&stage)[25][40], std::vector<char>& buffer)
{
	drawCharacter ac;
	int preX = x;
	int preY = y;

	bool movingLeft = GetAsyncKeyState(VK_LEFT) & 0x8000;
	bool movingRight = GetAsyncKeyState(VK_RIGHT) & 0x8000;
	bool jumping = GetAsyncKeyState(VK_SPACE) & 0x8000;
	bool sPress = GetAsyncKeyState('S') & 0x8000;
	bool aPress = GetAsyncKeyState('A') & 0x8000;

	int coll = collision(stage, x, y);

	if (coll == 2 || coll == 10 || coll == 11 || coll == 3)
	{
		isJumping = 0;
	}

	if (aPress)
	{
		attack(stage);
	}

	if (sPress && sTime >= 3)
	{
		switchMap();
		sTime = 0;
	}

	if (!land)
	{
		if (!collision(stage, x, y + 10))
		{
			y += 10;
		}
	}

	if (jumping && !isJumping)
	{
		isJumping = 1;
		land = 0;
				
		for (int i = 0; i < 3; i++) {
			preY = y;

			y -= 20;
			int jumpcoll;
			if (facingRight) {
				jumpcoll = collision(stage, x + 20, y);
			}
			else {
				jumpcoll = collision(stage, x, y);
			}
			if (jumpcoll == 2 || y < 0 || jumpcoll == 3) {
				y = preY;
			}
		}
	}

	if (GetAsyncKeyState(VK_UP) & 0x8000) {
		if (collision(stage, x, y + 20) == 10) {
			nextStage = 1;

			progress++;
		}
		if (collision(stage, x, y + 20) == 11 && getKey == 1) {
			nextStage = 1;

			getKey = 0;
			progress++;
		}
	}

	if (movingLeft) {
		facingRight = 0;
		x -= 20;
		int leftcoll = collision(stage, x, y);

		if (leftcoll == 2 || x < 0 || leftcoll == 3 || leftcoll == 14)
		{
			x = preX;
		}
	}

	if (movingRight) {
		facingRight = 1;
		x += 20;
		int rightcoll = collision(stage, x + 20, y);

		if (rightcoll == 2 || x >= 1540 || rightcoll == 3 || rightcoll == 14)
		{
			x = preX;
		}
	}

	if (GetAsyncKeyState(VK_DOWN) & 0x8000 && collision(stage, x, y + 20) == 9 && getSeed)
	{
		seedPlant = 1;
		getSeed = 0;
	}

	if (coll == 4) {
		getKey = 1;
	}

	if (coll == 5) {
		getSeed = 1;
	}
		
	if (coll == 2 || coll == 8 || coll == 3 || GetAsyncKeyState('R') & 0x8000 || coll == 14)
	{
		gameOver(coll, buffer);
	}
		
	sTime += 1;
}

void character::gravity(int (&stage)[25][40], int newX, int newY)
{
	int coll= collision(stage, x, y + 20);
	
	if (coll == 2 || coll == 10 || coll == 11 || coll == 9 || coll == 3) {

		y = newY;
		isJumping = 0;
		land = 1;
		return;
	}
	else
	{
		land = 0;
	}
}

int character::collision(int (&stage)[25][40], int newX, int newY)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int posX = newX / 40 + i;
			int posY = newY / 20 + j;

			if (stage[posY][posX] == 2)
			{
				return 2;			// 블럭 충돌 처리
			}
			else if (stage[posY][posX] == 3)
			{
				return 3;			// 미는 블럭 처리
			}
			else if (stage[posY][posX] == 4)
			{
				return 4;           // 열쇠 흭득
			}
			else if (stage[posY][posX] == 5)
			{
				return 5;           // 씨앗
			}
			else if (stage[posY][posX] == 6)
			{
				return 6;           // 씨앗 조각
			}
			else if (stage[posY][posX] == 7)
			{
				return 7;			// 피해 입음
			}
			else if (stage[posY][posX] == 8)
			{
				return 8;            // 즉사기
			}
			else if (stage[posY][posX] == 9)
			{
				return 9;               // 씨앗 심는 곳
			}
			else if (stage[posY][posX] == 10)
			{
				return 10;               // 문 들어가기
			}
			else if (stage[posY][posX] == 11)
			{
				return 11;               // 잠긴 문 들어가기
			}
			else if (stage[posY][posX] == 12)
			{
				return 12;               // 도움말 부분
			}
			else if (stage[posY][posX] == 13)
			{
				return 13;               // 보스 넘어갈때 부분
			}
			else if (stage[posY][posX] == 14)
			{
				return 14;               // 버튼 충돌
			}
		}
	}
	return 0;
}
