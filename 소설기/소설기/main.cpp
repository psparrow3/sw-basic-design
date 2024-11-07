#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"

int stage1_pre[12][20]
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


    // 콘솔 창 설정
    a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    a.SetConsoleFontSize(1);
    SetConsoleTitle(L"잃어버린 낙원");


    HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curCursorInfo;
    GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
    curCursorInfo.bVisible = 0; // 커서 숨기기
    SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

    // 화면 버퍼 생성 및 초기화
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

    // 처음에 맵을 그려놓고, 이를 한 번에 표시
    int x, y;
    for (x = 0; x < SCREEN_WIDTH - BLOCK_SIZE * 10; x += BLOCK_SIZE * 2) {
        a.drawBitmap("block.bmp", buffer, x, SCREEN_HEIGHT - BLOCK_SIZE, SCREEN_WIDTH);
    }
    for (y = SCREEN_HEIGHT - BLOCK_SIZE; y > 0; y -= BLOCK_SIZE) {
        a.drawBitmap("block.bmp", buffer, x, y, SCREEN_WIDTH);
    }
    a.drawBitmap("tutorial_building.bmp", buffer, x - 383, SCREEN_HEIGHT - BLOCK_SIZE * 10, SCREEN_WIDTH);

    // 맵을 한 번에 출력 (루프 시작 전)
   

    

	drawCharacter ac;

	
	
	a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    while (1) {
		int preX = ac.x;
		int preY = ac.y;
		ac.gravity();
		
		
	
		if (_kbhit()) {

			ac.characterMove(buffer);
		}
		

		ac.characterEraese(preX, preY, buffer);
		ac.characterDraw(ac.x, ac.y, buffer);

        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    }
  
   

	//for (y = 0; y < 12; y++)
	//{
	//	for (x = 0; x < 20; x++)
	//	{
	//		if (stage1_pre[y][x])
	//		{
	//			a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
	//		}
	//	}
	//}

	//a.drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 10, SCREEN_WIDTH);

	//// 버퍼 내용을 출력합니다.
	//a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	
	return 0;

}
