#pragma once

#include <iostream>
#include "UI.h"
#include <windows.h>
#include "WindowsAPI.h"

using namespace std;//每一块地的状态怎么在图上显示最终还是


struct Position {
	int PlayerPos;
	int AIPos;
};

//I/O
 Position HandLogic(){

}

void Effect() {

}

UI test;



int main(){
	test.Paint();
	COORD coord;
	coord.X = 1;
	coord.Y = 1;
	for (size_t i = 0; i < 38; i++)
	{
		test.PaintStartAndEnd(i, i);
		clear(coord);
		test.PaintPlayer(i);
		test.PaintComputer(i);
		coord = GetXY();
		Sleep(1000);
	}
}