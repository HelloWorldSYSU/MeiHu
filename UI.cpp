#pragma once
#include "UI.h"
#include "WindowsAPI.h"

using namespace std;

UI::UI(){
	this->_start_x = 30;
	this->_start_y = 2;
	this->square_width = 5;
	this->square_height = 2;
}

UI::UI(int x, int y, int w, int h){
	this->_start_x = x;
	this->_start_y = y;
	this->square_width = w;
	this->square_height = h;
}

void UI::Paint(){
	int x = _start_x, y = _start_y;
	gotoxy(x, y);
	for (int i = 0; i < 11 * square_width; ++i)
	{
		cout << "_";
	}
	gotoxy(x, y + square_height);
	for (int i = 0; i < 11 * square_width; ++i)
	{
		cout << "_";
	}
	gotoxy(x, y + 9 * square_height);
	for (int i = 0; i < 11 * square_width; ++i)
	{
		cout << "_";
	}
	gotoxy(x, y + 10 * square_height);
	for (int i = 0; i < 11 * square_width; ++i)
	{
		cout << "_";
	}
	for (int j = 0; j < 10 * square_height; ++j)
	{
		gotoxy(x, y + 1 + j);
		cout << "|";
		gotoxy(x + square_width, y + 1 + j);
		cout << "|";
		gotoxy(x + 10 * square_width, y + 1 + j);
		cout << "|";
		gotoxy(x + 10 * square_width + square_width, y + 1 + j);
		cout << "|";
	}
	for (int i = 0; i < 8; ++i)
	{
		gotoxy(x + square_width * 2 + i * square_width, y + 1);
		cout << "|";
		gotoxy(x + square_width * 2 + i * square_width, y + 2);
		cout << "|";
		gotoxy(x + square_width * 2 + i * square_width, y + 1 + 9 * square_height);
		cout << "|";
		gotoxy(x + square_width * 2 + i * square_width, y + 2 + 9 * square_height);
		cout << "|";
	}
	for (int i = 0; i < 7; ++i)
	{
		gotoxy(x + 1, y + 2 * square_height + i * square_height);
		cout << "____";
		gotoxy(x + 10 * square_width + 1, y + 2 * square_height + i * square_height);
		cout << "____";
	}
	gotoxy(x + 2, y + 1);
	cout << "GO";
	gotoxy(x + 10 * square_width + 1, y + 19);
	cout << "JAIL|";
}

void UI::PaintStartAndEnd(int x, int y){
	if(x + y != 2 && x != 20 && y != 20){
		gotoxy(_start_x + 2, _start_y + 1);
		cout << "GO";
		gotoxy(_start_x + 10 * square_width + 1, _start_y + 19);
		cout << "JAIL|";
	}
}

void UI::PaintPlayer(int position){
	if(position >= 1 && position <= 11){
		gotoxy((position - 1)  * square_width + _start_x + 2, square_height + _start_y - 1);
		cout << "* ";
	}

	else if(position >= 20 && position <= 30){
		if(position == 20){
			gotoxy(_start_x + 51, _start_y + 19);
			cout << " ";
		}
		position = 30 - position + 1;
		gotoxy((position - 1)  * square_width + _start_x + 2, square_height + 18 + _start_y - 1);
		cout << "* ";
	}

	else if(position >= 12 && position <= 19){
		position = position - 12;
		gotoxy(10 * square_width + 2 + _start_x, square_height + position * 2 + 1 + _start_y);
		cout << "* ";
	}

	else if(position >= 31 && position <= 38){
		position = 39 - position - 1;
		gotoxy(2 + _start_x, square_height + position * 2 + 1 + _start_y);
		cout << "* ";
	}
}

void UI::PaintComputer(int position){
	if(position >= 1 && position <= 11){
		gotoxy((position - 1)  * square_width + _start_x + 3, square_height + _start_y - 1);
		cout << "# ";
	}

	else if(position >= 20 && position <= 30){
		position = 30 - position + 1;
		gotoxy((position - 1)  * square_width + _start_x + 3, square_height + 18 + _start_y - 1);
		cout << "# ";
	}

	else if(position >= 12 && position <= 19){
		position = position - 12;
		gotoxy(10 * square_width + 3 + _start_x, square_height + position * 2 + 1 + _start_y);
		cout << "# ";
	}

	else if(position >= 31 && position <= 38){
		position = 39 - position - 1;
		gotoxy(2 + _start_x + 1, square_height + position * 2 + 1 + _start_y);
		cout << "# ";
	}
}