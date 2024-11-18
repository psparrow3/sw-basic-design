#pragma once

#include "draw.h"
#include "drawStage.h"
#include "drawCharacter.h"

class drawStage1 
{
public:

    drawStage1();
    void stage1Draw( std::vector<char>& buffer);
    void drawStage1Future(std::vector<char>& buffer);
	void drawStage1Past(std::vector<char>& buffer);
	void stage1BossDraw(std::vector<char>& buffer);
	void stage1FutureBossDraw(std::vector<char>& buffer);
	void stage1PastBossDraw(std::vector<char>& buffer);
    int stage1_future[12][20] =                     // 그리는 미래맵
    {
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
       {4,0,0,0,0,0,0,0,3,0,3,0,0,0,0,0,0,0,1,1},
       {1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
       {0,1,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,5,0},
       {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
       {0,0,0,1,1,0,0,0,0,0,0,0,6,0,3,0,0,1,0,0},
       {0,0,1,0,1,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0},
       {0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
    };
	


    int stage1_past[12][20] =                     // 그리는 과거맵
    {
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
       {4,0,2,0,0,0,0,0,3,0,3,0,0,0,0,0,0,0,1,1},
       {1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0,8,1,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
       {0,0,0,0,1,1,0,1,1,0,0,1,1,0,0,0,0,0,0,0},
       {1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
       {0,0,0,0,1,0,0,0,0,0,0,0,6,0,3,0,0,1,0,0},
       {0,0,0,0,1,0,9,0,0,0,0,0,0,1,1,1,1,0,0,0},
       {0,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,5},
       {0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
    };


	static int stage1_Future[25][40];
	static int stage1_Past[25][40];
	static int stage1_Future_Boss[25][40];
	static int stage1_Past_Boss[25][40];
};
