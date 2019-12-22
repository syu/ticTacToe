#include "Graphic.h"
#include <windows.h>
#include <iostream>
using namespace std;

void Graphic::setBaseColors()
{
	system("color F0");
}
void Graphic::setTextColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void Graphic::topBorder()
{
	cout << endl << "浜様様僕様様僕様様\xBB";
}

void Graphic::bottomBorder()
{
	cout << endl << "藩様様瞥様様瞥様様\xBC";
}

void Graphic::innerBorder()
{
	cout << endl << "麺様様陵様様陵様様�";
}

void Graphic::verticalBorder()
{
	cout << endl << "  �  ";
}
