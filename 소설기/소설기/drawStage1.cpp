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


        // 캐릭터 이전 위치 지우기
        ac.characterErase(ac.x, ac.y, buffer);

        // 캐릭터 위치 업데이트
        if (ac.collision(stage, ac.x, ac.y) != 2 || ac.collision(stage, ac.x, ac.y) != 9) {
            ac.gravity(stage, ac.x, ac.y);
        }
        // 캐릭터 이동
        ac.characterMove(stage, buffer);
        if (ac.facingRight)
        {

            ac.characterRightDraw(ac.x, ac.y, buffer);
        }
        else
        {

            ac.characterLeftDraw(ac.x, ac.y, buffer);
        }


        // 변경된 backbuffer를 화면에 출력
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
                a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
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

    // 도어 그리기
    a.drawBitmap("broken_door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
    a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);

   
   
}

void drawStage1::drawStage1Past(std::vector<char>& buffer) {
    draw a;

    // stage1_past 배열 기반으로 맵을 그림
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
                a.drawBitmap("key.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
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
                a.drawBitmap("seed.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            case 9:
                a.drawBitmap("lever_right.bmp", buffer, 2 * x * BLOCK_SIZE, y * BLOCK_SIZE, SCREEN_WIDTH);
                break;
            }
        }
    }

    // 도어 그리기
    a.drawBitmap("door.bmp", buffer, 2 * 19 * BLOCK_SIZE, BLOCK_SIZE - 20, SCREEN_WIDTH);
}