#include "drawStage_prologue.h"

//draw a;
//a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
//a.SetConsoleFontSize(1);
//SetConsoleTitle(L"잃어버린 낙원");
//
//// 커서 숨기기
//HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
//CONSOLE_CURSOR_INFO curCursorInfo;
//GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
//curCursorInfo.bVisible = 0;
//SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
//
//// 백그라운드(맵) 버퍼 생성
//std::vector<char> buffer(SCREEN_WIDTH* SCREEN_HEIGHT, ' ');
//
//
//// 맵 그리기 - 맵은 고정되어 있으므로 초기화 후 다시 그리지 않음
//int x, y;
//for (x = 0; x < SCREEN_WIDTH - BLOCK_SIZE * 10; x += BLOCK_SIZE * 2) {
//    a.drawBitmap("block.bmp", buffer, x, 440, SCREEN_WIDTH);
//}
//
//for (y = 0; y < 12; y++) {
//    a.drawBitmap("block.bmp", buffer, 80 * 19, y * 40, SCREEN_WIDTH);
//}