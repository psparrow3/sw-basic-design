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
void drawCharacter::characterDraw(int x, int y, std::vector<char>& buffer)
{
    draw a;
    a.drawBitmap("character_original.bmp", buffer, x, y, SCREEN_WIDTH);
}


void drawCharacter::characterEraese(int x,int y, std::vector<char>& buffer)
{
    draw a;
  
    a.drawBitmap("empty_character.bmp", buffer, x, y, SCREEN_WIDTH);

    
}