#pragma once
#include "character.h"
#include <windows.h>
#include <iostream>
#include "writeText.h"
class drawCharacter : public character
{
public:
	drawCharacter();
	void characterRightDraw(int x, int y, std::vector<char>& buffer);
	void characterRightJumpDraw(int x, int y, std::vector<char>& buffer);
	void characterLeftDraw(int x, int y, std::vector<char>& buffer);
	void characterLeftJumpDraw(int x, int y, std::vector<char>& buffer);
	void characterRightAttackDraw(int x, int y, std::vector<char>& buffer);
	void characterLeftAttackDraw(int x, int y, std::vector<char>& buffer);
	void characterErase(int x, int y, std::vector<char>& buffer);
	void characterAttackErase(int x, int y, std::vector<char>& buffer);
	void characterRightJumpAttackDraw(int x, int y, std::vector<char>& buffer);
	void characterLeftJumpAttackDraw(int x, int y, std::vector<char>& buffer);
	void characterHeartDraw(std::vector<char>& buffer);
	void characterInfo(std::vector<char>& buffer);
	void characterDraw(int x, int y, std::vector<char>& buffer);

};
