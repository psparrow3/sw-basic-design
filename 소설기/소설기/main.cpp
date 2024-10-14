#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>

#define SCREEN_WIDTH 1802
#define SCREEN_HEIGHT 450

void SetConsoleSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // �ܼ� ȭ�� ���� ũ�⸦ �����մϴ�.
    COORD bufferSize;
    bufferSize.X = width;
    bufferSize.Y = height;
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    // �ܼ� â�� ũ�⸦ ���� ũ��� �����ϰ� �����մϴ�.
    SMALL_RECT windowSize;
    windowSize.Left = 0;
    windowSize.Top = 0;
    windowSize.Right = width - 1;
    windowSize.Bottom = height - 1;
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
}

void SetConsoleBufferSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // ���� ũ�⸦ �����մϴ�.
    COORD bufferSize;
    bufferSize.X = width;
    bufferSize.Y = height;

    // ���� ũ�⸦ �����մϴ�.
    SetConsoleScreenBufferSize(hConsole, bufferSize);
}

void SetConsoleFontSize(int fontSize) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;           // �ʺ� (�ڵ� ����)
    cfi.dwFontSize.Y = fontSize;    // ���� (��Ʈ ũ��)
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

    // ���� Ÿ�� Ȯ�� (BM���� Ȯ��)
    if (fileHeader.fileType != 0x4D42) {
        std::cerr << "Not a BMP file!" << std::endl;
        return;
    }

    // BMP ������ �̹��� ũ�� ���
    int rowSize = ((infoHeader.width * infoHeader.bitCount + 31) / 32) * 4;  // �� ���� ũ�⸦ 4����Ʈ ������ ����
    int imageSize = rowSize * infoHeader.height;

    // ��Ʈ�� ������ �б�
    std::vector<uint8_t> bitmapData(imageSize);
    file.seekg(fileHeader.offsetData, file.beg);
    file.read(reinterpret_cast<char*>(bitmapData.data()), bitmapData.size());
    file.close();

    // ���ۿ� ��Ƽ� �� ���� ���
    std::string buffer;

    // �̹��� �׸��� (����: 24��Ʈ BMP, RGB ����)
    for (int y = 0; y < infoHeader.height; ++y) {
        for (int x = 0; x < infoHeader.width; ++x) {
            // BMP ������ �ϴܺ��� ������� ����Ǿ� �ֱ� ������ y ��ǥ�� �����ؾ� ��
            int index = (x + (infoHeader.height - 1 - y) * infoHeader.width) * 3;  // RGB ���� 1����Ʈ��
            unsigned char blue = bitmapData[index];
            unsigned char green = bitmapData[index + 1];
            unsigned char red = bitmapData[index + 2];

            // �ֿܼ����� ���� ǥ���ϱ� ��Ʊ� ������ ������ ���� ǥ��
            unsigned char brightness = static_cast<unsigned char>(0.3 * red + 0.59 * green + 0.11 * blue);
            buffer += getASCIIChar(brightness);
            buffer += getASCIIChar(brightness);
        }
        buffer += "\n";  // �� �� �Ϸ� �� ����
    }

    // ���� ���� �� ���� ���
    std::cout << buffer << std::endl;
}

int main() {
    SetConsoleSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    SetConsoleBufferSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    SetConsoleFontSize(1);

    SetConsoleTitle(L"�Ҿ���� ����");

    drawBitmap("stage1.bmp");  // ���⿡ ��Ʈ�� ���� ��� �ֱ�

    getchar();
    return 0;
}
