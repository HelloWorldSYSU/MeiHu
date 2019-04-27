#include <string>
#include <fstream>
#include <iostream>
#include"Square.cpp"
#include"Player.cpp"
#include"Computer.cpp"

using namespace std;

const char *filename = "./database.txt";

/* First write to the computer and player location, write 36 common square states in turn, each time line break.*/

void write2file(Square square[], int size, Player &p, Computer &c){
	ofstream fout(filename);

	if(!fout){
		cout << "File open failed, game archive failed" << endl;
	}
//这里我想把玩家，square数组设为全局变量，由于那部分还没写，所以这个还没法完成。
	else{
		for (int i = 0; i < size; i++)
			fout << square[i].Getowner() << ' ' << square[i].Getvalue() << ' '<< square[i].Getstatus() << endl;
		fout << p.Getmoney() << ' ' << p.Getposition() << endl;
		fout << c.Getmoney() << ' ' << c.Getposition() << endl;
	}

	fout.close();
}

void ReadFromFile(Square square[], int size, Player &p, Computer &c){
	ifstream fin(filename);

	if(!fin){
		cout << "File open failed, game failed to load" << endl;
	}
//此处同样将文件资料存进那几个全局变量中,配合然后配合Paint函数实现加载游戏
	else{
		for (int i = 0; i < size; i++)
		{
			fin >> square[i];
		}
		fin >> p;
		fin >> c;
	}
}