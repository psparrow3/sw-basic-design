#include "drawCharacter.h"
#include "character.h"
#include <windows.h>
#include <iostream>
#include "draw.h"
#include "conio.h"

//캐릭터를 그리는 함수
drawCharacter::drawCharacter()
{
}

std::vector<char> drawCharacter::characterRight;
std::vector<char> drawCharacter::characterLeft;
std::vector<char> drawCharacter::characterEmpty;

void drawCharacter::characterRightDraw(int x, int y, std::vector<char>& buffer)
{
	buffer = draw::drawCh(drawCharacter::characterRight, buffer, x, y, SCREEN_WIDTH);
}

void drawCharacter::characterLeftDraw(int x, int y, std::vector<char>& buffer)
{
	buffer = draw::drawCh(drawCharacter::characterLeft, buffer, x, y, SCREEN_WIDTH);
}

void drawCharacter::characterErase(int x, int y, std::vector<char>& buffer)
{
	buffer = draw::drawCh(drawCharacter::characterEmpty, buffer, x, y, SCREEN_WIDTH);
}