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
<<<<<<< HEAD
	draw::drawChThreadedWithoutBuffer(buffer, x, y, CHARACTER_WIDTH, CHARACTER_HEIGHT);
=======
    draw a;
    
    a.drawBitmap("character_right_original.bmp", buffer, x, y, SCREEN_WIDTH);
  
}

void drawCharacter::characterRightJumpDraw(int x, int y, std::vector<char>& buffer)
{
    draw a;
    a.drawBitmap("character_right_jump.bmp", buffer, x, y, SCREEN_WIDTH);
   
  
>>>>>>> main
}

void drawCharacter::characterLeftDraw(int x, int y, std::vector<char>& buffer)
{
<<<<<<< HEAD
	draw::drawChThreadedWithoutBuffer(buffer, x, y, CHARACTER_WIDTH, CHARACTER_HEIGHT);
=======
    draw a;
    a.drawBitmap("character_left_original.bmp", buffer, x, y, SCREEN_WIDTH);
  
}

void drawCharacter::characterLeftJumpDraw(int x, int y, std::vector<char>& buffer)
{
    draw a;
    a.drawBitmap("character_left_jump.bmp", buffer, x, y, SCREEN_WIDTH);
    
>>>>>>> main
}

void drawCharacter::characterErase(int x, int y, std::vector<char>& buffer)
{
<<<<<<< HEAD
	draw::drawChThreadedWithoutBuffer(buffer, x, y, CHARACTER_WIDTH, CHARACTER_HEIGHT);
}
=======
    draw a;

    a.drawBitmap("empty_character.bmp", buffer, x, y, SCREEN_WIDTH);

    switch (characterHeart)
    {
    case 0:
        a.drawBitmap("empty_heart.bmp", buffer, 1630, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1730, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1830, 250, SCREEN_WIDTH);
    case 1:
        a.drawBitmap("full_heart.bmp", buffer, 1630, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1730, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1830, 250, SCREEN_WIDTH);
        break;
    case 2:
        a.drawBitmap("full_heart.bmp", buffer, 1630, 250, SCREEN_WIDTH);
        a.drawBitmap("full_heart.bmp", buffer, 1730, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1830, 250, SCREEN_WIDTH);
        break;
    case 3:
        a.drawBitmap("full_heart.bmp", buffer, 1630, 250, SCREEN_WIDTH);
        a.drawBitmap("full_heart.bmp", buffer, 1730, 250, SCREEN_WIDTH);
        a.drawBitmap("full_heart.bmp", buffer, 1830, 250, SCREEN_WIDTH);
        break;
    default:
        break;
    }
}
>>>>>>> main
