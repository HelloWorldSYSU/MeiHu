#pragma once

#include "WindowsAPI.h"
#include <iostream>

using namespace std;

COORD GetXY() 
{ 
    HANDLE hStdout;
    CONSOLE_SCREEN_BUFFER_INFO pBuffer; 
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE); 
    GetConsoleScreenBufferInfo(hStdout, &pBuffer); 
    COORD temp;
    temp.X = pBuffer.dwCursorPosition.X;
    temp.Y = pBuffer.dwCursorPosition.Y;
    return temp;
}

void gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void clear(COORD coord){
	gotoxy(coord.X - 3, coord.Y);
	cout << "   ";
}