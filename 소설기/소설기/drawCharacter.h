#pragma once
#include "character.h"
#include <windows.h>
#include <iostream>
class drawCharacter : public character
{
public:
	drawCharacter();
<<<<<<< HEAD
	void characterRightDraw(int x,int y, std::vector<char>& buffer);
	void characterErase(int x,int y, std::vector<char>& buffer);
	void characterLeftDraw(int x, int y, std::vector<char>& buffer);
};

=======
	void characterRightDraw(int x, int y, std::vector<char>& buffer);
	void characterErase(int x, int y, std::vector<char>& buffer);
	void characterLeftDraw(int x, int y, std::vector<char>& buffer);
};
>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
