#include <windows.h>
#include <iostream>
#include "WindowsAPI.cpp"

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
	void PaintPlayer();
	void PaintComputer();
	void PaintStartAndEnd();
	~UI();
	
};


