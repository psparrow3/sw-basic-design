#include "drawStage_prologue.h"

//draw a;
//a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
//a.SetConsoleFontSize(1);
//SetConsoleTitle(L"�Ҿ���� ����");
//
//// Ŀ�� �����
//HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
//CONSOLE_CURSOR_INFO curCursorInfo;
//GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
//curCursorInfo.bVisible = 0;
//SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
//
//// ��׶���(��) ���� ����
//std::vector<char> buffer(SCREEN_WIDTH* SCREEN_HEIGHT, ' ');
//
//
//// �� �׸��� - ���� �����Ǿ� �����Ƿ� �ʱ�ȭ �� �ٽ� �׸��� ����
//int x, y;
//for (x = 0; x < SCREEN_WIDTH - BLOCK_SIZE * 10; x += BLOCK_SIZE * 2) {
//    a.drawBitmap("block.bmp", buffer, x, 440, SCREEN_WIDTH);
//}
//
//for (y = 0; y < 12; y++) {
//    a.drawBitmap("block.bmp", buffer, 80 * 19, y * 40, SCREEN_WIDTH);
//}