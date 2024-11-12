#include <iostream>
#include <cstring>

#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"

#include "drawStage_prologue.h"
#include "drawStage1.h"



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

    std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

  

   
    drawStage_prologue dsp;
    dsp.stagePrologueDraw(buffer);

    drawStage1 ds1;
    ds1.stage1Draw(buffer);


       
    return 0;
}