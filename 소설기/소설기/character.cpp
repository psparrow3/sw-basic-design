#include "character.h"
#include "conio.h"
#include "Windows.h"

character::character()
{
	x = 0, y = 0, facingRight = 1, future = 1;
	playerHeart = 3;
	invincible = false;			//무적 상태
	invincibilityDuration = 2000; // 무적 시간 (밀리초,2초)
	lastHitTime = 0;
	attackCoolTime = 1000;		//공격 쿨타임 (밀리초,1초)
	lastAttackTime = 0;
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
	ULONGLONG currentTime = GetTickCount64();
	if (!invincible || currentTime - lastHitTime > invincibilityDuration)
	{
		lastHitTime = currentTime;
		invincible = true;

		// 데미지 처리
		playerHeart -= 1;
		/*if (playerHeart == 0)
			gameOver();*/
		// 무적 상태 설정 후 일정 시간 후 해제
		invincible = true;
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
	ULONGLONG currenTime = GetTickCount64();
	if (currenTime - lastAttackTime < attackCoolTime) 
	{
		// 공격 쿨타임 동안이라 공격 X
		return;
	}
	lastAttackTime = currenTime;
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

void character::characterMove(int key)
{
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
		if (collision() == 2)
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

					
			}
		}
	}
		
}