#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include <mutex>
#include <thread>
#include <conio.h>
#include <atomic>

#define SCREEN_WIDTH 1902
#define SCREEN_HEIGHT 501

#define BLOCK_SIZE 40

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
class draw
{
public:
	char getASCIIChar(unsigned char brightness);
	void drawBitmap(const char* filename, std::vector<char>& buffer, int startX, int startY, int screenWidth);
	void SetConsoleSize(int width, int height);
	void SetConsoleFontSize(int fontSize);
	void flushBuffer(const std::vector<char>& buffer, int width, int height);
	void eraseBitmap(const char* filename, std::vector<char>& buffer, int startX, int startY, int screenWidth);
};

