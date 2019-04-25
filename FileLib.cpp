#include <string>
#include <fstream>
#include <iostream>

const char *filename = "./database.txt";

/* First write to the computer and player location, write 36 common square states in turn, each time line break.*/

void write2file(){
	ofstream fout(filename);

	if(!fout){
		cout << "File open failed, game archive failed" << endl;
	}
//这里我想把玩家，square数组设为全局变量，由于那部分还没写，所以这个还没法完成。
	else{
		fout << 
	}

	fout.close();
}

void ReadFromFile(){
	ifstream fin(filename);

	if(!fin){
		cout << "File open failed, game failed to load" << endl;
	}
//此处同样将文件资料存进那几个全局变量中
	else{

	}
}