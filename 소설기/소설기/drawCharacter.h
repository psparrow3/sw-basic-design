#pragma once
#include "character.h"
#include <windows.h>
#include <iostream>

#define SCREEN_WIDTH 1902
#define SCREEN_HEIGHT 500

using namespace std;

class drawCharacter : public character
{
public:
	drawCharacter();
	void characterRightDraw(int x,int y, std::vector<char>& buffer);
	void characterErase(int x,int y, std::vector<char>& buffer);
	void characterLeftDraw(int x, int y, std::vector<char>& buffer);
	static vector<char> characterRight;
	static vector<char> characterLeft;
	static vector<char> characterEmpty;
};
