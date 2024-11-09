#include <iostream>

#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"
#include "drawStage1.h"


int stage_prologue[24][40]
{
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,9,2,2,2,2,2,2,2}
};
int main() {
    draw a;
    a.SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    a.SetConsoleFontSize(1);
    SetConsoleTitle(L"잃어버린 낙원");

    // 커서 숨기기
    HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curCursorInfo;
    GetConsoleCursorInfo(hConsoleOut, &curCursorInfo);
    curCursorInfo.bVisible = 0;
    SetConsoleCursorInfo(hConsoleOut, &curCursorInfo);

<<<<<<< HEAD
    // 더블 버퍼링을 위한 두 개의 버퍼 생성
=======
    // 백그라운드(맵) 버퍼 생성
>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
    std::vector<char> backBuffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

<<<<<<< HEAD
=======

>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
    // 맵 그리기 - 맵은 고정되어 있으므로 초기화 후 다시 그리지 않음
    int x, y;
    for (x = 0; x < SCREEN_WIDTH - BLOCK_SIZE * 10; x += BLOCK_SIZE * 2) {
        a.drawBitmap("block.bmp", buffer, x, SCREEN_HEIGHT - BLOCK_SIZE, SCREEN_WIDTH);
    }
    for (y = SCREEN_HEIGHT - BLOCK_SIZE; y > 0; y -= BLOCK_SIZE) {
        a.drawBitmap("block.bmp", buffer, x, y, SCREEN_WIDTH);
    }
    a.drawBitmap("tutorial_building.bmp", buffer, x - 383, SCREEN_HEIGHT - BLOCK_SIZE * 10, SCREEN_WIDTH);

    drawCharacter ac;

    while (1) {
        if (ac.nextStage)
            break;
        Sleep(50);
        // backBuffer를 초기화하고 buffer의 내용을 복사
        backBuffer = buffer;

<<<<<<< HEAD
        // 캐릭터 이전 위치 지우기
        ac.characterErase(ac.x, ac.y, backBuffer);
=======
    while (1) {
>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2

        // 캐릭터 위치 업데이트
        if (ac.collision(stage_prologue, ac.x, ac.y) != 2 || ac.collision(stage_prologue, ac.x, ac.y) != 9) {
            ac.gravity(stage_prologue, ac.x, ac.y);
        }

<<<<<<< HEAD
        // 캐릭터 이동
        ac.characterMove(stage_prologue, backBuffer);

        if (ac.facingRight)
            ac.characterRightDraw(ac.x, ac.y, backBuffer);
        else
            ac.characterLeftDraw(ac.x, ac.y, backBuffer);
    
      

        // 변경된 backBuffer를 화면에 출력
        a.flushBuffer(backBuffer, SCREEN_WIDTH, SCREEN_HEIGHT);
=======
        if (ac.nextStage)
            break;

        int preX = ac.x;
        int preY = ac.y;
        ac.characterErase(ac.x, ac.y, buffer);
        // 캐릭터 위치 업데이트
        if (ac.collision(stage_prologue, ac.x, ac.y) != 2 || ac.collision(stage_prologue, ac.x, ac.y) != 9) {
            ac.gravity(stage_prologue, ac.x, ac.y);
        }


        // 캐릭터 이동
        ac.characterMove(stage_prologue, buffer);
        if (ac.facingRight)
            ac.characterRightDraw(ac.x, ac.y, buffer);

        else
            ac.characterLeftDraw(ac.x, ac.y, buffer);

        // 변경된 버퍼 내용만 화면에 출력
        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2

      
    }
<<<<<<< HEAD
   
=======

>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
    return 0;
}