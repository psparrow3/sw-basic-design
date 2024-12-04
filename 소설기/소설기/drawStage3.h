#pragma once
#include "drawCharacter.h"
#include "drawMovingBlock.h"
#include "writeText.h"
#include "Boss3.h"
#include <cstdlib>
#include <ctime>


class drawStage3
{
public:
	
	void stage3BossDraw(std::vector<char>& buffer);
	void stage3FutureBossDraw(std::vector<char>& buffer);
	void stage3PastBossDraw(std::vector<char>& buffer);

	static int stage3_future_Boss[12][20];
	static int stage3_past_Boss[12][20];

	static int stage3_Future_Boss[25][40];
	static int stage3_Past_Boss[25][40];

};