#include "drawStage1.h"

int drawStage1::stage1_future[12][20] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,1,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,5,0},
	{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
	{0,0,0,1,1,0,0,0,0,0,0,0,6,0,0,0,0,1,0,0},		 
	{0,0,1,0,1,0,0,0,0,0,0,0,6,1,1,1,1,0,0,0},
	{0,0,0,0,1,1,1,1,0,0,0,0,6,0,0,0,0,0,0,0},
	{0,0,0,0,1,0,0,0,1,0,0,0,6,0,0,0,0,0,1,1}
};

int drawStage1::stage1_past[12][20] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
	{4,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
	{1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,1,0,8,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,1,1,0,1,1,0,0,1,1,0,0,0,0,0,0,0},
	{1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
	{0,0,0,0,1,0,0,0,0,0,0,0,6,0,0,0,0,1,0,0},
	{0,0,0,0,1,0,9,0,0,0,0,0,6,1,1,1,1,0,0,0},		
	{0,1,0,0,1,1,1,1,0,0,0,0,6,0,0,0,0,0,0,5},		
	{0,0,0,1,1,0,0,0,0,0,0,0,6,0,0,0,0,0,1,1}
};

int drawStage1::stage1_future_Boss[12][20] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

int drawStage1::stage1_past_Boss[12][20] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

int drawStage1::stage1_Future[25][40] =
{
   {0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0},
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
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,2,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,2,2,2,2,2,2,2,2,0,0,0,0,0,0},
   {0,0,0,0,2,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,2,2,2,2,2,2,2,2,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};
int drawStage1::stage1_Past[25][40] =
{
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0},
   {0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,11,11},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,8,8,8,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,0,0,5,0,2,2,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,9,9,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {2,2,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {2,2,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,15,15,0,0,0,0,0,0,0,0,0,0,8,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,15,15,0,0,0,0,0,0,0,0,0,0,8,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0},	
   {0,0,2,2,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,14,14},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
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
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,9,9,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};

drawStage1::drawStage1()
{

}

void drawStage1::stage1Draw(std::vector<char>& buffer)
{
	draw a;
	drawCharacter ac;

	drawMoveableBlock mb1(720, 60);

	int stage[25][40];
	int seedGet = 0;
	int keyGet = 0;
	writeText wt;

	int seed_time = 0;
	int textXkey = 1650;
	int textXseed = 1650;
	int getfirst = 0;

	int resetPastStage[25][40];
	int resetpastStage[12][20];
	int resetFutureStage[25][40];
	int resetfutureStage[12][20];

	memcpy(resetPastStage, stage1_Past, sizeof(stage1_Past));
	memcpy(resetpastStage, stage1_past, sizeof(stage1_past));
	memcpy(resetFutureStage, stage1_Future, sizeof(stage1_Future));
	memcpy(resetfutureStage, stage1_future, sizeof(stage1_future));

	while (1)
	{
		if (ac.nextStage || ac.gameOverCheck)
		{
			if (ac.nextStage) 
			{
				ac.nextStage = 0;
				Sleep(1000);
				a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
				a.eraseBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);
				a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
				ac.seedPlant = 0;
			}
			if (ac.gameOverCheck)
			{
				ac.getSeed = 0;
				ac.getKey = 0;
				ac.isLeverPull = 0;
				ac.gameOverCheck = 0;
				seed_time = 0;
				memcpy(stage1_Past, resetPastStage, sizeof(stage1_Past));
				memcpy(stage1_past, resetpastStage,  sizeof(stage1_past));
				memcpy(stage1_Future, resetFutureStage, sizeof(stage1_Future));
				memcpy(stage1_future, resetfutureStage,  sizeof(stage1_future));

				a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
				a.eraseBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);
				a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
			}

			character::characterHeart = 3;
	
			ac.x = 10;
			ac.y = 410;
			ac.facingRight = 1;
			seed_time = 0;

			break;
		}

		if (ac.attacking)
		{
			ac.attacking = 0;
			ac.characterAttackErase(ac.x, ac.y, buffer);
		}
		else
		{
			ac.characterErase(ac.x, ac.y, buffer);
		}

		int charactercoll = ac.collision(stage, ac.x, ac.y);

		mb1.blockLocationErase(stage, mb1.m_x, mb1.m_y);
		
		int block1coll = mb1.collision(stage, mb1.m_x, mb1.m_y);
		
		if (block1coll != 2 && block1coll != 3)
		{
			mb1.gravity(stage, mb1.m_x, mb1.m_y);
		}
		
		mb1.blockMove(stage, ac.x, ac.y);
		mb1.blockLocation(stage, mb1.m_x, mb1.m_y);

		if (charactercoll != 2 && charactercoll != 10 && charactercoll != 11 && charactercoll != 3 && charactercoll != 14 && charactercoll!=15) 
		{
			ac.gravity(stage, ac.x, ac.y);
		}

		if (ac.getSeed && seedGet == 0) 
		{
			seedGet = 1;
			
			stage1_Past[6][34] = 0;
			stage1_past[3][17] = 0;
			
			a.eraseBitmap("empty_block.bmp", buffer, 2 * 17 * BLOCK_SIZE, 3 * BLOCK_SIZE, SCREEN_WIDTH);
		}

		if (ac.getKey && keyGet == 0) 
		{
			keyGet = 1;

			if (getfirst == 0)
				getfirst = 1;

			stage1_Past[4][1] = 0;
			stage1_Future[4][1] = 0;
			stage1_past[2][0] = 0;
			stage1_future[2][0] = 0;			

			a.eraseBitmap("empty_block.bmp", buffer, 2 * 0 * BLOCK_SIZE, 2 * BLOCK_SIZE, SCREEN_WIDTH);
		}

		if (ac.getKey) 
		{
			wt.drawText(L"열쇠", textXkey, 700, 20, RGB(128, 128, 128), L"굴림체");

			if (getfirst == 0) 
			{
				getfirst = 1;
				textXseed += 50;
			}
		}
		
		if (ac.getSeed)
		{
			wt.drawText(L"씨앗", textXseed, 700, 20, RGB(128, 128, 128), L"굴림체");

			if (getfirst == 0)
			{
				getfirst = 1;
				textXkey += 50;
			}

		}

		if (ac.collision(stage, ac.x, ac.y + 20) == 11 && !character::getKey)
		{
			wt.drawText(L"문이 잠겨있다", 1650, 800, 20, RGB(128, 128, 128), L"굴림체");
		}

		if (ac.future)
		{
			memcpy(stage, stage1_Future, sizeof(stage1_Future));
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			drawStage1Future(buffer);
			mb1.moveableBlockDraw(mb1.m_x, mb1.m_y, buffer);
		}
		else
		{
			memcpy(stage, stage1_Past, sizeof(stage1_Past));
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			drawStage1Past(buffer);
			mb1.moveableBlockDraw(mb1.m_x, mb1.m_y, buffer);
		}

		if (ac.isLeverPull)
		{
			stage1_future[9][10] = 1;
			stage1_future[8][9] = 1;
			stage1_past[10][10] = 1;
			stage1_past[7][9] = 1;
			stage1_Past[21][20] = 2;
			stage1_Past[20][20] = 2;
			stage1_Past[20][21] = 2;
			stage1_Past[21][21] = 2;
			stage1_Future[19][21] = 2;
			stage1_Future[19][20] = 2;
			stage1_Future[18][21] = 2;
			stage1_Future[18][20] = 2;
			stage1_Future[17][19] = 2;
			stage1_Future[17][18] = 2;
			stage1_Future[16][19] = 2;
			stage1_Future[16][18] = 2;
			stage1_Past[15][18] = 2;
			stage1_Past[14][18] = 2;
			stage1_Past[15][19] = 2;
			stage1_Past[14][19] = 2;
		}
		else
		{
			stage1_future[9][10] = 0;
			stage1_future[8][9] = 0;
			stage1_past[10][10] = 0;
			stage1_past[7][9] = 0;
			stage1_Past[21][20] = 0;
			stage1_Past[20][20] = 0;
			stage1_Past[20][21] = 0;
			stage1_Past[21][21] = 0;
			stage1_Future[19][21] = 0;
			stage1_Future[19][20] = 0;
			stage1_Future[18][21] = 0;
			stage1_Future[18][20] = 0;
			stage1_Future[17][19] = 0;
			stage1_Future[17][18] = 0;
			stage1_Future[16][19] = 0;
			stage1_Future[16][18] = 0;
			stage1_Past[15][18] = 0;
			stage1_Past[14][18] = 0;
			stage1_Past[15][19] = 0;
			stage1_Past[14][19] = 0;
		}

		if (ac.collision(stage, ac.x, ac.y + 20) == 14) // 스위치
		{
			if (ac.x / 40 == 36)             // 기둥 스위치
			{
				stage1_future[6][18] = 0;         // 스위치 그림 제거

				// 기둥 그림 제거
				stage1_future[8][12] = 0;        
				stage1_future[9][12] = 0;
				stage1_future[10][12] = 0;
				stage1_future[11][12] = 0;

				// 스위치 위치 제거
				stage1_Future[13][37] = 0;
				stage1_Future[13][36] = 0;
				// 기둥 위치 제거
				for (int i = 23; i >= 16; i--) {
					stage1_Future[i][25] = 0;
					stage1_Future[i][24] = 0;
				}
				stage1_Future[16][23] = 0;
				stage1_Future[23][23] = 0;
			}

			if (ac.x / 40 == 38)          //   레이저 스위치
			{
				stage1_past[10][19] = 0;      // 스위치 그림 제거
				// 스위치 위치 제거
				stage1_Past[21][39] = 0;
				stage1_Past[21][38] = 0;
				// 레이저 그림 제거
				stage1_past[1][18] = 0;
				
				stage1_future[1][18] = 0;
				// 레이저 위치 제거

				for (int i = 3; i >= 2; i--)
				{
					stage1_Past[i][37] = 0;
					stage1_Past[i][36] = 0;
					stage1_Future[i][37] = 0;
					stage1_Future[i][36] = 0;
				}
			}
		}

		if (ac.seedPlant)
		{
			stage1_past[4][17] = 10;
			stage1_future[3][17] = 11;
			stage1_future[3][17] = 11;
			stage1_Future[7][34] = 2;
			stage1_Future[6][34] = 2;
			stage1_Future[5][34] = 2;

			wt.drawText(L"씨앗이 심어졌다!", 1650, 800, 20, RGB(128, 128, 128), L"굴림체");

			seed_time += 100;
		}

		if (seed_time > 1000)
		{
			ac.seedPlant = 0;
		}

		if (ac.collision(stage, ac.x, ac.y + 20) == 9 && ac.getSeed == 1)
		{
			wt.drawText(L"↓'키를 눌러", 1650,800,20, RGB(128,128,128), L"굴림체");
			wt.drawText(L"씨앗을 심어보자!", 1650, 820, 20, RGB(128, 128, 128), L"굴림체");
		}

		if (ac.getSeed && seedGet == 0) {
			seedGet = 1;
			
			stage1_Past[6][34] = 0;
			stage1_past[3][17] = 0;
			a.eraseBitmap("empty_block.bmp", buffer, 2 * 17 * BLOCK_SIZE, 3 * BLOCK_SIZE, SCREEN_WIDTH);
		}

		if (ac.getKey && keyGet == 0) 
		{
			keyGet = 1;
			
			stage1_Past[4][1] = 0;
			stage1_Future[4][1] = 0;
			stage1_past[2][0] = 0;
			stage1_future[2][0] = 0;
			a.eraseBitmap("empty_block.bmp", buffer, 2 * 0 * BLOCK_SIZE, 2 * BLOCK_SIZE, SCREEN_WIDTH);
		}

		ac.characterMove(stage, buffer);
		ac.characterDraw(buffer);
		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
		wt.drawText(L"가지고 있는 아이템:", 1650, 600, 20, RGB(128, 128, 128), L"굴림체");
	}
}

void drawStage1::drawStage1Future(std::vector<char>& buffer)
{
	draw a;
	for (int y = 0; y < 12; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			switch (stage1_future[y][x])
			{
			case 1:
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 2:
				a.drawBitmap("cold_lava.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("laser_length.bmp", buffer, 2 * x * BLOCK_SIZE+20, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 10:
				a.drawBitmap("seed_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE - 15, SCREEN_WIDTH);
				break;
			case 11:
				a.drawBitmap("stage1_tree.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE - 15, SCREEN_WIDTH);
				break;
			}
		}
	}

	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
	a.drawBitmap("broken_door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
}

void drawStage1::drawStage1Past(std::vector<char>& buffer) 
{
	draw a;

	for (int y = 0; y < 12; y++)
	{
		for (int x = 0; x < 20; x++) 
		{
			switch (stage1_past[y][x])
			{
			case 1:
				a.drawBitmap("past_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 2:
				a.drawBitmap("lava2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("laser_length.bmp", buffer, 2 * x * BLOCK_SIZE+20, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 8:
				a.drawBitmap("seed.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 9:
				if (character::isLeverPull)
				{
					a.drawBitmap("lever_left.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				}
				else
				{
					a.drawBitmap("lever_right.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				}
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
	writeText wt;
	int stage[25][40];
	int seedPlantCheck = 0;
	int start = 0;
	int seed_time = 0;
	ac.facingRight = 1;
	ac.future = 1;

	while (1)
	{
		if (ac.nextStage || ac.gameOverCheck)
		{
			if (ac.nextStage) {
				
				ac.seedPiece = 0;
				ac.seedPlant = 0;

				a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
				ac.nextStage = 0;
				Sleep(1000);
				a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
				a.eraseBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);
			}

			ac.seedPiece = 0;
			ac.seedPlant = 0;
			ac.getSeed = 0;
			ac.facingRight = 1;
			ac.future = 1;
			seed_time = 0;
			memcpy(stage, character::clearStage, sizeof(character::clearStage));
			character::characterHeart = 3;
			Boss1::Boss1reset(buffer);

			ac.x = 0;
			ac.y = 410;
			seed_time = 0;

			ac.gameOverCheck = 0;

			break;
		}

		if (ac.attacking)
		{
			ac.attacking = 0;
			ac.characterAttackErase(ac.x, ac.y, buffer);
		}
		else
		{
			ac.characterErase(ac.x, ac.y, buffer);
		}

		if (ac.future)
		{
			memcpy(stage, stage1_Future_Boss, sizeof(stage1_Future_Boss));
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			stage1FutureBossDraw(buffer);

			if (ac.seedPlant)
			{
				a.drawBitmap("stage1_boss_tree_lower.bmp", buffer, 600, 300, SCREEN_WIDTH);
				a.drawBitmap("stage1_boss_tree_upper.bmp", buffer, 600, 120, SCREEN_WIDTH);

				drawStage1::stage1_Future_Boss[9][16] = 3;
				drawStage1::stage1_Future_Boss[9][17] = 3;
				drawStage1::stage1_Future_Boss[9][18] = 3;
				drawStage1::stage1_Future_Boss[9][19] = 3;
				drawStage1::stage1_Future_Boss[11][21] = 3;
				drawStage1::stage1_Future_Boss[12][24] = 3;
				drawStage1::stage1_Future_Boss[12][25] = 3;
				drawStage1::stage1_Future_Boss[12][26] = 3;
				drawStage1::stage1_Future_Boss[12][27] = 3;
				drawStage1::stage1_Future_Boss[15][16] = 3;
				drawStage1::stage1_Future_Boss[15][17] = 3;
				drawStage1::stage1_Future_Boss[15][18] = 3;
				drawStage1::stage1_Future_Boss[15][19] = 3;
				drawStage1::stage1_Future_Boss[17][21] = 3;
				drawStage1::stage1_Future_Boss[18][23] = 3;
				drawStage1::stage1_Future_Boss[18][24] = 3;
				drawStage1::stage1_Future_Boss[18][25] = 3;
				drawStage1::stage1_Future_Boss[18][26] = 3;
				drawStage1::stage1_Future_Boss[21][16] = 3;
				drawStage1::stage1_Future_Boss[21][17] = 3;
				drawStage1::stage1_Future_Boss[21][18] = 3;
				drawStage1::stage1_Future_Boss[21][19] = 3;
			}
		}
		else
		{
			memcpy(stage, stage1_Past_Boss, sizeof(stage1_Past_Boss));

			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			stage1PastBossDraw(buffer);
			a.drawBitmap("small_block.bmp", buffer, 820, 400, SCREEN_WIDTH);
			a.drawBitmap("small_block.bmp", buffer, 820, 280, SCREEN_WIDTH);
		}

		if (Boss1::hp)
		{
			a.eraseBitmap("Empty_boss.bmp", buffer, Boss1::m_x * 20, Boss1::m_y, SCREEN_WIDTH);
		}

		stage[Boss1::m_y / 20][Boss1::m_x / 2] = 0;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x / 2] = 0;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x / 2] = 0;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x / 2] = 0;
		stage[Boss1::m_y / 20][Boss1::m_x / 2 + 1] = 0;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x / 2 + 1] = 0;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x / 2 + 1] = 0;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x / 2 + 1] = 0;
		stage[Boss1::m_y / 20][Boss1::m_x / 2 + 2] = 0;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x / 2 + 2] = 0;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x / 2 + 2] = 0;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x / 2 + 2] = 0;
		stage[Boss1::m_y / 20][Boss1::m_x / 2 + 3] = 0;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x / 2 + 3] = 0;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x / 2 + 3] = 0;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x / 2 + 3] = 0;

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

		stage[Boss1::m_y / 20][Boss1::m_x / 2] = 98;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x / 2] = 98;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x / 2] = 98;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x / 2] = 98;
		stage[Boss1::m_y / 20][Boss1::m_x / 2 + 1] = 98;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x / 2 + 1] = 98;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x / 2 + 1] = 98;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x / 2 + 1] = 98;
		stage[Boss1::m_y / 20][Boss1::m_x / 2 + 2] = 98;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x / 2 + 2] = 98;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x / 2 + 2] = 98;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x / 2 + 2] = 98;
		stage[Boss1::m_y / 20][Boss1::m_x / 2 + 3] = 98;
		stage[Boss1::m_y / 20 + 1][Boss1::m_x / 2 + 3] = 98;
		stage[Boss1::m_y / 20 + 2][Boss1::m_x / 2 + 3] = 98;
		stage[Boss1::m_y / 20 + 3][Boss1::m_x / 2 + 3] = 98;

		Boss1::time += 50;

		a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

		if (start)
			ac.characterMove(stage, buffer);

		int coll = ac.collision(stage, ac.x, ac.y);

		if (coll != 2 && coll != 10 && coll != 11 && coll != 3 && coll != 14 && coll != 15) 
		{
			ac.gravity(stage, ac.x, ac.y);
		}

		ac.characterDraw(buffer);

		b.Boss1AttackMove(buffer, stage);

		if (Boss1::hp)
		{
			a.drawBitmap("Stage1_Boss.bmp", buffer, Boss1::m_x * 20, Boss1::m_y, SCREEN_WIDTH);
		}

		wt.drawText(L"가지고 있는 아이템:", 1650, 600, 20, RGB(128, 128, 128), L"굴림체");

		if (ac.collision(stage, ac.x, ac.y + 20) == 9 && ac.getSeed == 1)
		{
			wt.drawText(L"씨앗을 심을 수 있을 것 같다!", 1600, 800, 20, RGB(128, 128, 128), L"굴림체");
		}
		

		if (seedPlantCheck == 0 && ac.seedPlant) 
		{
			wt.drawText(L"씨앗이 심어졌다!", 1650, 800, 20, RGB(128, 128, 128), L"굴림체");
			seed_time += 100;
		}

		if (seed_time > 500)
		{
			
			seedPlantCheck = 1;
		}
		
	

		if (Boss1::hp == 0)
		{
			stage1_Future_Boss[24][38] = 10;
			stage1_Future_Boss[24][39] = 10;
			stage1_Past_Boss[24][38] = 10;
			stage1_Past_Boss[24][39] = 10;

			if (Boss1::at.size() > 0)
			{
				Boss1::at.clear();
			}

			Boss1::time = 0;

			a.drawBitmap("door.bmp", buffer, 1520, 420, SCREEN_WIDTH);
		}

		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

		if (ac.getSeed)
			wt.drawText(L"씨앗", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
		switch (ac.seedPiece)
		{
		case 1: wt.drawText(L"씨앗조각 : 1", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			break;
		case 2: wt.drawText(L"씨앗조각 : 2", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			break;
		case 3: wt.drawText(L"씨앗조각 : 3", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			break;
		case 4: wt.drawText(L"씨앗조각 : 4", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			break;
		case 5: wt.drawText(L"씨앗조각 : 5", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			break;
		case 6: wt.drawText(L"씨앗조각 : 6", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			break;
		case 7: wt.drawText(L"씨앗조각 : 7", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			break;
		case 8: wt.drawText(L"씨앗조각 : 8", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			break;
		case 9: wt.drawText(L"씨앗조각 : 9", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			break;
		case 10: wt.drawText(L"씨앗조각 : 10", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
			ac.getSeed = 1;
			ac.seedPiece = 0;
			break;
		default:
			break;
		}
		if (start == 0)
		{
			wt.drawText(L"침입자...", 700, 500, 100, RGB(128, 128, 128), L"굴림체");
			Sleep(1000);
			wt.drawText(L"제거한다...", 700, 600, 100, RGB(128, 128, 128), L"굴림체");
			Sleep(1000);
			start = 1;
		}

		wt.drawText(L"가지고 있는 아이템:", 1650, 600, 20, RGB(128, 128, 128), L"굴림체");
	}

	int i = 0;
	int term = 0;

	a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

	while (_kbhit()) 
	{
		_getch();
	}

	while (1)
	{
		term++;

		if (i == 0) 
		{
			wt.drawText(L"누군가의 일지가 있다...", 400, 500, 50, RGB(128, 128, 128), L"굴림체");
			Sleep(1000);
			i = 1;
		}

		if (i == 1)
		{
			a.drawBitmap("diary1.bmp", buffer, 50, 0, SCREEN_WIDTH);
			a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

			if (_kbhit())
			{
				break;
			}
		}
	}
}

void drawStage1::stage1FutureBossDraw(std::vector<char>& buffer)
{
	draw a;

	a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
}

void drawStage1::stage1PastBossDraw(std::vector<char>& buffer)
{
	draw a;

	a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
}