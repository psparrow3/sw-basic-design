#include "draw.h"

std::vector<char> draw::buffer_empty;

void draw::SetConsoleSize(int width, int height)
{
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

void draw::SetConsoleFontSize(int fontSize)
{
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

char draw::getASCIIChar(unsigned char brightness)
{
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

std::vector<char> draw::drawBitmap(const char* filename, std::vector<char>& buffer, int startX, int startY, int screenWidth)
{
	std::ifstream file(filename, std::ios::binary);
	
	BitmapFileHeader fileHeader;
	BitmapInfoHeader infoHeader;

<<<<<<< HEAD
	file.read(reinterpret_cast<char*>(&fileHeader), sizeof(fileHeader));
	file.read(reinterpret_cast<char*>(&infoHeader), sizeof(infoHeader));

	int rowSize = ((infoHeader.width * infoHeader.bitCount + 31) / 32) * 4;
	int imageSize = rowSize * infoHeader.height;
=======
    if (!file)
    {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }
    if (!file.is_open())
    {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }
    BitmapFileHeader fileHeader;
    BitmapInfoHeader infoHeader;
>>>>>>> main

	std::vector<uint8_t> bitmapData(imageSize);
	file.seekg(fileHeader.offsetData, file.beg);
	file.read(reinterpret_cast<char*>(bitmapData.data()), bitmapData.size());
	file.close();

	int bufferIndex;

	// Buffer에 모든 픽셀을 그립니다.
	for (int y = 0; y < infoHeader.height; ++y)
	{
		for (int x = 0; x < infoHeader.width; ++x)
		{
			int index = (x + (infoHeader.height - 1 - y) * infoHeader.width) * 3;
			unsigned char blue = bitmapData[index];
			unsigned char green = bitmapData[index + 1];
			unsigned char red = bitmapData[index + 2];
			unsigned char brightness = static_cast<unsigned char>(0.3 * red + 0.59 * green + 0.11 * blue);

			bufferIndex = (startY + y) * screenWidth + (startX + x * 2);

			if (bufferIndex >= 0 && bufferIndex < buffer.size())
			{
				buffer[bufferIndex] = getASCIIChar(brightness);
				buffer[bufferIndex + 1] = getASCIIChar(brightness);
			}
		}
	}

	return buffer;
}

<<<<<<< HEAD
std::vector<char> draw::drawCh(std::vector<char>& character, std::vector<char>& buffer, int startX, int startY, int screenWidth)
{
	int width = 40;
	int height = 60;

	for (int y = 0; y < height; ++y)
	{
		for (int x = 0; x < width; ++x)
		{
			int characterIndex = y * width + x;
			int bufferIndex = (startY + y) * screenWidth + (startX + x);

			if (characterIndex < character.size() && bufferIndex < buffer.size())
			{
				buffer[bufferIndex] = character[characterIndex];
			}
		}
	}

	return buffer;
=======
void draw::flushBuffer(const std::vector<char>& buffer, int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { 0, 0 };

    DWORD charsWritten;
    // WinAPI로 출력
    WriteConsoleOutputCharacterA(hConsole, buffer.data(), buffer.size(), pos, &charsWritten);
>>>>>>> main
}

void draw::drawBuffer(const std::vector<char>& bitmapData, int width, int height, std::vector<char>& buffer, int startX, int startY, int screenWidth)
{
	auto drawRow = [&bitmapData, &buffer, startX, screenWidth, width](int y, int startY)
	{
		int bufferIndex;
		for (int x = 0; x < width; ++x)
		{
			int index = (x + (y)*width) * 3;
			unsigned char blue = bitmapData[index];
			unsigned char green = bitmapData[index + 1];
			unsigned char red = bitmapData[index + 2];
			unsigned char brightness = static_cast<unsigned char>(0.3 * red + 0.59 * green + 0.11 * blue);

			bufferIndex = (startY + y) * screenWidth + (startX + x * 2);

			if (bufferIndex >= 0 && bufferIndex < buffer.size())
			{
				buffer[bufferIndex] = getASCIIChar(brightness);
				buffer[bufferIndex + 1] = getASCIIChar(brightness);
			}
		}
	};

	int numThreads = std::thread::hardware_concurrency();
	int rowsPerThread = height / numThreads;
	int remainingRows = height % numThreads;

	std::vector<std::thread> threads;
	for (int i = 0; i < numThreads; ++i)
	{
		int startRow = i * rowsPerThread;
		int endRow = (i == numThreads - 1) ? (startRow + rowsPerThread + remainingRows) : (startRow + rowsPerThread);
		threads.push_back(std::thread(drawRow, startRow, endRow));
	}

	for (auto& t : threads)
	{
		t.join();
	}
}

void draw::drawChThreadedWithoutBuffer(std::vector<char>& character, int startX, int startY, int width, int height)
{
	// 사용 가능한 쓰레드 수
	int numThreads = std::thread::hardware_concurrency();
	int rowsPerThread = height / numThreads;

	// 각 쓰레드가 처리할 영역을 나누어서 그리기
	auto drawCharacterRows = [&character, startX, startY, width](int startRow, int endRow)
		{
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

			for (int y = startRow; y < endRow; ++y)
			{
				// 커서 위치를 y, startX로 이동
				COORD pos = { (SHORT)(startX), (SHORT)(startY + y) };
				SetConsoleCursorPosition(hConsole, pos);

				// 해당 행의 캐릭터 출력
				for (int x = 0; x < width; ++x)
				{
					int characterIndex = y * width + x;
					if (characterIndex < character.size())
					{
						std::cout << character[characterIndex];
					}
				}
			}
		};

	// 멀티 쓰레드를 이용해 캐릭터 그리기
	std::vector<std::thread> threads;
	for (int i = 0; i < numThreads; ++i)
	{
		int startRow = i * rowsPerThread;
		int endRow = (i == numThreads - 1) ? height : (startRow + rowsPerThread);
		threads.push_back(std::thread(drawCharacterRows, startRow, endRow));
	}

	// 모든 쓰레드가 종료될 때까지 기다림
	for (auto& t : threads)
	{
		t.join();
	}
}