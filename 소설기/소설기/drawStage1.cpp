#include "drawStage1.h"
#include "drawStage.h"
#include "draw.h"

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
            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
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

  
        // ĳ���� ���� ��ġ �����
        ac.characterErase(ac.x, ac.y, buffer);

        // ĳ���� ��ġ ������Ʈ
        int coll = ac.collision(stage, ac.x, ac.y);
        if (coll != 2 || coll != 10 || coll !=11) {
            ac.gravity(stage, ac.x, ac.y);
        }
        // ĳ���� �̵�
        ac.characterMove(stage, buffer);
        if (ac.facingRight)
        {
            ac.characterRightDraw(ac.x, ac.y, buffer);
        }
        else
        {
            ac.characterLeftDraw(ac.x, ac.y, buffer);
        }
        if (ac.future)
        {
           
            a.drawBitmap("broken_door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
        }
        else
        {
            if (!ac.getSeed) {
                a.drawBitmap("seed.bmp", buffer, 2 * 17 * BLOCK_SIZE, 3 * BLOCK_SIZE, SCREEN_WIDTH);
               
            }
            else {
                stage1_Past[6][34] = 0;
            }
            
            a.drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
        }
        if (!ac.getKey) {
            a.drawBitmap("key.bmp", buffer, 0, 2 * BLOCK_SIZE, SCREEN_WIDTH);
        }
        else {
            stage1_Past[4][1] = 0;
            stage1_Future[4][1] = 0;
        }
       
        // ����� backbuffer�� ȭ�鿡 ���
        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
    }
 
}
void drawStage1::drawStage1Future(std::vector<char>& buffer) {
    draw a;

    drawCharacter ac;
    
    

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
}
   
   


void drawStage1::drawStage1Past(std::vector<char>& buffer) {
    draw a;

    drawCharacter ac;
    // stage1_past �迭 ������� ���� �׸�
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
            }
        }
    }

    a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
}