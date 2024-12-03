#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "conio.h"
#include "startScreen.h"
#include "drawStage_prologue.h"
#include "drawStage1.h"
#include "drawStage2.h"
#include "drawStage3.h"
class gameStart
{
	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO curCursorInfo;
public:
	gameStart();
	void startGame();
};

