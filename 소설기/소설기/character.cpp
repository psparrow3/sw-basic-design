#include "character.h"
#include "conio.h"
#include "Windows.h"

#define blockSize 50

character::character()
{
	x = 0, y = 0;
}

void character::characterMove(int key)
{
	if (key == 32)
	{
		y += blockSize + 10;
	}

	if (key == 224)
	{
		key = _kbhit();

		switch (key)
		{
		case 72:
			// 문에서 들어가기
			break;
		case 75:
			x -= blockSize;
			break;
		case 77:
			x += blockSize;
			break;
		default:
			break;
		}
	}
}