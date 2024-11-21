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

void drawCharacter::characterRightDraw(int x, int y, std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("character_right_original.bmp", buffer, x, y, SCREEN_WIDTH);
}

void drawCharacter::characterRightJumpDraw(int x, int y, std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("character_right_jump.bmp", buffer, x, y, SCREEN_WIDTH);
}

void drawCharacter::characterLeftDraw(int x, int y, std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("character_left_original.bmp", buffer, x, y, SCREEN_WIDTH);
}

void drawCharacter::characterLeftJumpDraw(int x, int y, std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("character_left_jump.bmp", buffer, x, y, SCREEN_WIDTH);
}

void drawCharacter::characterRightAttackDraw(int x, int y, std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("character_right_attack.bmp", buffer, x, y, SCREEN_WIDTH);
}

void drawCharacter::characterLeftAttackDraw(int x, int y, std::vector<char>&buffer)
{

    draw a;
    a.drawBitmap("character_left_attack.bmp", buffer, x, y, SCREEN_WIDTH);

}
void  drawCharacter::characterRightJumpAttackDraw(int x, int y, std::vector<char>& buffer)
{
	draw a;
	a.drawBitmap("character_right_jump.bmp", buffer, x, y, SCREEN_WIDTH);
	a.drawBitmap("character_right_attack.bmp", buffer, x, y, SCREEN_WIDTH);
}

void  drawCharacter::characterLeftJumpAttackDraw(int x, int y, std::vector<char>& buffer)
{

    draw a;
    a.drawBitmap("character_left_jump.bmp", buffer, x+80, y, SCREEN_WIDTH);
    a.drawBitmap("character_left_attack.bmp", buffer, x, y, SCREEN_WIDTH);
  

}

void drawCharacter::characterErase(int x, int y, std::vector<char>& buffer)
{
	draw a;


    a.eraseBitmap("empty_character.bmp", buffer, x, y, SCREEN_WIDTH);

    
}
void drawCharacter::characterAttackErase(int x, int y, std::vector<char>& buffer)
{
    draw a;
    a.eraseBitmap("empty_character_attack.bmp", buffer, x, y, SCREEN_WIDTH);
   
}

void drawCharacter::characterHeartDraw(std::vector<char>& buffer)
{
    draw a;
    switch (character::characterHeart)
    {
    case 0:
        a.drawBitmap("empty_heart.bmp", buffer, 1630, 210, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1710, 210, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1790, 210, SCREEN_WIDTH);
    case 1:
        a.drawBitmap("full_heart.bmp", buffer, 1630, 210, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1710, 210, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1790, 210, SCREEN_WIDTH);
        break;
    case 2:
        a.drawBitmap("full_heart.bmp", buffer, 1630, 210, SCREEN_WIDTH);
        a.drawBitmap("full_heart.bmp", buffer, 1710, 210, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1790, 210, SCREEN_WIDTH);
        break;
    case 3:
        a.drawBitmap("full_heart.bmp", buffer, 1630, 210, SCREEN_WIDTH);
        a.drawBitmap("full_heart.bmp", buffer, 1710, 210, SCREEN_WIDTH);
        a.drawBitmap("full_heart.bmp", buffer, 1790, 210, SCREEN_WIDTH);
        break;
    default:
        break;
    }
}

void drawCharacter::characterInfo(std::vector<char>& buffer)
{
    draw a;
    writeText wt;
    if (future)
    {
        wt.drawText(L"현재", 1670, 40, 100, RGB(128, 128, 128), L"볼드체");
    }
    else
    {
        wt.drawText(L"과거", 1670, 40, 100, RGB(128, 128, 128), L"볼드체");
    }
    a.drawBitmap("status_informaition.bmp", buffer, 1600, 0, SCREEN_WIDTH);
}

void drawCharacter::characterDraw(int x, int y, std::vector<char>& buffer) 
{
    
    if (facingRight) {
        if (attacking && isJumping) {
            
            characterRightJumpAttackDraw(x, y, buffer); // 점프 그리기
        }
        else if (attacking) {          
            
           
          
            characterRightAttackDraw(x, y, buffer);
                
           
        }
        else if (isJumping) {
            characterRightJumpDraw(x, y, buffer); // 점프 동작 그리기
        }
        else {
            
            characterRightDraw(x, y, buffer); // 기본 오른쪽 이동 동작 그리기
        }

    }
    else { // facingLeft
        if (attacking && isJumping) {
          
            characterLeftJumpAttackDraw(x-80, y, buffer); 
        }
        else if (attacking) {
           
           
            characterLeftAttackDraw(x-80, y, buffer); 
        }
        else if (isJumping) {
            // 점프

            characterLeftJumpDraw(x, y, buffer); 
        }
        else {
          
            characterLeftDraw(x, y, buffer); 
        }
    }

    characterHeartDraw(buffer);
    characterInfo(buffer);
}

