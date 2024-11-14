#include "drawStage_prologue.h"

#include "draw.h"


drawStage_prologue::drawStage_prologue()
{

}
void drawStage_prologue::stagePrologueDraw(std::vector<char>& buffer) {
    drawCharacter ac;
    draw a;
  

    while (1) {
        

        
        if (ac.nextStage)
        {
            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);

            break;
        }
        // 캐릭터 이전 위치 지우기
        ac.characterErase(ac.x, ac.y, buffer);


       
      
        if (ac.future)
        {

            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
            a.drawBitmap("tutorial_building.bmp", buffer, 1200, 120, SCREEN_WIDTH);
            a.drawBitmap("A_button.bmp", buffer, 100, 60, SCREEN_WIDTH);
            a.drawBitmap("S_button.bmp", buffer, 200, 60, SCREEN_WIDTH);
            a.drawBitmap("SPACE_button.bmp", buffer, 400, 60, SCREEN_WIDTH);
            a.drawBitmap("left_button.bmp", buffer, 900, 60, SCREEN_WIDTH);
            a.drawBitmap("right_button.bmp", buffer, 1050, 60, SCREEN_WIDTH);
            a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
        }
        else
        {
            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
            a.drawBitmap("tutorial_building.bmp", buffer, 1200, 120, SCREEN_WIDTH);
            a.drawBitmap("A_button.bmp", buffer, 100, 60, SCREEN_WIDTH);
            a.drawBitmap("S_button.bmp", buffer, 200, 60, SCREEN_WIDTH);
            a.drawBitmap("SPACE_button.bmp", buffer, 400, 60, SCREEN_WIDTH);
            a.drawBitmap("left_button.bmp", buffer, 900, 60, SCREEN_WIDTH);
            a.drawBitmap("right_button.bmp", buffer, 1050, 60, SCREEN_WIDTH);
            a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
        }



        int coll = ac.collision(stage_prologue, ac.x, ac.y);
        
        if (coll != 2 || coll != 10 || coll != 11) 
        {
            ac.gravity(stage_prologue, ac.x, ac.y);
        }
        // 캐릭터 이동
        ac.characterMove(stage_prologue, buffer);
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