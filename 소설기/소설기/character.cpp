#include "character.h"
#include "conio.h"
#include "Windows.h"
#include "drawCharacter.h"
#include <iostream>
#include <dinput.h>
#include "draw.h"
#include "drawMoveableBlock.h"

int character::x = 0;
int character::y = 410;

int character::progress = 0;                     // 진행상황
int character::gameOverCheck = 0;
bool character::future = 0;
bool character::pre_future = 1;
bool character::isJumping = 0;
bool character::getSeed = 0;
bool character::getKey = 0;
int character::getSeedPiece = 0;
bool character::pressingButton = 0;
bool character::seedPlant = 0;
bool character::nextStage = 0;
int character::characterHeart = 3;
bool character::attacking = 10;
bool character::facingRight = 1;
bool character::land = 1;
int character::clearStage[25][40] = { 0 };
int character::leftTime = 0;
int character::rightTime = 0;
bool character::isLeverPull = 0;

character::character()
{
    invincible = false;
    invincibilityDuration = 2000;

    attackCoolTime = 10;      // 공격 쿨타임
    sTime = 3;

    nextStage = 0;

    attackRange = 2;           // 공격 사거리
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

	int atX;
	int atY = y;



	if (facingRight)
	{
		atX = x + 80;
	}
	else
	{
		atX = x - 40;
	}
	int coll = collision(stage, atX, atY);
	if (coll == 98)
	{
		nextStage = 1;
		

	}
	if (coll == 15)
	{
		isLeverPull = 1;
	}
	if (coll == 2 || atX <= 0 || coll == 3 || coll == 14 || coll==8 || atX>=1600)
	{
		attacking = 0;
	}
}


void character::characterMove(int(&stage)[25][40], std::vector<char>& buffer)
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

	// 충돌 체크로 점프 상태 해제

	// 공격
	if (aPress && attackCoolTime >=3) {
		attack(stage);

		attackCoolTime = 0;

	}

	// 맵 전환
	if (sPress && sTime >= 3) {
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

	if (movingLeft && leftTime >=1) {
		facingRight = 0;
		x -= 20;
		int leftcoll = collision(stage, x, y);

		if (leftcoll == 2 || x < 0 || leftcoll == 3 || leftcoll == 14 || leftcoll == 15)
		{
			x = preX;
		}
		leftTime = 0;
	}

	if (movingRight && rightTime >= 1) {
		facingRight = 1;
		x += 20;
		int rightcoll = collision(stage, x + 20, y);

		if (rightcoll == 2 || x >= 1540 || rightcoll == 3 || rightcoll == 14 || rightcoll == 15)
		{
			x = preX;
		}
		rightTime = 0;
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

	if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
		if (collision(stage, x, y + 20) == 9 && getSeed) {
			seedPlant = 1;
			getSeed = 0;
		}
	}
	
	if (coll == 4) {
		getKey = 1;
	}

	if (coll == 5) {
		getSeed = 1;
	}

	if (coll == 2 || collision(stage, x, y + 20) == 8 || coll == 3 || GetAsyncKeyState('R') & 0x8000 || coll == 14 || coll == 15)
	{
		gameOver(coll, buffer);
	}

	sTime += 1;
	attackCoolTime += 1;
	leftTime += 1;
	rightTime += 1;

}
void character::gravity(int(&stage)[25][40], int newX, int newY)
{
	int coll = collision(stage, x, y + 20);

	if (coll == 2 || coll == 10 || coll == 11 || coll == 9 || coll == 3 || coll==12) {

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

int character::collision(int(&stage)[25][40], int newX, int newY)
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
			else if (stage[posY][posX] == 15)
			{
				return 15;				// 레버 상호작용
			}
			else if (stage[posY][posX] == 98)
			{
				return 98;				// 1스테이지 보스
			}
		}
    }
   return 0;
}
