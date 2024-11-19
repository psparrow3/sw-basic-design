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

int   character::progress = 0;                     // �����Ȳ
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
bool character::attacking = 0;
bool character::facingRight = 1;
bool character::land = 1;
character::character()
{
	
	
	invincible = false;
	invincibilityDuration = 2000;

	attackCoolTime = 10;      // ���� ��Ÿ��
	sTime = 3;

	nextStage = 0;

	attackRange = 2;           // ���� ��Ÿ�
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
	characterHeart -= 1;
	if (characterHeart == 0)
		gameOverCheck = 1;
}

void character::switchMap()
{
	future = !future;
}

void character::attack(int(&stage)[25][40])
{
	attacking = 1;
	for (int i = 0; i < attackRange; i++) {
		int atX;
		int atY = y;

		if (facingRight)
		{
			atX = x + i;
		}
		else 
		{
			atX = x - i;
		}
		if (collision(stage, atX, atY) == 98) 
		{
			/*Boss1::Boss1Heart -= 1;*/
			progress++;
			break;
		}
	}
}



void character::characterMove(int (&stage)[25][40], std::vector<char>& buffer)
{

	int preX = x;
	int preY = y;

	bool movingLeft = GetAsyncKeyState(VK_LEFT) & 0x8000;
	bool movingRight = GetAsyncKeyState(VK_RIGHT) & 0x8000;
	bool jumping = GetAsyncKeyState(VK_SPACE) & 0x8000;
	bool sPress = GetAsyncKeyState('S') & 0x8000;
	bool aPress = GetAsyncKeyState('A') & 0x8000;

	int coll = collision(stage, x, y);

	// �浹 üũ�� ���� ���� ����


	// ����
	if (aPress && attackCoolTime>=10) {
		attack(stage);
		attackCoolTime = 0;
	}

	// �� ��ȯ
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

	// �̵� ó��
	if (movingLeft) {
		facingRight = false;
		preX = x;
		x -= 20;
		int leftColl = collision(stage, x, y);
		if (leftColl == 2 || x < 0 || leftColl == 3 || leftColl==14) {
			x = preX; // �浹 �߻� �� ��ġ ����
		}
	}
	else if (movingRight) {
		facingRight = true;
		preX = x;
		x += 20;
		int rightColl = collision(stage, x + 20, y);
		if (rightColl == 2 || x > 1600 || rightColl == 3 || rightColl==14) { // x > 800: ������ ��� ����
			x = preX; // �浹 �߻� �� ��ġ ����
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
	if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
		if (collision(stage, x, y + 20) == 9 && getSeed) {
			seedPlant = 1;
			getSeed = 0;
		}
	} 
	if (coll == 7) {
		takeDamage();
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
	attackCoolTime += 1;
}
void character::gravity(int(&stage)[25][40], int newX, int newY)
{
	int coll = collision(stage, x, y + 20);

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
			else if (stage[posY][posX] == 14)
			{
				return 14;               // ��ư �浹
			}
			else if (stage[posY][posX] == 98)
			{
				return 98;				// 1�������� ����
			}
		
		}
	}
	return 0;
}
