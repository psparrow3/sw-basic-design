#pragma once
#include "drawCharacter.h"

#include "writeText.h"

class drawStage2
{
public:
	void stage2Draw(std::vector<char>& buffer);
	void drawStage2Future(std::vector<char>& buffer);
	void drawStage2Past(std::vector<char>& buffer);

	void stage2BossDraw(std::vector<char>& buffer);
	void stage2FutureBossDraw(std::vector<char>& buffer);
	void stage2PastBossDraw(std::vector<char>& buffer);
	

	static int stage2_future[12][20];
	static int stage2_past[12][20];
	static int stage2_Future[25][40];
	static int stage2_Past[25][40];


	static int stage2_Future_Boss[25][40];
	static int stage2_Past_Boss[25][40];

};

