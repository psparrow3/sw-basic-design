#pragma once

#include "drawCharacter.h"
#include "Boss1.h"
#include "drawMoveableBlock.h"
#include "writeText.h"
#include "conio.h"
class drawStage1
{
public:
    drawStage1();
    void stage1Draw(std::vector<char>& buffer);
    void drawStage1Future(std::vector<char>& buffer);
	void drawStage1Past(std::vector<char>& buffer);
	void stage1BossDraw(std::vector<char>& buffer);
	void stage1FutureBossDraw(std::vector<char>& buffer);
	void stage1PastBossDraw(std::vector<char>& buffer);

    static int stage1_future[12][20];
	static int stage1_past[12][20];
	static int stage1_future_Boss[12][20];
	static int stage1_past_Boss[12][20];
	static int stage1_Future[25][40];
	static int stage1_Past[25][40];
	static int stage1_Future_Boss[25][40];
	static int stage1_Past_Boss[25][40];
};