#include "drawStage_prologue.h"
#include "writeText.h"
#include "draw.h"

drawStage_prologue::drawStage_prologue()
{

}

void drawStage_prologue::stagePrologueDraw(std::vector<char>& buffer) {
    drawCharacter ac;
    draw a;

    writeText wt;
  
    int checkHelpText = 0;
    bool attackCheck = 0;
  
    while (1){
        if (ac.nextStage)
        {
            Sleep(1000);
            a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
            ac.x = 0;
            ac.y = 410;
            ac.nextStage = 0;
            break;
        }

       
        if (ac.attacking)
        {
            ac.attacking = 0;
            ac.characterAttackErase(ac.x, ac.y, buffer);
        }
        else
        {
            ac.characterErase(ac.x, ac.y, buffer);
        }


        int coll = ac.collision(stage_prologue, ac.x, ac.y);

        

        if (coll != 2 || coll != 10 || coll != 11 || coll != 12)
        {
            ac.gravity(stage_prologue, ac.x, ac.y);
        }

  

        a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
        a.drawBitmap("tutorial_building.bmp", buffer, 1226, 120, SCREEN_WIDTH);
        a.drawBitmap("A_button.bmp", buffer, 100, 60, SCREEN_WIDTH);
        a.drawBitmap("S_button.bmp", buffer, 200, 60, SCREEN_WIDTH);
        a.drawBitmap("SPACE_button.bmp", buffer, 400, 60, SCREEN_WIDTH);
        a.drawBitmap("left_button.bmp", buffer, 900, 60, SCREEN_WIDTH);
        a.drawBitmap("right_button.bmp", buffer, 1050, 60, SCREEN_WIDTH);
        a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);


      
        ac.characterMove(stage_prologue, buffer);

        ac.characterDraw(buffer);

        if (ac.collision(stage_prologue, ac.x, ac.y+20) == 12 && checkHelpText == 0)
        {

            checkHelpText = 1;
        }

        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

        wt.drawText(L"가지고 있는 아이템:", 1650, 600, 20, RGB(128, 128, 128), L"굴림체");
        wt.drawText(L"공격", 120, 200, 20, RGB(128, 128, 128), L"굴림체");
        wt.drawText(L"맵 전환", 210, 200, 20, RGB(128, 128, 128), L"굴림체");
        wt.drawText(L"점프", 460, 200, 20, RGB(128, 128, 128), L"굴림체");
        wt.drawText(L"왼쪽", 917, 200, 20, RGB(128, 128, 128), L"굴림체");
        wt.drawText(L"오른쪽", 1057, 200, 20, RGB(128, 128, 128), L"굴림체");

        if (ac.collision(stage_prologue, ac.x, ac.y + 20) == 10)
        {
            wt.drawText(L"'↑'키를 눌러서 문으로", 1650, 700, 20, RGB(128, 128, 128), L"굴림체");
            wt.drawText(L"들어가자", 1700, 720, 20, RGB(128, 128, 128), L"굴림체");
        } 
    }
}