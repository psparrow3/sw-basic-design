#pragma once
#include "character.h"
#include <windows.h>
#include <iostream>
class drawCharacter : public character
{
public:
	drawCharacter();
	void characterDraw(int x,int y, std::vector<char>& buffer);
	void characterEraese(int x,int y, std::vector<char>& buffer);
};

