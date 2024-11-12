#pragma once
#include <iostream>
#include <cstring>

#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "draw.h"
#include "drawCharacter.h"
#include "conio.h"
#include "startScreen.h"
#include "drawStage_prologue.h"
#include "drawStage1.h"

class gameStart
{
public:
	gameStart();
	void startGame();
};

