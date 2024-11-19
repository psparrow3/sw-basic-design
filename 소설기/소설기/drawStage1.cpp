#include "drawStage1.h"
#include "drawStage.h"
#include "draw.h"
#include "Boss1.h"
#include "drawMoveableBlock.h"
#include "writeText.h"

int drawStage1::stage1_future[12][20] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
	{4,0,0,0,0,0,0,0,3,0,3,0,0,0,0,0,0,0,1,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,1,0,0,1,1,0,0,0,1,0,1,1,0,0,0,0,0,5,0},
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
	{0,0,0,1,1,0,0,0,0,0,0,0,6,0,3,0,0,1,0,0},
	{0,0,1,0,1,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0},
	{0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}
};

int drawStage1::stage1_past[12][20] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{4,0,2,0,0,0,0,0,3,0,3,0,0,0,0,0,0,0,1,1},
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0,8,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,1,1,1,0,1,1,0,0,1,1,0,0,0,0,0,0,0},
	{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
	{0,0,0,0,1,0,0,0,0,0,0,0,6,0,3,0,0,1,0,0},
	{0,0,0,0,1,0,9,0,0,0,0,0,0,1,1,1,1,0,0,0},
	{0,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,5},
	{0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1}
};

int drawStage1::stage1_Future[25][40] =
{

   {0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,4,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,14,14,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,2,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0},
   {0,0,0,0,2,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};
int drawStage1::stage1_Past[25][40] =
{
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,0,0},
   {0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,11,11},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,8,8,8,8,8,8,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,0,0,5,0,2,2,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,9,9,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {2,2,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {2,2,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,14,14},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};
int drawStage1::stage1_Future_Boss[25][40] =
{
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};
int drawStage1::stage1_Past_Boss[25][40] =
{
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};

drawStage1::drawStage1()
{

}

void drawStage1::stage1Draw(std::vector<char>& buffer)
{
	draw a;
	drawCharacter ac;
	drawMoveableBlock mb1(16, 4), mb2(20, 4);
	writeText wt;
	
	mb1.m_x = 540, mb1.m_y = 80;
	mb2.m_x = 700, mb2.m_y = 80;
	int stage[25][40];
	int seedGet = 0;
	int keyGet = 0;
	int textX = 1610;

	while (1) {

		if (ac.nextStage || ac.gameOverCheck)
		{
			if (ac.nextStage) {
				a.drawBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);
				a.drawBitmap("enter_door.bmp", buffer,1485, 25, SCREEN_WIDTH);
				a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
				ac.nextStage = 0;
				Sleep(1000);
			}

			character::characterHeart = 3;			
			a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			a.drawBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);
			
			ac.x = 0;
			ac.y = 420;
		
			ac.gameOverCheck = 0;
			break;
		}
		wt.drawText(L"������ �ִ� ������ : ��", 1610, 600, 20, RGB(128, 128, 128), L"����ü");
		
		int preX = ac.x;
		int preY = ac.y;

		ac.characterErase(preX, preY, buffer);
		
		int charactercoll = ac.collision(stage, ac.x, ac.y);
		
		mb1.moveableBlockErase(mb1.m_x, mb1.m_y, buffer);
		mb2.moveableBlockErase(mb2.m_x, mb2.m_y, buffer);
		mb1.blockLocationErase(stage, mb1.m_x, mb1.m_y);
		mb2.blockLocationErase(stage, mb2.m_x, mb2.m_y);

		int block1coll = mb1.collision(stage, mb1.m_x, mb1.m_y);
		int block2coll = mb2.collision(stage, mb2.m_x, mb2.m_y);

		if (block1coll != 2 || block1coll != 3)
		{
			mb1.gravity(stage, mb1.m_x, mb1.m_y);
		}
		if (block2coll != 2 || block2coll != 3)
		{
			mb2.gravity(stage, mb2.m_x, mb2.m_y);
		}

		mb1.blockMove(stage, ac.x);
		mb2.blockMove(stage, ac.x);

		mb1.moveableBlockDraw(mb1.m_x, mb1.m_y, buffer);
		mb2.moveableBlockDraw(mb2.m_x, mb2.m_y, buffer);
		mb1.blockLocation(stage, mb1.m_x, mb1.m_y);
		mb2.blockLocation(stage, mb2.m_x, mb2.m_y);
		
		if (charactercoll != 2 || charactercoll != 10 || charactercoll != 11 || charactercoll != 3 || charactercoll!=14) {
			ac.gravity(stage, ac.x, ac.y);
		}
	
		ac.characterMove(stage, buffer);

		if (ac.getSeed && seedGet == 0) {
			seedGet = 1;
			stage1_Past[6][34] = 0;
			stage1_past[3][17] = 0;
			textX += 50;
			a.drawBitmap("empty_block.bmp", buffer, 2 * 17 * BLOCK_SIZE, 3 * BLOCK_SIZE, SCREEN_WIDTH);
		}
		if (ac.getKey && keyGet == 0) {
			keyGet = 1;
			stage1_Past[4][1] = 0;
			stage1_Future[4][1] = 0;
			stage1_past[2][0] = 0;
			stage1_future[2][0] = 0;
			textX += 50;
			a.drawBitmap("empty_block.bmp", buffer, 2 * 0 * BLOCK_SIZE, 2 * BLOCK_SIZE, SCREEN_WIDTH);

		}
		if (ac.getKey) {
			wt.drawText(L"����", textX, 700, 20, RGB(128, 128, 128), L"����ü");

		}
		if (ac.getSeed) {
			wt.drawText(L"����", textX, 700, 20, RGB(128, 128, 128), L"����ü");
		}
		if (ac.collision(stage, ac.x, ac.y + 20) == 11)
		{
			wt.drawText(L"���� ����ִ�", 1610, 800, 20, RGB(128, 128, 128), L"����ü");
		}

		if (ac.future)
		{
			memcpy(stage, stage1_Future, sizeof(stage1_Future));
			a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			drawStage1Future(buffer);
		}
		else
		{
			memcpy(stage, stage1_Past, sizeof(stage1_Past));
			a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			drawStage1Past(buffer);
		}

		if (ac.facingRight)
		{
			if (ac.isJumping) {
				ac.characterRightJumpDraw(ac.x, ac.y, buffer);
			}
			else {
				ac.isJumping = 0;
				ac.characterRightDraw(ac.x, ac.y, buffer);
			}
		}
		else
		{
			if (ac.isJumping) {
				ac.characterLeftJumpDraw(ac.x, ac.y, buffer);
			}
			else {
				ac.isJumping = 0;
				ac.characterLeftDraw(ac.x, ac.y, buffer);
			}
		}

		if (ac.collision(stage, ac.x, ac.y + 20) == 14) {		// ����ġ
			
			if (ac.x / 40 == 36) {				// ��� ����ġ
				stage1_future[6][18] = 0;			// ����ġ �׸� ����
				stage1_future[8][12] = 0;			// ��� �׸� ����
				// ����ġ ��ġ ����
				stage1_Future[13][37] = 0;		
				stage1_Future[13][36] = 0;
				// ��� ��ġ ����
				for (int i = 23; i >= 16; i--) {		
					stage1_Future[i][25] = 0;
					stage1_Future[i][24] = 0;
				}			
				stage1_Future[16][23] = 0;
				stage1_Future[23][23] = 0;
			}	

			if (ac.x / 40 == 38) {			//	������ ����ġ
				stage1_past[10][19] = 0;		// ����ġ �׸� ����
				// ����ġ ��ġ ����
				stage1_Past[21][39] = 0;		
				stage1_Past[21][38] = 0;
				// ������ �׸� ����
				stage1_past[1][18] = 0;
				stage1_future[1][18] = 0;
				// ������ ��ġ ����
				for (int i = 3; i >= 2; i--) {
					stage1_Past[i][37] = 0;
					stage1_Past[i][36] = 0;
					stage1_Future[i][37] = 0;
					stage1_Future[i][36] = 0;
				}
			}
		}
		if (ac.seedPlant)
		{
			stage1_future[4][17] = 10;
			stage1_Future[7][34] = 2;
			stage1_Future[7][35] = 2;
			wt.drawText(L"������ �ɾ�����!", 1650, 800, 20, RGB(128, 128, 128), L"����ü");
			Sleep(1000);
			ac.seedPlant = 0;
		}
		if (ac.collision(stage, ac.x, ac.y + 20) == 9 && ac.getSeed==1) 
		{
			wt.drawText(L"������ ���� �� ���� �� ����!", 1650, 800, 20, RGB(128, 128, 128), L"����ü");
		}
		
		if (ac.getSeed && seedGet == 0) {
			seedGet = 1;
			stage1_Past[6][34] = 0;
			stage1_past[3][17] = 0;
			a.drawBitmap("empty_block.bmp", buffer, 2 * 17 * BLOCK_SIZE, 3 * BLOCK_SIZE, SCREEN_WIDTH);
		}

		if (ac.getKey && keyGet == 0) {
			keyGet = 1;
			stage1_Past[4][1] = 0;
			stage1_Future[4][1] = 0;
			stage1_past[2][0] = 0;
			stage1_future[2][0] = 0;
			a.drawBitmap("empty_block.bmp", buffer, 2 * 0 * BLOCK_SIZE, 2 * BLOCK_SIZE, SCREEN_WIDTH);
		}

		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
		
	}
}
void drawStage1::drawStage1Future(std::vector<char>& buffer) {
	draw a;
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch (stage1_future[y][x]) {
			case 1:
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 2:
				a.drawBitmap("cold_lava.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 3:
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("laser1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 10:
				a.drawBitmap("seed_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE - 15, SCREEN_WIDTH);
				break;
			}
		}
	}   
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
	a.drawBitmap("broken_door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
}


void drawStage1::drawStage1Past(std::vector<char>& buffer) {
	draw a;

	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch (stage1_past[y][x]) {
			case 1:
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 2:
				a.drawBitmap("lava2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 3:
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("laser1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 8:
				a.drawBitmap("seed.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 9:
				a.drawBitmap("lever_right.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 10:
				a.drawBitmap("seed_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE - 15, SCREEN_WIDTH);
				break;
			}
		}
	}
	a.drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
}

void drawStage1::stage1BossDraw(std::vector<char>& buffer)
{
	draw a;
	drawCharacter ac;
	Boss1 b;

	int stage[25][40];

	while (1)
	{
		if (ac.nextStage || ac.gameOverCheck)
		{
			if (ac.nextStage) {
				a.drawBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);
				a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
				ac.nextStage = 0;
				Sleep(1000);
				a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			}

			a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			a.drawBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);

			Boss1::at.clear();
			memcpy(stage, character::clearStage, sizeof(character::clearStage));
			character::characterHeart = 3;

			ac.x = 0;
			ac.y = 420;

			ac.gameOverCheck = 0;
			break;
		}

		if (ac.future)
		{
			memcpy(stage, stage1_Future_Boss, sizeof(stage1_Future_Boss));
			a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			stage1FutureBossDraw(buffer);
		}
		else
		{
			memcpy(stage, stage1_Past_Boss, sizeof(stage1_Past_Boss));
			a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			stage1PastBossDraw(buffer);
		}

		a.drawBitmap("Empty_boss.bmp", buffer, Boss1::m_x * 20, Boss1::m_y, SCREEN_WIDTH);

		stage[Boss1::m_y / 20][Boss1::m_x] = 0;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x] = 0;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x] = 0;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x] = 0;
		stage[Boss1::m_y / 20][Boss1::m_x + 1] = 0;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x + 1] = 0;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x + 1] = 0;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x + 1] = 0;
		stage[Boss1::m_y / 20][Boss1::m_x + 2] = 0;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x + 2] = 0;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x + 2] = 0;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x + 2] = 0;
		stage[Boss1::m_y / 20][Boss1::m_x + 3] = 0;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x + 3] = 0;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x + 3] = 0;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x + 3] = 0;

		if (Boss1::time >= 1000)
		{
			b.Boss1Attack();
			Boss1::time = 0;
		}

		if (!Boss1::flag)
		{
			Boss1::m_x--;

			if (Boss1::m_x == 0)
			{
				Boss1::flag = true;
			}
		}
		else
		{
			Boss1::m_x++;

			if (Boss1::m_x == 72)
			{
				Boss1::flag = false;
			}
		}

		stage[Boss1::m_y / 20][Boss1::m_x] = 98;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x] = 98;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x] = 98;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x] = 98;
		stage[Boss1::m_y / 20][Boss1::m_x + 1] = 98;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x + 1] = 98;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x + 1] = 98;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x + 1] = 98;
		stage[Boss1::m_y / 20][Boss1::m_x + 2] = 98;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x + 2] = 98;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x + 2] = 98;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x + 2] = 98;
		stage[Boss1::m_y / 20][Boss1::m_x + 3] = 98;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x + 3] = 98;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x + 3] = 98;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x + 3] = 98;

		a.drawBitmap("Stage1_Boss.bmp", buffer, Boss1::m_x * 20, Boss1::m_y, SCREEN_WIDTH);

		b.Boss1AttackMove(buffer, stage);

		Boss1::time += 50;

		a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

		ac.characterErase(ac.x, ac.y, buffer);

		int coll = ac.collision(stage, ac.x, ac.y);

		if (coll != 2 || coll != 10 || coll != 11) {
			ac.gravity(stage, ac.x, ac.y);
		}

		ac.characterMove(stage, buffer);

		if (ac.facingRight)
		{
			ac.characterRightDraw(ac.x, ac.y, buffer);
		}
		else
		{
			ac.characterLeftDraw(ac.x, ac.y, buffer);
		}

		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
	}
}

void drawStage1::stage1FutureBossDraw(std::vector<char>& buffer)
{
	draw a;

	a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
}

void drawStage1::stage1PastBossDraw(std::vector<char>& buffer)
{
	draw a;

	a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

}