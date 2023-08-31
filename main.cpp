#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include "menu.h"
#include "player.h"
using namespace std;
int Welcomepage()//显示游戏标题和选项
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | 14);
	for (int i = 0; i < 8; i++)//默认向下取八行
		cout << endl;
	cout <<'\t'  << '\t' << '\t' << "               __                                            " << endl;
	cout << '\t' << '\t' << '\t' << "              /\\ \\                                           " << endl;
	cout << '\t' << '\t' << '\t' << " _____     ___\\ \\ \\/'\\      __    ___ ___     ___     ___    " << endl;
	cout << '\t' << '\t' << '\t' << "/\\ '__`\\  / __`\\ \\ , <    /'__`\\/' __` __`\\  / __`\\ /' _ `\\  " << endl;
	cout << '\t' << '\t' << '\t' << "\\ \\ \\L\\ \\/\\ \\L\\ \\ \\ \\\\`\\ /\\  __//\\ \\/\\ \\/\\ \\/\\ \\L\\ \\/\\ \\/\\ \\ " << endl;
	cout << '\t' << '\t' << '\t' << " \\ \\ ,__/\\ \\____/\\ \\_\\ \\_\\ \\____\\ \\_\\ \\_\\ \\_\\ \\____/\\ \\_\\ \\_\\ " <<endl;
	cout << '\t' << '\t' << '\t' << "  \\ \\ \\/  \\/___/  \\/_/\\/_/\\/____/\\/_/\\/_/\\/_/\\/___/  \\/_/\\/_/" << endl;
	cout << '\t' << '\t' << '\t' << "   \\ \\_\\                                                     " << endl;
	cout << '\t' << '\t' << '\t' << "    \\/_/                                                     " << endl;
	SetConsoleTextAttribute(hConsole, 10);
	string newGameMenu = "   1.新的游戏  2.读取存档  0.退出游戏";
	cout << '\t' << '\t' << '\t' << '\t';
	cout << '\t' << "   ********************" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "         Made by " << endl;
	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "   ********************" << endl;
	cout << '\t' << '\t' << '\t' << '\t';
	for (int i = 0; i < newGameMenu.length(); i++) {
		Sleep(50);
		cout << newGameMenu[i];
	}
	cout << endl << endl << '\t' << '\t' << '\t' << '\t' << ":   ";
	return 0;
}
int main()
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	Welcomepage();
	int choice;
	Menu menu;
	Player player;


	//开始界面选项
	while (true)
	{
		cin >> choice;
		if (cin.fail() || choice < 0 || choice > 2) {//出错时清除输入流
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << endl << endl << '\t' << '\t' << '\t' << '\t' << "输入了错误的序号，请重新输入" << endl;
			cout << endl << endl << '\t' << '\t' << '\t' << '\t' << ":   ";
		}
		else break;
		
	}
	if (choice == 0)exit(0);//退出游戏
	else
	{
		player = menu.Gamestart(choice);
		menu.Playeredit(player);
	}
	//游戏开始运行
	menu.Gamerunning();
	return 0;

}