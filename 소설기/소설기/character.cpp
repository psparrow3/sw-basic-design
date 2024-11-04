#include "character.h"
#include "conio.h"
#include "Windows.h"
#include "drawCharacter.h"

character::character()
{
	x = 0, y = SCREEN_HEIGHT - blockSize, facingRight = 1, future = 1;
	playerHeart = 3;
	invincible = false;			//���� ����
	invincibilityDuration = 2000; // ���� �ð� (�и���,2��)
	
	attackCoolTime = 1000;		//���� ��Ÿ�� (�и���,1��)
	
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

	if (!invincible) {  // �̹� ���� ���°� �ƴ϶�� ������ ����
		playerHeart -= 1;

		// �÷��̾ ������� �� �Ҹ����� ���
	/*	if (playerHeart == 0) {
			gameOver();
			return;
		}*/

		invincible = true;          // ���� ���·� ��ȯ
		Sleep(invincibilityDuration); // 2�� ���� ���
		invincible = false;         // ���� ���� ����
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
				if (facingRight)			// �÷��̾ �������� �� ��
				{
					newX = x + player_Width + j;
				}
				else
				// �÷��̾ ������ �� ��
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
			// ������ ����,���� ������ ����ϱ�
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
					return 2;		//�ٴڿ� �浹
				}
				else if (screen[newY][newX] == 3)
					return 3;		//���� �浹
				else if (screen[newY][newX] == 4)
					return 4;		//õ�忡 �浹
				else if (screen[newX][newY] == 5)
				{
					getItem();				//������ ŉ��
					return 5;				//������ ����� �����ʿ�
				}
				else if (screen[newX][newY] == 6)
				{
					
					takeDamage();			//�Ϲ� ������ �¾��� ��
					return 6;				//���� ����� �����ʿ�
				}
				else if (screen[newX][newY] == 7)
				{
					//gameOver();				// ���⸦ �¾��� ��
					//return 7;				
				}
				else if (screen[newX][newY] == 8)
				{
					return 8;					//���� �ɴ� �κ�
				}
				else if (screen[newX][newY] == 10)
				{
												// ���� �κ�
					return 10;
				}
					
			}
		}
	}
		
}