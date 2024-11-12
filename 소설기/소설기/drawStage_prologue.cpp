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

        if (ac.future)
        {

            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
            a.drawBitmap("tutorial_building.bmp", buffer, 1200, 120, SCREEN_WIDTH);
            a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
        }
        else
        {
            a.drawBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
            a.drawBitmap("tutorial_building.bmp", buffer, 1200, 120, SCREEN_WIDTH);
            a.drawBitmap("bottom.bmp", buffer, 0, 480, SCREEN_WIDTH);
        }



        // ĳ���� ���� ��ġ �����
        ac.characterErase(ac.x, ac.y, buffer);

        // ĳ���� ��ġ ������Ʈ
        if (ac.collision(stage_prologue, ac.x, ac.y) != 2 || ac.collision(stage_prologue, ac.x, ac.y) != 10) {
            ac.gravity(stage_prologue, ac.x, ac.y);
        }
        // ĳ���� �̵�
        ac.characterMove(stage_prologue, buffer);
        if (ac.facingRight)
        {

            ac.characterRightDraw(ac.x, ac.y, buffer);
        }
        else
        {

            ac.characterLeftDraw(ac.x, ac.y, buffer);
        }
       

        // ����� backbuffer�� ȭ�鿡 ���
        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);


    }

	

	
}