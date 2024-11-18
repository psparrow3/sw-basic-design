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

    while (1) {


        wt.drawText(L"������ �ִ� ������ : ��", 1650, 600, 20, RGB(128, 128, 128), L"����ü");


        if (ac.nextStage)
        {
            Sleep(1000);
            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
            ac.x = 0;
            ac.y = 420;
            ac.nextStage = 0;
            break;
        }

        ac.characterErase(ac.x, ac.y, buffer);

        wt.drawText(L"����", 120, 200, 20, RGB(128, 128, 128), L"����ü");
        wt.drawText(L"�� ��ȯ", 210, 200, 20, RGB(128, 128, 128), L"����ü");
        wt.drawText(L"����", 460, 200, 20, RGB(128, 128, 128), L"����ü");
        wt.drawText(L"����", 917, 200, 20, RGB(128, 128, 128), L"����ü");
        wt.drawText(L"������", 1057, 200, 20, RGB(128, 128, 128), L"����ü");
        int coll = ac.collision(stage_prologue, ac.x, ac.y);

        a.drawBitmap("tutorial_building.bmp", buffer, 1226, 120, SCREEN_WIDTH);
        a.drawBitmap("A_button.bmp", buffer, 100, 60, SCREEN_WIDTH);
        a.drawBitmap("S_button.bmp", buffer, 200, 60, SCREEN_WIDTH);
        a.drawBitmap("SPACE_button.bmp", buffer, 400, 60, SCREEN_WIDTH);
        a.drawBitmap("left_button.bmp", buffer, 900, 60, SCREEN_WIDTH);
        a.drawBitmap("right_button.bmp", buffer, 1050, 60, SCREEN_WIDTH);
        a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);


        if (coll != 2 || coll != 10 || coll != 11 || coll != 12)

        {
            ac.gravity(stage_prologue, ac.x, ac.y);
        }

        ac.characterMove(stage_prologue, buffer);

        if (ac.facingRight)
        {


            if (ac.isJumping)
            {
                ac.characterRightJumpDraw(ac.x, ac.y, buffer);
            }
            else {
                ac.isJumping = 0;
                ac.characterRightDraw(ac.x, ac.y, buffer);
            }

        }
        else
        {
            if (ac.isJumping)
            {
                ac.characterLeftJumpDraw(ac.x, ac.y, buffer);
            }
            else {
                ac.isJumping = 0;
                ac.characterLeftDraw(ac.x, ac.y, buffer);
            }


        }

        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

        if (ac.collision(stage_prologue, ac.x, ac.y + 20) == 12 && checkHelpText == 0)
        {

            checkHelpText = 1;
        }
        if (ac.collision(stage_prologue, ac.x, ac.y + 20) == 10)
        {
            wt.drawText(L"'��'Ű�� ������ ������", 1700, 700, 20, RGB(128, 128, 128), L"����ü");
            wt.drawText(L"����", 1700, 720, 20, RGB(128, 128, 128), L"����ü");
        }


        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
  
    }
}