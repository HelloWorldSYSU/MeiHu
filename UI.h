#pragma once

#include <windows.h>
#include <iostream>

using namespace std;

class UI
{
private:

	int _start_x;
	int _start_y;
	int square_width;
	int square_height;

public:

	UI();
	UI(int x, int y, int w, int h);
	void Paint();
	void PaintPlayer(int x);
	void PaintComputer(int x);
	void PaintStartAndEnd(int x, int y);
	
};


