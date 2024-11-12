#include "character.h"
#include "conio.h"
#include "Windows.h"
#include "drawCharacter.h"
#include <iostream>
#include "draw.h"

int character::x = 40;
int character::y = 420;


character::character()
{


    facingRight = 1, future = 1;

    progress = 0;               // �����Ȳ
    playerHeart = 3;
    invincible = false;         //���� ����
    invincibilityDuration = 2000; // ���� �ð� (�и���,2��)
    nextStage = 0;
    isJumping = 0;            // ��������
    movingLeft = 0;
    movingRight = 0;
    jumping = 0;
    attackCoolTime = 1000;      //���� ��Ÿ�� (�и���,1��)

    getKey = 0;
    getSeed = 0;
    getSeedPiece = 0;
    attackRange = character_Width / 2;

}
void gameOver()
{

}
void character::characterLocation(int stage[25][40], int newX, int newY)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            int posX = newX/40 + i;
            int posY = newY/20 + j;

         

            if (posX >= 0 && posX < SCREEN_WIDTH && posY >= 0 && posY < SCREEN_HEIGHT)

            {
                stage[posY][posX] = 1;
            }
        }
    }
}

void character::eraseCharacterLocation(int stage[25][40], int preX, int preY)
{
    for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 25; j++) {
            if (stage[j][i] == 1) {
                stage[j][i] = 0;
            }
        }
    }
}

void character::getItem()
{

}

void character::takeDamage()
{

    if (!invincible) {  // �̹� ���� ���°� �ƴ϶�� ������ ����
        playerHeart -= 1;

        // �÷��̾ ������� �� �Ҹ����� ���
     /*   if (playerHeart == 0) {
           gameOver();
           return;
        }*/

        invincible = true;          // ���� ���·� ��ȯ
        Sleep(invincibilityDuration); // 2�� ���� ���
        invincible = false;         // ���� ���� ����
    }


}

void drawFutureMap()
{

}

void drawPastMap()
{

}

void character::switchMap()
{
    

    future = !future;
    /*if (future)
       drawFutureMap();
    else
       drawPastMap();*/
}

void character::attack()
{

    for (int i = 0; i < character_Height; i++)
    {

        for (int j = 0; j < attackRange; j++)
        {
            //if (player[j][i] == 1)
            //{
            //   int newX;
            //   int newY = y + i;
            //   if (facingRight)         // �÷��̾ �������� �� ��
            //   {
            //      newX = x + character_Width + j;
            //   }
            //   else
            //   // �÷��̾ ������ �� ��
            //   {
            //      newX = x - j;
            //   }
            //}

        }
    }

}

void character::characterMove(int stage[25][40], std::vector<char>& buffer)
{

   


    int preX = x;
    int preY = y;

    bool movingLeft = GetAsyncKeyState(VK_LEFT) & 0x8000;
    bool movingRight = GetAsyncKeyState(VK_RIGHT) & 0x8000;
    bool jumping = GetAsyncKeyState(VK_SPACE) & 0x8000;

    if (collision(stage, x, y) == 2 || collision(stage, x, y) == 10 || collision(stage, x, y)==11)
    {
        isJumping = 0;
    }
   
    if (GetAsyncKeyState('S') & 0x8000) 

    {
        switchMap();
    }

    if (GetAsyncKeyState('A') & 0x8000)
    {
        attack();
    }

    if (jumping && !isJumping)
    {
        isJumping = 0;

        for (int i = 0; i < 3; i++) {
            preY = y;


            y -= 20;
            if (collision(stage, x, y) == 2 || y < 0) {
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
        }
        progress++;

        // ������ ����;
    }
    if (movingLeft) {

        facingRight = 0;
        x -= 20;
        if (collision(stage, x, y) == 2 || x<0)
        {
            x = preX;
        }
    }
    if (movingRight) { 
        facingRight = 1;
        x += 20;

        if (collision(stage, x, y) == 2 || x>=1560)
        {
            x = preX;
        }
    }
    if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
        
        if (getSeed == 1) {

        }
        getSeed = 0;
    }
}

void character::gravity(int stage[25][40], int newX, int newY)
{
  
   
     y += 20;

    if (collision(stage, newX, y) == 2 || collision(stage, x, y) == 10 || collision(stage, x, y) == 11) {
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

            int posX = newX/40 + i;
            int posY = newY/20 + j;

            if (stage[posY][posX] == 2)
            {
                return 2;      //�ٴ�,õ��,�� �浹
            }
          
            else if (stage[posY][posX] == 3)
                return 3;      // �̴� ��
            else if (stage[posY][posX] == 4)
            {
                          
                return 4;           // ���� ŉ��
            }
            else if (stage[posY][posX] == 5)
            {
                return 5;               // ���� ŉ��
            }
            else if (stage[posY][posX] == 6)
            {
                return 6;               // ���� ���� ŉ��
            }

            else if (stage[posY][posX] == 7)
            {

                takeDamage();         //�Ϲ� ������ �¾��� ��
                return 7;            //���� ����� �����ʿ�
            }
            else if (stage[posY][posX] == 8)
            {
              /*  gameOver();*/            // ���⸦ �¾��� ��
                return 8;            
            }
            else if (stage[posY][posX] == 9)
            {
                return 9;               //���� �ɴ� �κ�
            }
            else if (stage[posY][posX] == 10)
            {
                return 10;               // �� ����
            }
           
            else if (stage[posY][posX] == 11 && getKey==1)
            {
                return 11;               // ��� �� ����
            }
            
            else if (stage[posY][posX] == 12)
            {
                return 12;               // ��ư ������
            }

            else if (stage[posY][posX] == 13)
            {
                return 13;               // ���� ����
            }

        }
    }
    return 0;


}