#include "character.h"
#include "conio.h"
#include "Windows.h"

character::character()
{
	x = 0, y = 0, facingRight = 1, future = 1;
}

void character::switchMap()
{
	system("cls");

	future = !future;
	if (future)
		drawFutureMap();
	else
		drawPastMap();
}

void character::attack()
{
	for (int i = 0; i < character_Height; i++) 
	{

		for (int j = 0; j < character_Width; j++) 
		{
			if (player[j][i] == 1)
			{
				int newX = x + i;
				int newY = y + j;
				if (facingRight)
				{
				
				}
				else
				{

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

		if (collision() == 3)
		{
			
		}
	}

	if (key == 224)
	{
		key = _kbhit();

		switch (key)
		{
		case 72:
			// 문에서 들어가기
			break;
		case 75:
			facingRight = !facingRight;
			if (collision() == 2)
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
			if (collision() == 2)
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
		if (collision() == 1)
		{
			break;
		}

		y -= 10;
	}
}

int character::collision()
{
	for (int i = 0; i < character_Width; i++)
	{
		for (int j = 0; j < character_Height; j++)
		{
			if (player[j][i] == 1)
			{
				int newX = x + i;
				int newY = y + j;

				if (screen[newY][newX] == 2)
				{
					return 1;		//바닥에 충돌
				}
				else if (screen[newY][newX] == 3)
					return 2;		//벽에 충돌
				else if (screen[newY][newX] == 4)
					return 3;		//천장에 충돌
				else if (screen[newX][newY] == 5)
				{
									//아이템 흭득
				}
					
			}
		}
	}
		
}