#pragma once
#include "drawCharacter.h"
#include "Boss3.h"

class drawStage3
{
	void stage3FutureBossDraw(std::vector<char>& buffer);
	void stage3PastBossDraw(std::vector<char>& buffer);

public:
	drawStage3();
	static void stage3BossDraw(std::vector<char>& buffer);
	
	static int stage3_Future_Boss[25][40];
	static int stage3_Past_Boss[25][40];
};