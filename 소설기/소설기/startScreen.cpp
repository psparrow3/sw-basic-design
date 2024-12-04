#include "startScreen.h"

void startScreen::drawStartScreen(std::vector<char>& buffer)
{
    draw a;
    writeText wt;
    int i = 0;
    int k = 0;
   
    a.drawBitmap("start_screen.bmp", buffer, 50, 0, SCREEN_WIDTH);
    a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
    while (1) {
        
       
        if (i == 0) {
           
            if (_kbhit()) {
                a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
                a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
                char key = _getch();
                i = 1;
            }
        }
      

        if (i == 1) {
            while (_kbhit()) {
                _getch();
            }
            a.drawBitmap("peaceful_eden.bmp", buffer, 50, 0, SCREEN_WIDTH);
            a.drawBitmap("peaceful_eden_text.bmp", buffer, 10, 10, SCREEN_WIDTH);
            
            if (_kbhit()) {
                a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
                a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
                wt.drawText(L"±×·¯³ª", 800, 500, 100, RGB(128, 128, 128), L"±¼¸²Ã¼");
                Sleep(1000);
                char key = _getch();
               
                i = 2;
            }
        }

        if (i == 2) {
            while (_kbhit()) {
                _getch();
            }
            a.drawBitmap("destroyed_eden.bmp", buffer, 50, 0, SCREEN_WIDTH);
            a.drawBitmap("destroyed_eden_text.bmp", buffer, 20, 20, SCREEN_WIDTH);
         
            if (_kbhit()) {
                a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
                a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
                char key = _getch();
               
                i = 3;
            }
        }
        if (i == 3) {
            while (_kbhit()) {
                _getch();
            }
            a.drawBitmap("narration1.bmp", buffer, 80,50, SCREEN_WIDTH);
         

            if (_kbhit()) {
                a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
                a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
                char key = _getch();
                
                i = 4;
            }
            
        }
        if (i == 4) {
            while (_kbhit()) {
                _getch();
            }
            if (k == 0) {
                for (int i = 0; i < 100; i++) {

                    a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
                }
                k = 1;
            }
         
          
            wt.drawText(L"???:ºÎµð...¿¡µ§À» ÁöÄÑÁà...", 400, 500, 50, RGB(128, 128, 128), L"±¼¸²Ã¼");
            if (_kbhit()) {
                a.eraseBitmap("empty_map.bmp", buffer, 0, 0, SCREEN_WIDTH);
                a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
                char key = _getch();
                break;
            }
            
        }

        
        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    }

   
}