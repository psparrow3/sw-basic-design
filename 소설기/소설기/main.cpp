#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"

int stage1_pre[12][20] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,1,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
	{1,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0},
	{0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1},
	{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};

int main() {
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
			if (stage1_pre[y][x]) {
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
			}
		}
	}

	// 도어 그리기
	a.drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 10, SCREEN_WIDTH);

	// 맵 출력
	a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	// 캐릭터 이동 루프
	character ac;

	
	
	while (1) {
		ac.characterMove(buffer);
		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
	}

	return 0;
}
