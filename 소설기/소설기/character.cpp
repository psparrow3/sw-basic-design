#include "character.h"
#include "conio.h"
#include "Windows.h"
#include "drawCharacter.h"
#include <iostream>
#include <dinput.h>
#include "draw.h"

int character::x = 0;
int character::y = 420;

int   character::progress = 1;                     // �����Ȳ
int character::gameOverCheck = 0;
bool character::future = 0;
bool character::isJumping = 0;
bool character::getSeed = 0;
bool character::getKey = 0;
int character::getSeedPiece = 0;

character::character()
{
	facingRight = 1;

	seedPlant = 0;
	characterHeart = 3;
	invincible = false;
	invincibilityDuration = 2000;
	nextStage = 0;

	attackCoolTime = 1000;      //���� ��Ÿ�� (�и���,1��)
	sTime = 3;

	getKey = 0;
	getSeed = 0;
	getSeedPiece = 0;
	attackRange = 1;            // ���� ��Ÿ�
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
	if (!invincible) {
		characterHeart -= 1;

		/*   if (playerHeart == 0) {
		gameOver();
		return;
	 }*/

		invincible = true;
		Sleep(invincibilityDuration);
		invincible = false;
	}
}

void character::switchMap()
{
	future = !future;
}

void character::attack(int stage[25][40])
{
	attacking = 1;
}

void character::characterMove(int stage[25][40], std::vector<char>& buffer)
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
		if (facingRight) {
			attack(stage);
		}
		else {

		}
	}

	if (sPress && sTime >= 3)
	{
		switchMap();
		sTime = 0;
	}

	if (jumping && !isJumping)
	{
		isJumping = 1;

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
				break;
			}
		}
	}

	if (GetAsyncKeyState(VK_UP) & 0x8000) {
		if (collision(stage, x, y + 20) == 10) {
			nextStage = 1;
			x = 0;
			y = 420;
			progress++;
		}
		if (collision(stage, x, y + 20) == 11 && getKey == 1) {
			nextStage = 1;
			x = 0;
			y = 420;
			getKey = 0;
			progress++;
		}
	}

	if (movingLeft) {
		facingRight = 0;
		x -= 20;
		int leftcoll = collision(stage, x, y);
		if (leftcoll == 2 || x < 0 || leftcoll == 3)
		{
			x = preX;
		}
	}

	if (movingRight) {
		facingRight = 1;
		x += 20;
		int rightcoll = collision(stage, x + 20, y);

		if (rightcoll == 2 || x >= 1540 || rightcoll == 3)
		{
			x = preX;
		}
	}

	if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
		if (collision(stage, x, y + 20) == 9) {
			if (getSeed == 1) {
				seedPlant = 1;
				getSeed = 0;
			}
		}

	}
	if (coll == 4) {
		getKey = 1;
	}

	if (coll == 5) {
		getSeed = 1;
	}

	if (coll == 2 || coll == 8 || coll == 3)
	{
		gameOver(coll, buffer);
	}

	sTime += 1;
}

void character::gravity(int stage[25][40], int newX, int newY)
{
	y += 10;

	int coll = collision(stage, x, y + 10);

	if (coll == 2 || coll == 10 || coll == 11 || coll == 9 || coll == 3) {
		y = newY;
		isJumping = 0;
		return;
	}
}

int character::collision(int stage[25][40], int newX, int newY)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int posX = newX / 40 + i;
			int posY = newY / 20 + j;

			if (stage[posY][posX] == 2)
			{
				return 2;			// �� �浹 ó��
			}
			else if (stage[posY][posX] == 3)
			{
				return 3;			// �̴� �� ó��
			}
			else if (stage[posY][posX] == 4)
			{

				return 4;           // ���� ŉ��
			}
			else if (stage[posY][posX] == 5)
			{
				return 5;           // ����
			}
			else if (stage[posY][posX] == 6)
			{
				return 6;           // ���� ����
			}
			else if (stage[posY][posX] == 7)
			{
				takeDamage();
				return 7;			// ���� ����
			}
			else if (stage[posY][posX] == 8)
			{
				return 8;            // ����
			}
			else if (stage[posY][posX] == 9)
			{
				return 9;               // ���� �ɴ� ��
			}
			else if (stage[posY][posX] == 10)
			{
				return 10;               // �� ����
			}
			else if (stage[posY][posX] == 11)
			{
				return 11;               // ��� �� ����
			}

			else if (stage[posY][posX] == 12)
			{
				return 12;               // ���� �κ�
			}

			else if (stage[posY][posX] == 13)
			{
				return 13;               // ���� �Ѿ�� �κ�
			}

		}
	}
	return 0;
}
