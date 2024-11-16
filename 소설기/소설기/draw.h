#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <stdexcept>
#include <thread>

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
	static char getASCIIChar(unsigned char brightness);
	static std::vector<char> drawBitmap(const char* filename, std::vector<char> &buffer, int startX, int startY, int screenWidth);
	static std::vector<char> drawCh(std::vector<char>& character, std::vector<char>& buffer, int startX, int startY, int screenWidth);
	void SetConsoleSize(int width, int height);
	void SetConsoleFontSize(int fontSize);
<<<<<<< HEAD
	static void drawBuffer(const std::vector<char>& bitmapData, int width, int height, std::vector<char>& buffer, int startX, int startY, int screenWidth);
	static void drawChThreadedWithoutBuffer(std::vector<char>& character, int startX, int startY, int width, int height);
	static std::vector<char> buffer_empty;
=======
	void flushBuffer(const std::vector<char>& buffer, int width, int height);
	
	
>>>>>>> main
};

