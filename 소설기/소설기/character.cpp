#include "character.h"
#include "conio.h"
#include "Windows.h"
#include "drawCharacter.h"
#include <iostream>
#include "draw.h"

int character::x = 40;
int character::y = 420;

character::character()
{
	facingRight = 1, future = 1;

	progress = 0;               // 진행상황
	playerHeart = 3;
	invincible = false;         //무적 상태
	invincibilityDuration = 2000; // 무적 시간 (밀리초,2초)
	nextStage = 0;
	isJumping = 0;            // 점프상태
	movingLeft = 0;
	movingRight = 0;
	jumping = 0;
	attackCoolTime = 1000;      //공격 쿨타임 (밀리초,1초)
  
	attackRange = character_Width / 2;
}
void gameOver()
{

}
void character::characterLocation(int stage[24][40], int newX, int newY)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			int posX = newX/40 + i;
			int posY = newY/20 + j;

		 

			if (posX >= 0 && posX < SCREEN_WIDTH && posY >= 0 && posY < SCREEN_HEIGHT)

			{
				stage[posY][posX] = 1;
				stage[posY][posX + 1] = 1;
			}
		}
	}
}

void character::eraseCharacterLocation(int stage[24][40], int preX, int preY)
{
	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 24; j++) {
			if (stage[j][i] == 1) {
				stage[j][i] = 0;
			}
		}
	}
}

void character::getItem()
{

}

void character::takeDamage()
{

	if (!invincible) {  // 이미 무적 상태가 아니라면 데미지 적용
		playerHeart -= 1;

		// 플레이어가 생명력을 다 소모했을 경우
	 /*   if (playerHeart == 0) {
		   gameOver();
		   return;
		}*/

		invincible = true;          // 무적 상태로 전환
		Sleep(invincibilityDuration); // 2초 동안 대기
		invincible = false;         // 무적 상태 해제
	}
}

void drawFutureMap()
{

}

void drawPastMap()
{

}

void character::switchMap()
{
	future = !future;
	/*if (future)
	   drawFutureMap();
	else
	   drawPastMap();*/
}

void character::attack()
{
	for (int i = 0; i < character_Height; i++)
	{

		for (int j = 0; j < attackRange; j++)
		{
			//if (player[j][i] == 1)
			//{
			//   int newX;
			//   int newY = y + i;
			//   if (facingRight)         // 플레이어가 오른쪽을 볼 때
			//   {
			//      newX = x + character_Width + j;
			//   }
			//   else
			//   // 플레이어가 왼쪽을 볼 때
			//   {
			//      newX = x - j;
			//   }
			//}

		}
	}

}

void character::characterMove(int stage[24][40], std::vector<char>& buffer)
{
	int preX = x;
	int preY = y;

	bool movingLeft = GetAsyncKeyState(VK_LEFT) & 0x8000;
	bool movingRight = GetAsyncKeyState(VK_RIGHT) & 0x8000;
	bool jumping = GetAsyncKeyState(VK_SPACE) & 0x8000;

	if (collision(stage, x, y) == 2 || collision(stage, x, y) == 9)
	{
		isJumping = 0;
	}

	if (GetAsyncKeyState('S') & 0x8000) 

	{
		switchMap();
	}

	if (GetAsyncKeyState('A') & 0x8000)
	{
		attack();
	}

	if (jumping && !isJumping)
	{
		isJumping = 1;

		for (int i = 0; i < 8; i++) {
			preY = y;


			y -= 20;
			if (collision(stage, x, y) == 4) {
				y = preY;
				break;
			}


		}
	}

	if (GetAsyncKeyState(VK_UP) & 0x8000) {

		if (collision(stage, x, y+20) == 9) {
			nextStage = 1;
			x = 40;
			y = 420;
		}
		progress++;

		// 문에서 들어가기;
	}
	if (movingLeft) {

		facingRight = 0;
		x -= 40;
		if (collision(stage, x, y) == 3)
		{
			x = preX;
		}
	}
	if (movingRight) { 
		facingRight = 1;
		x += 40;

		if (collision(stage, x, y) == 3)
		{
			x = preX;
		}
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000) {

		// 씨앗 심기
	}
}

void character::gravity(int stage[24][40], int newX, int newY)
{
	 y += 20;

	if (collision(stage, newX, y) == 2 || collision(stage, newX, y) == 9) {
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

			int posX = newX/40 + i;
			int posY = newY/20 + j;

			if (stage[posY][posX] == 2)
			{
				return 2;      //바닥에 충돌
			}
			else if (stage[posY][posX] == 3)
				return 3;      //벽에 충돌
			else if (stage[posY][posX] == 4)
				return 4;      //천장에 충돌
			else if (stage[posY][posX] == 5)
			{
				getItem();            //아이템 흭득
				return 5;            //아이템 지우기 구현필요
			}
			else if (stage[posY][posX] == 6)
			{

				takeDamage();         //일반 공격을 맞았을 때
				return 6;            //공격 지우기 구현필요
			}
			else if (stage[posY][posX] == 7)
			{
				//gameOver();            // 즉사기를 맞았을 때
				//return 7;            
			}
			else if (stage[posY][posX] == 8)
			{
				return 8;               //씨앗 심는 부분
			}
			else if (stage[posY][posX] == 9)
			{
				return 9;               // 문 들어가기
			}
			else if (stage[posY][posX] == 10)
			{
				// 도움말 
				return 10;
			}

		}
	}
	return 0;


}