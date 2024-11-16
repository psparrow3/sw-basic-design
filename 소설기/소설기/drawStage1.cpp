#include "drawStage1.h"

<<<<<<< HEAD
vector<char> drawStage1::buffer_st1_past = drawStage1::drawStage1Past();

vector<char> drawStage1::buffer_st1_future = drawStage1::drawStage1Future();

int drawStage1::st1_future[12][20] =
{
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,0,0,0,0,0,3,0,3,0,0,0,0,0,0,0,0,0},
   {4,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,1,1},
   {1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
   {0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,5,0},
   {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
   {0,0,0,0,1,0,0,0,0,0,0,0,6,0,3,0,0,1,0,0},
   {1,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,7,0,0},
   {0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
};
int drawStage1::st1_past[12][20] =                    
{
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,3,0,3,0,0,0,0,0,0,0,0,0},
   {4,0,2,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,1,1},
   {1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,8,1,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
   {1,1,0,0,1,1,0,1,1,0,0,1,1,0,0,0,0,0,0,0},
   {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
   {0,0,0,1,1,0,0,0,0,0,0,0,6,0,3,0,0,1,0,0},
   {0,0,0,0,1,0,9,0,0,0,0,0,0,1,1,1,1,7,0,0},
   {0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,5},
   {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
};
int drawStage1::stage1_Future[25][40] =
{
=======
int drawStage1::stage1_Future[25][40]
{  
>>>>>>> main
   {0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,4,0,0,2,2,2,2,2,2,0,0,0,0,0,0,3,3,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,3,3,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,2,2,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,2,2,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,3,3,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,3,3,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,2,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0},
   {0,0,0,0,2,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0},
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
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,11,11},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,8,8,8,8,8,8,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,0,0,5,0,2,2,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,2,2,0,0,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,2,2,2,2,2,2,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,2,2,2,2,2,2,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {2,2,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {2,2,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,3,3,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,3,3,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,2,2,2,2,2},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,2,2},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};
int drawStage1::stage1_Future_Boss[25][40]
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
int drawStage1::stage1_Past_Boss[25][40]
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
<<<<<<< HEAD
	drawCharacter ac;
	int stage[25][40];
	
=======
    draw a;
    
    drawCharacter ac;
    int stage[25][40];
	int seedGet = 0;
	int keyGet = 0;\

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

>>>>>>> main
	while (1) {
		if (ac.nextStage || ac.gameOverCheck)
		{
<<<<<<< HEAD
			draw::drawBuffer(draw::buffer_empty, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
=======
			a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			a.drawBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);
			ac.x = 0;
			ac.y = 420;

>>>>>>> main
			ac.gameOverCheck = 0;

			break;
		}

<<<<<<< HEAD
		int preX = character::x, preY = character::y;
		bool prefuture = character::future;

		if (ac.future)
		{
			memcpy(stage, stage1_Future, sizeof(stage1_Future));
			draw::drawBuffer(buffer_st1_future, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
		}
		else
		{
			memcpy(stage, stage1_Past, sizeof(stage1_Past));
			draw::drawBuffer(buffer_st1_past, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
		}
		
		ac.characterErase(ac.x, ac.y, drawCharacter::characterEmpty);
=======
		int preX = ac.x;
		int preY = ac.y;
		bool prefuture = ac.future;
>>>>>>> main

		ac.characterErase(preX, preY, buffer);
		int coll = ac.collision(stage, ac.x, ac.y);
		if (coll != 2 || coll != 10 || coll != 11 || coll != 3) {
			ac.gravity(stage, ac.x, ac.y);
		}
<<<<<<< HEAD
 
		ac.characterMove(stage);
		if (ac.facingRight)
		{
			//ac.characterRightDraw(ac.x, ac.y, buffer);
		}
		else
		{
			//ac.characterLeftDraw(ac.x, ac.y, buffer);
		}

		if (ac.future)
		{
=======
		if (coll == 3) {
>>>>>>> main
			
		}
		ac.characterMove(stage, buffer);

		if (prefuture != ac.future) {
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
		}
		if (ac.facingRight)
		{
<<<<<<< HEAD
			if (!ac.getSeed) {
				//a.drawBitmap("seed.bmp", 2 * 17 * BLOCK_SIZE, 3 * BLOCK_SIZE, SCREEN_WIDTH);
			}
			else {
				st1_past[3][17] = 0;
				stage1_Past[6][34] = 0;
=======
			if (ac.isJumping) {
				ac.characterRightJumpDraw(ac.x, ac.y, buffer);
			}
			else {
				ac.isJumping = 0;
				ac.characterRightDraw(ac.x, ac.y, buffer);
>>>>>>> main
			}

		}
<<<<<<< HEAD
		if (!ac.getKey) {
			//a.drawBitmap("key.bmp", 0, 2 * BLOCK_SIZE, SCREEN_WIDTH);
=======
		else
		{
			if (ac.isJumping) {
				ac.characterLeftJumpDraw(ac.x, ac.y, buffer);
			}
			else {
				ac.isJumping = 0;
				ac.characterLeftDraw(ac.x, ac.y, buffer);
			}

>>>>>>> main
		}
		
		if (ac.getSeed && seedGet==0) {
			seedGet = 1;
			stage1_Past[6][34] = 0;
			stage1_past[3][17] = 0;
			a.drawBitmap("empty_block.bmp", buffer, 2 * 17 * BLOCK_SIZE, 3 * BLOCK_SIZE, SCREEN_WIDTH);
		}
		if (ac.getKey && keyGet==0) {
			keyGet = 1;
			stage1_Past[4][1] = 0;
			stage1_Future[4][1] = 0;
			stage1_past[2][0] = 0;
			stage1_future[2][0] = 0;
			a.drawBitmap("empty_block.bmp", buffer, 2 * 0 * BLOCK_SIZE, 2 * BLOCK_SIZE, SCREEN_WIDTH);
		}
<<<<<<< HEAD
	}
}

vector<char> drawStage1::drawStage1Future() {
	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');
	
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch (st1_future[y][x]) {
			case 1:
				buffer = draw::drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 2:
				buffer = draw::drawBitmap("cold_lava.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 3:
				buffer = draw::drawBitmap("movable_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				buffer = draw::drawBitmap("seed.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				buffer = draw::drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				buffer = draw::drawBitmap("laser1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				buffer = draw::drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			}
		}
	}
	
	buffer = draw::drawBitmap("broken_door.bmp", buffer, 2 * 19 * BLOCK_SIZE, 20, SCREEN_WIDTH);
	   
	buffer = draw::drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

	return buffer;
=======
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
                a.drawBitmap("movable_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
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
            }
        }
    }   
    a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
    a.drawBitmap("broken_door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
>>>>>>> main
}
   

std::vector<char> drawStage1::drawStage1Past() {
	std::vector<char> buffer(SCREEN_WIDTH * SCREEN_HEIGHT, ' ');

<<<<<<< HEAD
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch (st1_past[y][x]) {
			case 1:
				buffer = draw::drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 2:
				buffer = draw::drawBitmap("lava2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 3:
				buffer = draw::drawBitmap("movable_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				buffer = draw::drawBitmap("seed.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				buffer = draw::drawBitmap("button1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				buffer = draw::drawBitmap("laser1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				buffer = draw::drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 8:
				buffer = draw::drawBitmap("key.bmp", buffer, x, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 9:
				buffer = draw::drawBitmap("lever_right.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			}
		}
	}

	buffer = draw::drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, 20, SCREEN_WIDTH);

	buffer = draw::drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

	return buffer;
=======
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
                a.drawBitmap("movable_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
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
                a.drawBitmap("seed_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE-15, SCREEN_WIDTH);
                break;
            }
        }
    }
    a.drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
    a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
>>>>>>> main
}

void drawStage1::stage1BossDraw(std::vector<char>& buffer)
{
	drawCharacter ac;
	Boss1 b;

	int stage[25][40];

	if (ac.future)
	{
		memcpy(stage, stage1_Future_Boss, sizeof(stage1_Future_Boss));
		draw::drawBuffer(draw::buffer_empty, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
		stage1FutureBossDraw(buffer);
	}
	else
	{
		memcpy(stage, stage1_Past_Boss, sizeof(stage1_Past_Boss));
		draw::drawBuffer(draw::buffer_empty, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
		stage1PastBossDraw(buffer);
	}

	int time = 0;

	draw::drawBitmap("Empty_boss.bmp", buffer, Boss1::m_x * 80, Boss1::m_y, SCREEN_WIDTH);

	if (time >= 1000)
	{
		b.Boss1Attack();
		time = 0;
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

		if (Boss1::m_x == 18)
		{
			Boss1::flag = false;
		}
	}

	draw::drawBitmap("Stage1_Boss.bmp", buffer, Boss1::m_x * 80, Boss1::m_y, SCREEN_WIDTH);

	b.Boss1AttackMove(buffer);

	Sleep(100);

	time += 100;

	draw::drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

	ac.characterErase(ac.x, ac.y, buffer);

	int coll = ac.collision(stage, ac.x, ac.y);
	if (coll != 2 || coll != 10 || coll != 11) {
		ac.gravity(stage, ac.x, ac.y);
	}

	ac.characterMove(stage);

	if (ac.facingRight)
	{
		ac.characterRightDraw(ac.x, ac.y, buffer);
	}
	else
	{
		ac.characterLeftDraw(ac.x, ac.y, buffer);
	}

	draw::drawBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
}

void drawStage1::stage1FutureBossDraw(std::vector<char>& buffer)
{
	draw::drawBuffer(draw::buffer_empty, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
	draw::drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
}

void drawStage1::stage1PastBossDraw(std::vector<char>& buffer)
{
<<<<<<< HEAD
	draw::drawBuffer(draw::buffer_empty, SCREEN_WIDTH, SCREEN_HEIGHT, buffer, 0, 0, SCREEN_WIDTH);
	draw::drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
=======
	draw a;

	a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

>>>>>>> main
}