#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include "drawStage.h"

void drawStage::SetConsoleSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD bufferSize;
    bufferSize.X = width;
    bufferSize.Y = height;
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    SMALL_RECT windowSize;
    windowSize.Left = 0;
    windowSize.Top = 0;
    windowSize.Right = width - 1;
    windowSize.Bottom = height - 1;
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
}

void drawStage::SetConsoleFontSize(int fontSize) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;           // 자동 조정
    cfi.dwFontSize.Y = fontSize;    // 폰트 크기
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
}

char drawStage::getASCIIChar(unsigned char brightness) {
    if (brightness > 240) return ' ';
    else if (brightness > 230) return '.';
    else if (brightness > 220) return ',';
    else if (brightness > 210) return '-';
    else if (brightness > 200) return '*';
    else if (brightness > 190) return ':';
    else if (brightness > 180) return 'o';
    else if (brightness > 170) return '!';
    else if (brightness > 160) return '&';
    else if (brightness > 150) return '8';
    else if (brightness > 130) return '#';
    else if (brightness > 110) return 'M';
    else if (brightness > 90) return 'W';
    else if (brightness > 70) return 'B';
    else if (brightness > 50) return '8';
    else if (brightness > 30) return '%';
    else if (brightness > 10) return '#';
    else return '@';  // For very low brightness
}

void drawStage::drawBitmap(const char* filename, std::vector<char>&buffer, int startX, int startY, int screenWidth) {
    std::ifstream file(filename, std::ios::binary);

    if (!file) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    BitmapFileHeader fileHeader;
    BitmapInfoHeader infoHeader;

    file.read(reinterpret_cast<char*>(&fileHeader), sizeof(fileHeader));
    file.read(reinterpret_cast<char*>(&infoHeader), sizeof(infoHeader));

    if (fileHeader.fileType != 0x4D42) {
        std::cerr << "Not a BMP file!" << std::endl;
        return;
    }

    int rowSize = ((infoHeader.width * infoHeader.bitCount + 31) / 32) * 4;
    int imageSize = rowSize * infoHeader.height;

    std::vector<uint8_t> bitmapData(imageSize);
    file.seekg(fileHeader.offsetData, file.beg);
    file.read(reinterpret_cast<char*>(bitmapData.data()), bitmapData.size());
    file.close();

    // Buffer에 모든 픽셀을 그립니다.
    for (int y = 0; y < infoHeader.height; ++y) {
        for (int x = 0; x < infoHeader.width; ++x) {
            int index = (x + (infoHeader.height - 1 - y) * infoHeader.width) * 3;
            unsigned char blue = bitmapData[index];
            unsigned char green = bitmapData[index + 1];
            unsigned char red = bitmapData[index + 2];
            unsigned char brightness = static_cast<unsigned char>(0.3 * red + 0.59 * green + 0.11 * blue);

            // Buffer에 문자 추가
            int bufferIndex = (startY + y) * screenWidth + (startX + x * 2);
            buffer[bufferIndex] = getASCIIChar(brightness);
        }
    }
}

void drawStage::flushBuffer(const std::vector<char>& buffer, int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { 0, 0 };
    SetConsoleCursorPosition(hConsole, pos);
    for (int y = 0; y < height; ++y) {
        std::cout.write(&buffer[y * width], width);
    }
}
