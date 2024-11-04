#include "character.h"
#include "conio.h"
#include "Windows.h"
#include "drawCharacter.h"

character::character()
{
	x = 0, y = SCREEN_HEIGHT - blockSize, facingRight = 1, future = 1;
	playerHeart = 3;
	invincible = false;			//무적 상태
	invincibilityDuration = 2000; // 무적 시간 (밀리초,2초)
	
	attackCoolTime = 1000;		//공격 쿨타임 (밀리초,1초)
	
	attackRange = player_Width;
}
void gameOver() 
{
	
}

void character::getItem()
{

}

void character::takeDamage()
{

	if (!invincible) {  // 이미 무적 상태가 아니라면 데미지 적용
		playerHeart -= 1;

		// 플레이어가 생명력을 다 소모했을 경우
	/*	if (playerHeart == 0) {
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
	system("cls");

	future = !future;
	/*if (future)
		drawFutureMap();
	else
		drawPastMap();*/
}

void character::attack()
{

	for (int i = 0; i < player_Height; i++) 
	{

		for (int j = 0; j < attackRange; j++) 
		{
			if (player[j][i] == 1)
			{
				int newX;
				int newY = y + i;
				if (facingRight)			// 플레이어가 오른쪽을 볼 때
				{
					newX = x + player_Width + j;
				}
				else
				// 플레이어가 왼쪽을 볼 때
				{
					newX = x - j;
				}
			}

		}
	}
	
}

void character::characterMove(int key,HDC hdc)
{
	
	gravity();
	if (key == 's') {
		switchMap();
	}

	if (key == 'a')
	{
		
		attack();
	}

	if (key == 32)
	{
		y += blockSize + 10;

		if (collision() == 4)
		{
			
		}
	}
	
	if (key == 224)
	{
		key = _kbhit();

		switch (key)
		{
		case 72:
			// 문에서 들어가기,씨앗 아이템 사용하기
			break;
		case 75:
			facingRight = !facingRight;
			if (collision() == 3)
			{
				int next_x = x - blockSize / 10;

				if (next_x < 0)
				{
					break;
				}
			}

			x -= blockSize / 10;

			break;
		case 77:
			facingRight = 1;
			if (collision() == 3)
			{
				int next_x = x + blockSize / 10;

				if (next_x > 1900)
				{
					break;
				}
			}

			x += blockSize / 10;

			break;
		default:
			break;
		}
	}
	
}

void character::gravity()
{
	
	while (1)
	{
		if (collision() == 2 || collision()==10)
		{
			break;
		}

		y -= 10;
	}
}

int character::collision()
{
	for (int i = 0; i < player_Width; i++)
	{
		for (int j = 0; j < player_Height; j++)
		{
			if (player[j][i] == 1)
			{
				int newX = x + i;
				int newY = y + j;

				if (screen[newY][newX] == 2)
				{
					return 2;		//바닥에 충돌
				}
				else if (screen[newY][newX] == 3)
					return 3;		//벽에 충돌
				else if (screen[newY][newX] == 4)
					return 4;		//천장에 충돌
				else if (screen[newX][newY] == 5)
				{
					getItem();				//아이템 흭득
					return 5;				//아이템 지우기 구현필요
				}
				else if (screen[newX][newY] == 6)
				{
					
					takeDamage();			//일반 공격을 맞았을 때
					return 6;				//공격 지우기 구현필요
				}
				else if (screen[newX][newY] == 7)
				{
					//gameOver();				// 즉사기를 맞았을 때
					//return 7;				
				}
				else if (screen[newX][newY] == 8)
				{
					return 8;					//씨앗 심는 부분
				}
				else if (screen[newX][newY] == 10)
				{
												// 도움말 부분
					return 10;
				}
					
			}
		}
	}
		
}