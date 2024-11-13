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
#include "gameStart.h"

int main() {

    gameStart gs;
  
    gs.startGame();
        
    return 0;
}