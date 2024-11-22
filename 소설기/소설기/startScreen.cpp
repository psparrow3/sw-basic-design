#include "startScreen.h"
#include "Boss1.h"


void startScreen::drawStartScreen(std::vector<char>& buffer)
{
    draw a;
   
    while (1) {
        
     
        
      
        if (_kbhit()) {
         
            break;
        }
        a.drawBitmap("start_screen.bmp", buffer, 0, 0, SCREEN_WIDTH);
        
        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);

    }

    while (1) {
        if (_kbhit()) {

            break;
        }
        a.drawBitmap("chat_window_start.bmp", buffer, 0, 0, SCREEN_WIDTH);

        a.flushBuffer(buffer, SCREEN_WIDTH, SCREEN_HEIGHT);
    }
}