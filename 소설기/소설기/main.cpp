#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>

#define SCREEN_WIDTH 1902
#define SCREEN_HEIGHT 500

void SetConsoleSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD bufferSize = { static_cast<SHORT>(width), static_cast<SHORT>(height) };
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    SMALL_RECT windowSize = { 0, 0, static_cast<SHORT>(width - 1), static_cast<SHORT>(height - 1) };
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
}

void SetConsoleBufferSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD bufferSize = { static_cast<SHORT>(width), static_cast<SHORT>(height) };
    SetConsoleScreenBufferSize(hConsole, bufferSize);
}

void SetConsoleFontSize(int fontSize) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX cfi = { sizeof(cfi) };
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;         // Automatic width
    cfi.dwFontSize.Y = fontSize;  // Font height
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
}

#pragma pack(push, 1)
struct BitmapFileHeader {
    uint16_t fileType;
    uint32_t fileSize;
    uint16_t reserved1;
    uint16_t reserved2;
    uint32_t offsetData;
};

struct BitmapInfoHeader {
    uint32_t size;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bitCount;
    uint32_t compression;
    uint32_t sizeImage;
    int32_t xPixelsPerMeter;
    int32_t yPixelsPerMeter;
    uint32_t colorsUsed;
    uint32_t colorsImportant;
};
#pragma pack(pop)

char getASCIIChar(unsigned char brightness) {
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
    else if (brightness > 90)  return 'W';
    else if (brightness > 70)  return 'B';
    else if (brightness > 50)  return '8';
    else if (brightness > 30)  return '%';
    else if (brightness > 10)  return '#';
    else                       return '@';
}

void drawBitmap(const char* filename) {
    std::ifstream file(filename, std::ios::binary);

    if (!file) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    BitmapFileHeader fileHeader;
    BitmapInfoHeader infoHeader;

    file.read(reinterpret_cast<char*>(&fileHeader), sizeof(fileHeader));
    file.read(reinterpret_cast<char*>(&infoHeader), sizeof(infoHeader));

    // 파일 타입 확인 (BM인지 확인)
    if (fileHeader.fileType != 0x4D42) {
        std::cerr << "Not a BMP file!" << std::endl;
        return;
    }

    int bmpWidth = infoHeader.width;
    int bmpHeight = infoHeader.height;

    // 스케일을 계산하여 비율 유지 (min 대신 조건문 사용)
    double scaleX = static_cast<double>(50) / bmpWidth;
    double scaleY = static_cast<double>(50) / bmpHeight;
    double scale;

    if (scaleX < scaleY) {
        scale = scaleX;
    }
    else {
        scale = scaleY;
    }

    int scaledWidth = static_cast<int>(bmpWidth * scale);
    int scaledHeight = static_cast<int>(bmpHeight * scale);

    std::vector<uint8_t> bitmapData(bmpWidth * bmpHeight * 3);
    file.seekg(fileHeader.offsetData, file.beg);
    file.read(reinterpret_cast<char*>(bitmapData.data()), bitmapData.size());
    file.close();

    std::string buffer;

    // 비율이 유지된 상태로 출력
    for (int y = 0; y < scaledHeight; ++y) {
        for (int x = 0; x < scaledWidth; ++x) {
            int srcX = static_cast<int>(x / scale);
            int srcY = static_cast<int>(y / scale);
            int index = (srcX + (bmpHeight - 1 - srcY) * bmpWidth) * 3;

            unsigned char blue = bitmapData[index];
            unsigned char green = bitmapData[index + 1];
            unsigned char red = bitmapData[index + 2];
            unsigned char brightness = static_cast<unsigned char>(0.3 * red + 0.59 * green + 0.11 * blue);
            buffer += getASCIIChar(brightness);
            buffer += getASCIIChar(brightness);
        }
        buffer += "\n";
    }

    std::cout << buffer << std::endl;
}



int main() {
    SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    SetConsoleBufferSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    SetConsoleFontSize(1); // 필요한 경우 조정

    SetConsoleTitle(L"잃어버린 낙원");

    drawBitmap("block.bmp");

    getchar();
    return 0;
}
