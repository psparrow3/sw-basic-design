#include "drawStage1.h"
#include "drawStage.h"
#include "draw.h"

drawStage1::drawStage1()
{
	
	 
}
void drawStage1::stage1Draw(std::vector<char> buffer) {
	draw a;
	

	// stage1_pre 배열 기반으로 맵을 그림
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch (stage1_pre[y][x]) {
			case 1:
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 2:
				a.drawBitmap("cold_lava.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 3:
				a.drawBitmap("movable_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("laser1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			}
		}
	}

	// 도어 그리기
	a.drawBitmap("broken_door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);

	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

	// 맵 출력
	

	
	



<<<<<<< HEAD
	
=======
	while (1) {
		//ac.characterMove(stage1_pre, buffer);
		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
	}
>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
}