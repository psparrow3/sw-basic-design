#include "moveableBlock.h"

moveableBlock::moveableBlock() {		
	int x = 0;
	int y = 0;				// x,y √ ±‚»≠

}


void moveableBlock::blockMove(int stage[25][40],int characterX)
{
	
	int coll = collision(stage, x, y);
	
	
	if (x + 20 == characterX) {
		int preX = x;
		x -= 20;
		int coll = collision(stage, x, y);
		if (coll == 3 || coll == 2) {
			x = preX;
		}
	}
	if (x - 20 == characterX) {
		int preX = x;
		x += 20;
		int coll = collision(stage, x+20, y);
		if (coll == 3 || coll == 2) {
			x = preX;
		}
	}
}

int moveableBlock::collision(int stage[25][40], int newX, int newY)
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int	posX = newX / 40 + i;
			int posY = newY / 20 + j;
			if (stage[posY][posX] == 1) {
				return 1;
			}
			else if (stage[posY][posX] == 2) {
				return 2;
			}
			else if (stage[posY][posX] == 3) {
				return 3;
			}	
		
			
		}
	}
}

void moveableBlock::gravity(int stage[25][40],int newX,int newY)
{
	y += 20;
	int coll = collision(stage, newX, y);
	if (coll == 2 || coll == 3) {
		y = newY;
		return;
	}
}

void moveableBlock::blockLocation(int stage[25][40], int x, int y)
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int posX = x / 40 + i;
			int posY = y / 20 + j;
			stage[posY][posX] = 3;
		}
		
	}
}

void moveableBlock::blockLocationErase(int stage[25][40], int x, int y)
{
	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 25; j++) {
			if (stage[i][j] == 3) {
				stage[i][j] = 0;
			}
		}

	}
}