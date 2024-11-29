#include "drawStage2.h"

int drawStage2::stage2_future[12][20] =
{
	{0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,5,7,0,0,0,0,0,0,1,1,1,0,0,0,0,1,1,1,0},
	{1,1,1,0,0,0,0,0,0,7,0,7,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,5,0,0,7,0,7,0,0,0,0,0,0,0,1},
	{5,0,0,0,0,1,1,1,0,7,0,7,0,0,0,0,0,0,0,1},
	{1,0,0,0,1,7,0,0,0,7,0,7,0,0,0,0,0,4,0,1},
	{0,0,0,0,0,7,0,0,0,7,0,7,0,0,0,0,0,1,0,0},
	{0,0,0,0,0,7,0,0,0,7,0,7,0,0,0,0,1,1,0,0},
	{0,0,0,0,0,7,0,0,0,7,0,7,0,1,1,0,0,0,0,0},
	{0,0,5,0,1,1,0,0,1,1,0,1,1,0,0,0,0,0,0,0},
	{0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}

};

int drawStage2::stage2_past[12][20] =
{
	{0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,7,0,0,0,0,0,0,1,1,1,9,0,0,0,1,1,1,0},
	{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{0,0,0,0,0,1,1,1,0,0,5,0,0,1,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1,1,1,0,0,0,0,0,4,0,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}

};

int drawStage2::stage2_Future[25][40] =
{
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,2,11,11,2,0,0},
	   {0,0,14,14,0,8,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
	   {2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	   {0,0,0,0,0,0,0,0,0,0,0,0,14,14,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	   {0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	   {14,14,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	   {2,2,0,0,0,0,0,0,2,2,0,8,0,0,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,4,0,0,0,2,2},
	   {2,2,0,0,0,0,0,0,2,2,0,8,0,0,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	   {0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,8,0,0,0,8,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,8,0,0,0,8,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,8,0,0,0,8,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,14,14,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
};

int drawStage2::stage2_Past[25][40] =
{
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,11,11,2,2,0,0},
	   {0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,0,0,0,0,0,0,2,2,2,2,2,2,2,0,0},
	   {2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	   {0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,2,2},
	   {0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,14,14,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,2,2},
	   {2,2,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,4,0,0,0,2,2},
	   {2,2,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0},   
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
};

int drawStage2::stage2_Future_Boss[25][40] =
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
	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
};

int drawStage2::stage2_Past_Boss[25][40] =
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
	 {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
	 {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
};

void drawStage2::stage2Draw(std::vector<char>& buffer)
{
	draw a;
	drawCharacter ac;
	drawMovingBlock mb(1280,200);
	int movetime = 100;
	int stage[25][40];
	int keyGet = 0;
	writeText wt;
	int textX = 1650;

	int resetPastStage[25][40];
	int resetpastStage[12][20];
	int resetFutureStage[25][40];
	int resetfutureStage[12][20];

	memcpy(resetPastStage, stage2_Past, sizeof(stage2_Past));
	memcpy(resetpastStage, stage2_past, sizeof(stage2_past));
	memcpy(resetFutureStage, stage2_Future, sizeof(stage2_Future));
	memcpy(resetfutureStage, stage2_future, sizeof(stage2_future));

	while (1) {

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
				memcpy(stage2_Past, resetPastStage, sizeof(stage2_Past));
				memcpy(stage2_past, resetpastStage, sizeof(stage2_past));
				memcpy(stage2_Future, resetFutureStage, sizeof(stage2_Future));
				memcpy(stage2_future, resetfutureStage, sizeof(stage2_future));
			}
			character::characterHeart = 3;
			ac.isLeverPull = 0;
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			a.eraseBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);

			ac.x = 0;
			ac.y = 410;
			ac.facingRight = 1;

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

		int charactercoll = ac.collision(stage, ac.x, ac.y);
	
		if (charactercoll != 2 && charactercoll != 10 && charactercoll != 11 && charactercoll != 3 && charactercoll != 14 && charactercoll != 15) {


			ac.gravity(stage, ac.x, ac.y);
		}


		if (ac.getKey && keyGet == 0) {
			keyGet = 1;
			
			textX += 50;

			a.eraseBitmap("empty_block.bmp", buffer, 2 * 0 * BLOCK_SIZE, 2 * BLOCK_SIZE, SCREEN_WIDTH);
		}
		if (ac.getKey) {
			wt.drawText(L"열쇠", textX, 700, 20, RGB(128, 128, 128), L"굴림체");
			stage2_Future[12][34] = 0;
			stage2_Past[12][34] = 0;
			stage2_future[6][17] = 0;
			stage2_past[6][17] = 0;

		}
		if (ac.collision(stage, ac.x, ac.y+20) == 14)			//	스위치 제거
		{

			if (ac.x / 40 == 4) {					// 0번째 버튼

				stage2_Future[21][4] = 0;
				stage2_Future[21][5] = 0;
				stage2_future[10][2] = 0;

				for (int i = 0; i < 2; i++) {
					for (int j = 0; j < 2; j++) {
						stage2_Future[20+i][12+j] = 2;
					}
					
				}
				stage2_future[10][6] = 1;
			
			}
			if (ac.x / 40 == 12) {					// 1번째 버튼
				stage2_Future[9][12] = 0;
				stage2_Future[9][13] = 0;
				stage2_future[4][6] = 0;

				for (int i = 0; i < 2; i++) {
					for (int j = 0; j < 4; j++) {
						stage2_Future[14 + i][2 + j] = 2;
					}
				}
				stage2_future[7][1] = 1;
				stage2_future[7][2] = 1;

				stage2_Future[13][2] = 14;
				stage2_Future[13][3] = 14;
				stage2_future[6][1] = 6;			// 레이저 버튼 생성


			}
			
			if (ac.x / 40 == 0) {					// 2번째 버튼
				stage2_Future[11][0] = 0;
				stage2_Future[11][1] = 0;
				stage2_future[5][0] = 0;

				for (int i = 0; i < 2; i++) {
					for (int j = 0; j < 2; j++) {
						stage2_Future[4 + i][14 + j] = 2;
					}

				}
				stage2_future[2][7] = 1;
			}
			if (ac.x / 40 == 20) {					//3번째 버튼
				stage2_Past[11][20] = 0;
				stage2_Past[11][21] = 0;
				stage2_past[5][10] = 0;

				for (int i = 0; i < 2; i++) {
					for (int j = 0; j < 2; j++) {
						stage2_Past[8 + i][6 + j] = 2;
						stage2_Future[8 + i][6 + j] = 2;
					}

				}
				
				stage2_past[4][3] = 1;
				stage2_future[4][3] = 1;
			}
			
			
			if (ac.x / 40 == 2) {
				if (ac.y / 20 == 2) {			   // 4번째 버튼
					stage2_Future[5][2] = 0;
					stage2_Future[5][3] = 0;
					stage2_future[2][1] = 0;

					for (int i = 0; i < 2; i++) {
						for (int j = 0; j < 2; j++) {
							stage2_Future[4 + i][8 + j] = 2;
						}
					}
					stage2_future[2][4] = 1;
					stage2_future[2][4] = 1;

					stage2_Future[13][2] = 14;
					stage2_Future[13][3] = 14;
				}
				else {                            // 레이저 지우는 버튼
					stage2_Future[13][2] = 0;
					stage2_Future[13][3] = 0;
					stage2_future[6][1] = 0;

					for (int i = 0; i < 6; i++) {
						stage2_Future[i][5] = 0;
					}

					stage2_future[0][2] = 0;
					stage2_future[1][2] = 0;
					stage2_future[2][2] = 0;
				}
			}
			
		}
	
		if (ac.future)
		{
			memcpy(stage, stage2_Future, sizeof(stage2_Future));
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			drawStage2Future(buffer);
		}
		else
		{
			memcpy(stage, stage2_Past, sizeof(stage2_Past));

			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			drawStage2Past(buffer);
		}
		mb.movingBlockErase(buffer);
		mb.blockLocationErase(stage);
		if (movetime >= 2) {
			mb.blockMove();
			movetime = 0;
		}
		
	
		mb.blockLocation(stage);
		mb.movingBlockDraw(buffer);

		ac.characterMove(stage, buffer);
		if (ac.collision(stage, ac.x, ac.y+20) == 2) {
			if (ac.x > 1220 && ac.x < 1360 && ac.y>120 && ac.y <= 240) {
				ac.y -= 20;
			} 
		}
		if (ac.collision(stage, ac.x, ac.y-20) == 2) {
			if (ac.x > 1220 && ac.x < 1360 && ac.y>120 && ac.y <= 240) {
				ac.y += 20;
			}
		}
		ac.characterDraw(buffer);
		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
		wt.drawText(L"가지고 있는 아이템:", 1650, 600, 20, RGB(128, 128, 128), L"굴림체");
		movetime += 1;
	}
}

void drawStage2::drawStage2Future(std::vector<char>& buffer) {
	draw a;
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch (stage2_future[y][x]) {
			case 1:
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("button1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE+20, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("laser_length.bmp", buffer, 2 * x * BLOCK_SIZE+20, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 8:
				a.drawBitmap("laser_width.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE+10, SCREEN_WIDTH);
				break;
			
			}
		}
	}
	
	a.drawBitmap("door.bmp", buffer, 2 * 17 * BLOCK_SIZE, 20, SCREEN_WIDTH);
		
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
	
}

void drawStage2::drawStage2Past(std::vector<char>& buffer) {
	draw a;


	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			switch (stage2_past[y][x]) {
			case 1:
				a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 4:
				a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 5:
				a.drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
				break;
			case 6:
				a.drawBitmap("button1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 7:
				a.drawBitmap("laser_length.bmp", buffer, 2 * x * BLOCK_SIZE+20, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			case 8:
				a.drawBitmap("laser_width.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE+10, SCREEN_WIDTH);
				break;
			case 9:
				a.drawBitmap("bridge.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
				break;
			
			}
		}
	}
	
	a.drawBitmap("door.bmp", buffer, 2 * 17 * BLOCK_SIZE, 20, SCREEN_WIDTH);
		
	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
}

void drawStage2::stage2BossDraw(std::vector<char>& buffer)
{
	draw a;
	drawCharacter ac;
	Boss1 b;
	writeText wt;
	int stage[25][40];
	ac.facingRight = 1;
	ac.future = 1;
	ac.attacking = 0;

	int resetPastStage[25][40];
	int resetFutureStage[25][40];

	memcpy(resetPastStage, stage2_Past_Boss, sizeof(stage2_Past_Boss));
	memcpy(resetFutureStage, stage2_Future_Boss, sizeof(stage2_Future_Boss));

	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	int attackTime = rand() % 11 + 20;
	int changeTime = rand() % 11 + 20;

	int atimeCheck = 0;
	int ctimeCheck = 0;

	ac.y = 350;

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
			}

			if (ac.gameOverCheck)
			{
				ac.getKey = 0;
				memcpy(stage2_Past_Boss, resetPastStage, sizeof(stage2_Past_Boss));
				memcpy(stage2_Future_Boss, resetFutureStage, sizeof(stage2_Future_Boss));
			}
			character::characterHeart = 3;
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			a.eraseBitmap("empty_character.bmp", buffer, ac.x, ac.y, SCREEN_WIDTH);

			ac.x = 0;
			ac.y = 350;
			ac.facingRight = 1;
			ctimeCheck = 0;

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

		int charactercoll = ac.collision(stage, ac.x, ac.y);


		if (charactercoll != 2 && charactercoll != 10 && charactercoll != 11 && charactercoll != 3 && charactercoll != 14 && charactercoll != 15) {


			ac.gravity(stage, ac.x, ac.y);
		}
	
		if (atimeCheck > attackTime)
		{
			Boss2::Boss2Attack_laser(buffer);
			
			atimeCheck = 0;
			attackTime = rand() % 11 + 20;
		}

		if (ctimeCheck > changeTime)
		{
			Boss2::Boss2Attack_change();

			ctimeCheck = 0;
			changeTime = rand() % 11 + 20;
		}

		if (ac.future)
		{
			memcpy(stage, stage2_Future_Boss, sizeof(stage2_Future_Boss));
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			stage2FutureBossDraw(buffer);
		}
		else
		{
			memcpy(stage, stage2_Past_Boss, sizeof(stage2_Past_Boss));
			a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
			stage2PastBossDraw(buffer);
		}

		a.eraseBitmap("Empty_boss.bmp", buffer, 0, 0, SCREEN_WIDTH);

		if (Boss2::hp == 2)
		{
			a.drawBitmap("stage2_Boss_right.bmp", buffer, 1430, 260, SCREEN_WIDTH);
		}
		else if (Boss2::hp == 1)
		{
			a.drawBitmap("stage2_Boss_left.bmp", buffer, 0, 260, SCREEN_WIDTH);
		}

		ac.characterMove(stage, buffer);
		ac.characterDraw(buffer);
		a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
		wt.drawText(L"가지고 있는 아이템:", 1650, 600, 20, RGB(128, 128, 128), L"굴림체");

		atimeCheck++;
		ctimeCheck++;
	}
}

void drawStage2::stage2FutureBossDraw(std::vector<char>& buffer)
{
	draw a;

	a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);

	a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
	a.drawBitmap("bottom.bmp", buffer, 0, 460, SCREEN_WIDTH);

	for (int i = 0; i < 20; i++)
	{
		a.drawBitmap("block.bmp", buffer, i * 80, 420, SCREEN_WIDTH);
	}
}

void drawStage2::stage2PastBossDraw(std::vector<char>& buffer)
{
	draw a;

	a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
	a.drawBitmap("stage2_lava.bmp", buffer, 0, 460, SCREEN_WIDTH);
}
