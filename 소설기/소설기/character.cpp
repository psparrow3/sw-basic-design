#include "character.h"
#include "conio.h"
#include "Windows.h"
#include "drawCharacter.h"
#include <iostream>
#include "draw.h"

int character::x = 40;
int character::y = 420;

int	character::progress = 0;							// 진행상황
bool character::gameOverCheck = 0;

character::character()
{
	
    facingRight = 1, future = 1;

    seedPlant = 0;
    characterHeart = 3;
    invincible = false;
    invincibilityDuration = 2000;
    nextStage = 0;
    isJumping = 0;
    movingLeft = 0;
    movingRight = 0;
    jumping = 0;

    attackCoolTime = 1000;      //공격 쿨타임 (밀리초,1초)


    getKey = 0;
    getSeed = 0;
    getSeedPiece = 0;
    attackRange = 1;            // 공격 사거리

}

void character::gameOver(std::vector<char>& buffer)
{

    draw a;
    gameOverCheck = 1;
    x = 40;
    y = 420;
  
}

void character::getItem()
{

}

void character::takeDamage()
{
    if (!invincible) {
        characterHeart -= 1;

		/*   if (playerHeart == 0) {
	   gameOver();
	   return;
	}*/

		invincible = true;
		Sleep(invincibilityDuration);
		invincible = false;
	}
}

void character::switchMap()
{
	future = !future;
}

void character::attack(int stage[25][40])
{   
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j <= attackRange; j++)
		{
			int newX= x / 40 + j;
			int newY = y / 20 + i;

			if (facingRight) {
				int newX = x / 40 + j;
			}
			else {
				int newX = x / 40 - j - 1;
			}
			stage[newY][newX] = 1;
		}
	}
}

void character::characterMove(int stage[25][40], std::vector<char>& buffer)
{

    drawCharacter ac;
    int preX = x;
    int preY = y;

    movingLeft = GetAsyncKeyState(VK_LEFT) & 0x8000;
    movingRight = GetAsyncKeyState(VK_RIGHT) & 0x8000;
    jumping = GetAsyncKeyState(VK_SPACE) & 0x8000;
    bool sPress = GetAsyncKeyState('S') & 0x8000;
    bool aPress = GetAsyncKeyState('A') & 0x8000;
    
    
   
    if (collision(stage, x, y) == 2 || collision(stage, x, y) == 10 || collision(stage, x, y) == 11 || collision(stage, x, y) == 3)
    {
        isJumping = 0;
    }

	
    if (aPress)
    {
        attack(stage);
    }

	if (sPress) 
	{
		switchMap();
	}

	
	

    if (jumping && !isJumping)
    {
        isJumping = 1;
      
        for (int i = 0; i < 4; i++) {
            preY = y;

            
            y -= 20;
            if (collision(stage, x, y) == 2 || y < 0 || collision(stage, x, y) == 3) {
                y = preY;
                break;
            }
         

        }
    }

    if (GetAsyncKeyState(VK_UP) & 0x8000) {

        if (collision(stage, x, y+20) == 10) {

           
            nextStage = 1;
            x = 40;
            y = 420;
            progress++;
           
        }
        if (collision(stage, x, y + 20) == 11 && getKey == 1) {
            
            nextStage = 1;
            x = 40;
            y = 420;
            getKey = 0;
            progress++;
          
        }
        

     
    }
    if (movingLeft) {

        facingRight = 0;
        x -= 20;
        if (collision(stage, x, y) == 2 || x<0 || collision(stage, x, y) == 3)
        {
            x = preX;
        }
    }
    if (movingRight) { 
        facingRight = 1;
        x += 20;

        if (collision(stage, x, y) == 2 || x>=1540 || collision(stage, x, y) == 3)
        {
            x = preX;
        }
    }
    if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
        if (collision(stage, x, y + 20) == 9) {
            if (getSeed == 1) {
                seedPlant = 1;
                getSeed = 0;
            }
        }
       
    }
    if (collision(stage, x, y) == 4) {
        getKey = 1;
    }
    if (collision(stage, x, y) == 5) {
        getSeed = 1;
    }
    if (collision(stage, x, y) == 2 || collision(stage, x, y)== 8 || collision(stage, x, y) == 3)
    {
        
        gameOver(buffer);
    }

}

void character::gravity(int stage[25][40], int newX, int newY)
{

   
     y += 20;
    int coll = collision(stage, newX, y);
    if (coll == 2 || coll==10 || coll==11 || coll==9 || coll==3) {
        y = newY;
        isJumping = 0;
        return;
    }


}

int character::collision(int stage[25][40], int newX, int newY)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int posX = newX / 40 + i;
            int posY = newY / 20 + j;



          

            if (stage[posY][posX] == 2)
            {
                return 2;      // 블럭 충돌 처리
            }

            else if (stage[posY][posX] == 3)
                return 3;      // 미는 블럭 처리
            else if (stage[posY][posX] == 4)
            {

                return 4;           // 열쇠 흭득
            }
            else if (stage[posY][posX] == 5)
            {
                return 5;               // 씨앗
            }
            else if (stage[posY][posX] == 6)
            {
                return 6;               // 씨앗 조각
            }

            else if (stage[posY][posX] == 7)
            {

                takeDamage();
                return 7;            // 피해 입음
            }
            else if (stage[posY][posX] == 8)
            {

                return 8;            // 즉사기
            }

            else if (stage[posY][posX] == 9)
            {
                return 9;               // 씨앗 심는 곳
            }
            else if (stage[posY][posX] == 10)
            {
                return 10;               // 문 들어가기
            }

            else if (stage[posY][posX] == 11)
            {
                return 11;               // 잠긴 문 들어가기
            }

            else if (stage[posY][posX] == 12)
            {
                return 12;               // 도움말 부분
            }

            else if (stage[posY][posX] == 13)
            {
                return 13;               // 보스 넘어갈때 부분
            }

        }
    }




        return 0;
    }
        