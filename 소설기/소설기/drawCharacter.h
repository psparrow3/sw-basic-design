#pragma once
#include "character.h"
#include <windows.h>
#include <iostream>
class drawCharacter : public character
{
public:
	drawCharacter();
	void characterRightDraw(int x,int y, std::vector<char>& buffer);
	void characterRightJumpDraw(int x, int y, std::vector<char>& buffer);
	void characterLeftDraw(int x, int y, std::vector<char>& buffer);
	void characterLeftJumpDraw(int x, int y, std::vector<char>& buffer);

	void characterErase(int x, int y, std::vector<char>& buffer);
};
