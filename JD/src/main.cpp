#include "main.h"

int iScreenWidth = 120;
int iScreenHeight = 40;

float fPlayerX = 0.0f;
float fPlayerY = 0.0f;
float fPlayerAngle = 0.0f;

int iMapHeight = 16;
int iMapWidht = 16;

float fFOV = 3.1415 / 4.0f;

int main(int argv, char** argc)
{



#ifdef _WIN32
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	wchar_t* screen = new wchar_t[iScreenWidth * iScreenHeight];
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwByteWritten = 0;
	_CrtDumpMemoryLeaks();

	std::wstring map;

	map += L"################";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"#..............#";
	map += L"################";


	while (1)
	{
		for (int i = 0; i < iScreenWidth; i++)
		{

		}
		screen[iScreenWidth * iScreenHeight - 1] = '\0';
		WriteConsoleOutputCharacterW(hConsole, screen, iScreenWidth * iScreenHeight, { 0,0 }, &dwByteWritten);

	}
	

#elif
#endif
	return 0;
}