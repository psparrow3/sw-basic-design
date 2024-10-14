#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>

#define SCREEN_WIDTH 1802
#define SCREEN_HEIGHT 450

void SetConsoleSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // 콘솔 화면 버퍼 크기를 설정합니다.
    COORD bufferSize;
    bufferSize.X = width;
    bufferSize.Y = height;
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    // 콘솔 창의 크기를 버퍼 크기와 동일하게 설정합니다.
    SMALL_RECT windowSize;
    windowSize.Left = 0;
    windowSize.Top = 0;
    windowSize.Right = width - 1;
    windowSize.Bottom = height - 1;
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
}

void SetConsoleBufferSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // 버퍼 크기를 설정합니다.
    COORD bufferSize;
    bufferSize.X = width;
    bufferSize.Y = height;

    // 버퍼 크기를 변경합니다.
    SetConsoleScreenBufferSize(hConsole, bufferSize);
}

void SetConsoleFontSize(int fontSize) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;           // 너비 (자동 조정)
    cfi.dwFontSize.Y = fontSize;    // 높이 (폰트 크기)
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
    else                       return '@';  // For very low brightness
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

    // BMP 파일의 이미지 크기 계산
    int rowSize = ((infoHeader.width * infoHeader.bitCount + 31) / 32) * 4;  // 각 줄의 크기를 4바이트 단위로 맞춤
    int imageSize = rowSize * infoHeader.height;

    // 비트맵 데이터 읽기
    std::vector<uint8_t> bitmapData(imageSize);
    file.seekg(fileHeader.offsetData, file.beg);
    file.read(reinterpret_cast<char*>(bitmapData.data()), bitmapData.size());
    file.close();

    // 버퍼에 모아서 한 번에 출력
    std::string buffer;

    // 이미지 그리기 (가정: 24비트 BMP, RGB 순서)
    for (int y = 0; y < infoHeader.height; ++y) {
        for (int x = 0; x < infoHeader.width; ++x) {
            // BMP 파일은 하단부터 상단으로 저장되어 있기 때문에 y 좌표를 반전해야 함
            int index = (x + (infoHeader.height - 1 - y) * infoHeader.width) * 3;  // RGB 각각 1바이트씩
            unsigned char blue = bitmapData[index];
            unsigned char green = bitmapData[index + 1];
            unsigned char red = bitmapData[index + 2];

            // 콘솔에서는 색을 표시하기 어렵기 때문에 간단히 밝기로 표현
            unsigned char brightness = static_cast<unsigned char>(0.3 * red + 0.59 * green + 0.11 * blue);
            buffer += getASCIIChar(brightness);
            buffer += getASCIIChar(brightness);
        }
        buffer += "\n";  // 한 줄 완료 후 개행
    }

    // 모은 버퍼 한 번에 출력
    std::cout << buffer << std::endl;
}

int main() {
    SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    SetConsoleBufferSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    SetConsoleFontSize(1);

    SetConsoleTitle(L"잃어버린 낙원");

    drawBitmap("stage1.bmp");  // 여기에 비트맵 파일 경로 넣기

    getchar();
    return 0;
}
