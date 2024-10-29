#include "character.h"
#include "conio.h"
#include "Windows.h"

#define blockSize 50

character::character()
{
	x = 0, y = 0;
	
}

void character::characterMove(int key)
{

	if (key == 32)
	{
		
	
		
		y += blockSize + 10;
		if (collision() == 3) {
			
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
			if (collision() == 2) {
				int next_x = x - blockSize;
				if (next_x <0)
					break;
			}


			
			x -= blockSize;
			break;
		case 77:
			if (collision() == 2) {
				int next_x = x + blockSize;
				if (next_x > 1800)
					break;
			}

			x += blockSize;
			break;
		default:
			break;
		}
	}
}
void character::gravity() {
	
	while (1) {
		
		if (collision()==1)
			break;
		y--;
	}
}
int character::collision() {
	for (int i = 0; i < 1800; i++) {
		for (int j = 0; j < 500; j++) {
			if (player[j][i] == 1) {
				int newX = x + i;
				int newY = y + j;

				if (screen[newY][newX] == 1) {
					return 1;		//바닥에 충돌
				}
				else if (screen[newY][newX] == 2)
					return 2;		//벽에 충돌
				else if (screen[newY][newX] == 3)
					return 3;		//천장에 충돌
			}
		}
	}
		
}