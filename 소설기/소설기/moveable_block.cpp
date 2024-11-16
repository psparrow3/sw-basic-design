#include "moveable_block.h"

moveable_block::moveable_block() {		
	int x = 640;
	int y = 80;				// 스테이지 1 가장 왼쪽에 있는 블럭 위치

}

void moveable_block::blockMove(int stage[25][40],bool facingRight, std::vector<char>& buffer)
{
	int coll = collision(stage, x, y);
	
	if (coll == 2 || coll == 3) {
		gravity(stage, x, y);
	}
	if (coll == 1) {
		if (facingRight) {
			x += 20;
		}
		else {
			x -= 20;
		}
	}
}

int moveable_block::collision(int stage[25][40], int newX, int newY)
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int	posX = newX / 40 + j;
			int posY = newY / 20 + i;
			if (stage[posY][posY] == 1) {
				return 1;
			}
			else if (stage[posY][posY] == 2) {
				return 2;
			}
			else if (stage[posY][posY] == 3) {
				return 3;
			}	
		
			
		}
	}
}

void moveable_block::gravity(int stage[25][40],int newX,int newY)
{
	y += 20;
	int coll = collision(stage, newX, y);
	if (coll == 2 || coll == 3) {
		y = newY;
		return;
	}
}