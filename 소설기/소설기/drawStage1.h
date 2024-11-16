#pragma once

#include "draw.h"
#include "drawCharacter.h"
#include "draw.h"
#include "Boss1.h"

using namespace std;

class drawStage1 
{
public:
	drawStage1();
	static vector<char> buffer_st1_past;
	static vector<char> buffer_st1_future;
	void stage1Draw(vector<char>& buffer);
	static vector<char> drawStage1Future();
	static vector<char> drawStage1Past();
	void stage1BossDraw(vector<char>& buffer);
	void stage1FutureBossDraw(vector<char>& buffer);
	void stage1PastBossDraw(vector<char>& buffer);

	static int st1_future[12][20];
	static int st1_past[12][20];
	static int stage1_Future[25][40];
	static int stage1_Past[25][40];
	static int stage1_Future_Boss[25][40];
	static int stage1_Past_Boss[25][40];
};

