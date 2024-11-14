#include "drawStage1.h"
#include "drawStage.h"
#include "draw.h"

int drawStage1::stage1_Future[25][40]
{  
   {0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,4,0,0,2,2,2,2,2,2,0,0,0,0,0,0,3,3,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,3,3,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,3,3,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,3,3,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,2,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0},
   {0,0,0,0,2,2,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};
int drawStage1::stage1_Past[25][40]
{
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,11,11},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
   {2,2,2,2,8,8,8,8,8,8,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,0,0,5,0,2,2,0,0},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,2,2,2,2,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,2,2,0,0,2,2,2,2,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {2,2,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {2,2,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,3,3,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,3,3,0,0,0,0,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0},
   {0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,2,2,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,2,2,2,2,2},
   {0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,2,2},
   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};

drawStage1::drawStage1()
{
   
}

void drawStage1::stage1Draw(std::vector<char>& buffer)
{
    draw a;
    
    drawCharacter ac;
    int stage[25][40];
   

    
    while (1) {
        
        if (ac.nextStage)
        {
            a.drawBitmap("enter_door", buffer, ac.x, ac.y, SCREEN_WIDTH);
            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
            
            Sleep(1000);
           
            ac.gameOverCheck = 0;

            break;
        }
       
        if (ac.future)
        {
            memcpy(stage, stage1_Future, sizeof(stage1_Future));
            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
            drawStage1Future(buffer);
        }
        else 
        {
            memcpy(stage, stage1_Past, sizeof(stage1_Past));
            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
            drawStage1Past(buffer);
        }

        ac.characterErase(ac.x, ac.y, buffer);

      
       
        int coll = ac.collision(stage, ac.x, ac.y);
        if (coll != 2 || coll != 10 || coll !=11 || coll != 3) {
            ac.gravity(stage, ac.x, ac.y);
        }
        if (ac.collision(stage, ac.x, ac.y) == 3) {
          
           
        }
        ac.characterMove(stage, buffer);
        if (ac.facingRight)
        {
            if (ac.isJumping) {
                ac.characterRightJumpDraw(ac.x, ac.y, buffer);
            }
            else {
                ac.characterRightDraw(ac.x, ac.y, buffer);
            }
           
        }
        else
        {
            if (ac.isJumping) {
                ac.characterLeftJumpDraw(ac.x, ac.y, buffer);
            }
            else {
                ac.characterLeftDraw(ac.x, ac.y, buffer);
            }

        }
        if (ac.future)
        {
           
        }
        else
        {
            if (!ac.getSeed) {
                a.drawBitmap("seed.bmp", buffer, 2 * 17 * BLOCK_SIZE, 3 * BLOCK_SIZE, SCREEN_WIDTH);
               
            }
            else {
                stage1_Past[6][34] = 0;
            }
        }
        if (!ac.getKey) {
            a.drawBitmap("key.bmp", buffer, 0, 2 * BLOCK_SIZE, SCREEN_WIDTH);
        }
        else {
            stage1_Past[4][1] = 0;
            stage1_Future[4][1] = 0;
        }
       
        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
    }
 
}
void drawStage1::drawStage1Future(std::vector<char>& buffer) {
    draw a;


    
    

    for (int y = 0; y < 12; y++) {
        for (int x = 0; x < 20; x++) {
            switch (stage1_future[y][x]) {
            case 1:
                
                a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 2:
                a.drawBitmap("cold_lava.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 3:
                a.drawBitmap("movable_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 4:
                break;
            case 5:
                a.drawBitmap("button2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
                break;
            case 6:
                a.drawBitmap("laser1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 7:
                a.drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            }
        }
    }   
    a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
    a.drawBitmap("broken_door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
}
   
void drawStage1::drawStage1Past(std::vector<char>& buffer) {
    draw a;

   
    
    for (int y = 0; y < 12; y++) {
        for (int x = 0; x < 20; x++) {
            switch (stage1_past[y][x]) {
            case 1:
                a.drawBitmap("block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 2:
                a.drawBitmap("lava2.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 3:
                a.drawBitmap("movable_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 4:
                break;
            case 5:
                a.drawBitmap("button1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE + 20, SCREEN_WIDTH);
                break;
            case 6:
                a.drawBitmap("laser1.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 7:
                a.drawBitmap("triangle_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 8:

                break;
            case 9:
                a.drawBitmap("lever_right.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;

            case 10:
                a.drawBitmap("seed_block.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE-15, SCREEN_WIDTH);
                break;
            }
        }
    }
    a.drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
    a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
}