#include "drawStage1.h"
#include "drawStage.h"

drawStage1::drawStage1()
{
	draw a;
	a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	a.SetConsoleFontSize(1);
	SetConsoleTitle(L"잃어버린 낙원");

	// 콘솔 커서 숨기기
	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO curCursorInfo;
	GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
	curCursorInfo.bVisible = 0;
	SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

	// 화면 버퍼 생성
	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

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
	a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	// 캐릭터 이동 루프
	character ac;



	while (1) {
		//ac.characterMove(stage1_pre, buffer);
		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
	}
}