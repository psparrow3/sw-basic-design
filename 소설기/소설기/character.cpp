#include "character.h"
#include "conio.h"
#include "Windows.h"
#include "drawCharacter.h"
#include <iostream>
#include "draw.h"
character::character()
{


    x = 40, y = 400, facingRight = 1, future = 1;

    playerHeart = 3;
    invincible = false;         //���� ����
    invincibilityDuration = 2000; // ���� �ð� (�и���,2��)
    nextStage = 0;
    isJumping = 0;            // ��������
    movingLeft = 0;
    movingRight = 0;
    jumping = 0;
    attackCoolTime = 1000;      //���� ��Ÿ�� (�и���,1��)
  
    attackRange = character_Width / 2;

}
void gameOver()
{

}

<<<<<<< HEAD
void character::characterLocation(int stage[24][40],int newX,int newY)
{
   
=======
void character::characterLocation(int stage[24][40], int newX, int newY)
{

>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

<<<<<<< HEAD
            int posX = newX/40 + i;
            int posY = newY/20 + j;

            if (posX >= 0 && posX < SCREEN_WIDTH && posY >= 0 && posY < SCREEN_HEIGHT) 
=======
            int posX = newX / 40 + i;
            int posY = newY / 20 + j;

            if (posX >= 0 && posX < SCREEN_WIDTH && posY >= 0 && posY < SCREEN_HEIGHT)
>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
            {
                stage[posY][posX] = 1;
            }
        }
    }
}

void character::eraseCharacterLocation(int stage[24][40], int preX, int preY)
{
    for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 24; j++) {
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
    system("cls");

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

void character::characterMove(int stage[24][40], std::vector<char>& buffer)
{

    drawCharacter ac;



    int preX = x;
    int preY = y;

    bool movingLeft = GetAsyncKeyState(VK_LEFT) & 0x8000;
    bool movingRight = GetAsyncKeyState(VK_RIGHT) & 0x8000;
    bool jumping = GetAsyncKeyState(VK_SPACE) & 0x8000;

<<<<<<< HEAD
    
=======

>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
    if (collision(stage, x, y) == 2 || collision(stage, x, y) == 9)
    {
        isJumping = 0;
    }

<<<<<<< HEAD
    if (GetAsyncKeyState('S') & 0x8000) 
=======
    if (GetAsyncKeyState('S') & 0x8000)
>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
    {
        switchMap();
    }

    if (GetAsyncKeyState('A') & 0x8000)
    {
        attack();
    }

    if (jumping && !isJumping)
    {
        isJumping = 1;
<<<<<<< HEAD
        for (int i = 0; i < 3; i++) {
            preY = y;
            
        
            y -= 20;
            if (collision(stage, x, y) == 4) {
                y=preY;
                break;
            }
           

        }
    }
=======
        y -= blockSize + 20;


        if (collision(stage, x, y) == 4)
        {

            y = preY;

        }
    }

    if (GetAsyncKeyState(VK_UP) & 0x8000) {

        if (collision(stage, x, y + 20) == 9) {
            nextStage = 1;
            system("cls");
        }

        // ������ ����;
    }
    if (movingLeft) {

        facingRight = !facingRight;
        x -= 20;
        if (collision(stage, x, y) == 3)
        {
            x = preX;
        }


    }
    if (movingRight) {
        facingRight = 1;
        x += 20;

        if (collision(stage, x, y) == 3)
        {
            x = preX;
        }
    }
    if (GetAsyncKeyState(VK_DOWN) & 0x8000) {

        // ���� �ɱ�
    }

>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2

    if (GetAsyncKeyState(VK_UP) & 0x8000) {

        if (collision(stage, x, y+20) == 9) {
            nextStage = 1;
            system("cls");
        }

        // ������ ����;
    }
    if (movingLeft) {

        facingRight = !facingRight;
        x -= 20;
        if (collision(stage, x, y) == 3)
        {
            x = preX;
        }


    }
    if (movingRight) {
        facingRight = 1;
        x += 20;
        
        if (collision(stage, x, y) == 3)
        {
            x = preX;
        }
    }
    if (GetAsyncKeyState(VK_DOWN) & 0x8000){
       
            // ���� �ɱ�
    }
   
   

}

void character::gravity(int stage[24][40], int newX, int newY)
{
<<<<<<< HEAD
    
  
    y += 20;
       
=======


    y += 20;

>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2
    if (collision(stage, newX, y) == 2 || collision(stage, newX, y) == 9) {
        y = newY;
        isJumping = 0;
        return;
    }
<<<<<<< HEAD
=======





>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2

}

int character::collision(int stage[24][40], int newX, int newY)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

<<<<<<< HEAD
            int posX = newX/40 + i;
            int posY = newY/20 + j;
=======
            int posX = newX / 40 + i;
            int posY = newY / 20 + j;
>>>>>>> e3383e25dcb0cc0b15786ad9f34fbf609d48afd2

            if (stage[posY][posX] == 2)
            {
                return 2;      //�ٴڿ� �浹
            }
            else if (stage[posY][posX] == 3)
                return 3;      //���� �浹
            else if (stage[posY][posX] == 4)
                return 4;      //õ�忡 �浹
            else if (stage[posY][posX] == 5)
            {
                getItem();            //������ ŉ��
                return 5;            //������ ����� �����ʿ�
            }
            else if (stage[posY][posX] == 6)
            {

                takeDamage();         //�Ϲ� ������ �¾��� ��
                return 6;            //���� ����� �����ʿ�
            }
            else if (stage[posY][posX] == 7)
            {
                //gameOver();            // ���⸦ �¾��� ��
                //return 7;            
            }
            else if (stage[posY][posX] == 8)
            {
                return 8;               //���� �ɴ� �κ�
            }
            else if (stage[posY][posX] == 9)
            {
                return 9;               // �� ����
            }
            else if (stage[posY][posX] == 10)
            {
                // ���� 
                return 10;
            }

        }
    }
    return 0;


}