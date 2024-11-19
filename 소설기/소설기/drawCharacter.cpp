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
    a.drawBitmap("character_right_attack.bmp", buffer, x, y, SCREEN_WIDTH);
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
    a.drawBitmap("character_right_jump.bmp", buffer, x, y, SCREEN_WIDTH);
    a.drawBitmap("character_right_attack.bmp", buffer, x, y, SCREEN_WIDTH);
  
}

void drawCharacter::characterErase(int x, int y, std::vector<char>& buffer)
{
    draw a;

    a.drawBitmap("empty_character.bmp", buffer, x, y, SCREEN_WIDTH);

    switch (characterHeart)
    {
    case 0:
        a.drawBitmap("empty_heart.bmp", buffer, 1630, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1710, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1790, 250, SCREEN_WIDTH);
    case 1:
        a.drawBitmap("full_heart.bmp", buffer, 1630, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1710, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1790, 250, SCREEN_WIDTH);
        break;
    case 2:
        a.drawBitmap("full_heart.bmp", buffer, 1630, 250, SCREEN_WIDTH);
        a.drawBitmap("full_heart.bmp", buffer, 1710, 250, SCREEN_WIDTH);
        a.drawBitmap("empty_heart.bmp", buffer, 1790, 250, SCREEN_WIDTH);
        break;
    case 3:
        a.drawBitmap("full_heart.bmp", buffer, 1630, 250, SCREEN_WIDTH);
        a.drawBitmap("full_heart.bmp", buffer, 1710, 250, SCREEN_WIDTH);
        a.drawBitmap("full_heart.bmp", buffer, 1790, 250, SCREEN_WIDTH);
        break;
    default:
        break;
    }
}
void drawCharacter::characterAttackErase(int x, int y, std::vector<char>& buffer)
{
    draw a;
    a.drawBitmap("empty_character_attack.bmp", buffer, x, y, SCREEN_WIDTH);
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
          
            characterLeftJumpAttackDraw(x, y, buffer); // 점프 동작 그리기
        }
        else if (attacking) {
           
           
            characterLeftAttackDraw(x, y, buffer); // 공격 동작 그리기
        }
        else if (isJumping) {
            // 점프

            characterLeftJumpDraw(x, y, buffer); // 점프 동작 그리기
        }
        else {
          
            characterLeftDraw(x, y, buffer); // 기본 오른쪽 이동 동작 그리기
        }
    }
}