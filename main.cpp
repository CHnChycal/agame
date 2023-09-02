#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include "menu.h"
#include "player.h"
#include "map.h"
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
int Background(Player player)
{
	system("cls");
	string text;
	for (int i = 0; i < 4; i++)
		cout << endl;
	text = "(一阵光芒闪过，一首悠扬的曲子响了起来，空灵的嗓音适时的响起)";//text1
	for (int i = 0; i < text.length(); i++)
	{
		Sleep(10);
		cout << text[i];
	}
	cout << endl;
	text = "旁白:“在很多很多年以前，宇宙还是一片混沌，什么都没有。在混沌的某个角落，孕育出一颗蛋。\n蛋孵化以后，诞生了世界上第一只神奇宝贝，阿尔宙斯。随后，混沌再次创造出了骑拉帝纳、帝牙卢卡、帕路奇亚三只宝可梦。\n初始的宝可梦形成了，神奇宝贝世界也开始渐渐成型。\n而后诞生了人类，作为万物之灵的他们奇迹般的获取了驱使宝可梦的能力。”";//text2
	for (int i = 0; i < text.length(); i++)
	{
		Sleep(10);
		cout << text[i];
	}
	cout << endl;
	system("pause");
	text = "旁白:“而你 ";//text4
	for (int i = 0; i < text.length(); i++)
	{
		Sleep(10);
		cout << text[i];
	}
	cout << player.Showname();
	text = " 作为一个新手训练师，将要踏上成为最强宝可梦训练家的道路！”";//text4
	for (int i = 0; i < text.length(); i++)
	{
		Sleep(10);
		cout << text[i];
	}
	cout << endl;
	text = "(音乐结束，光芒消失了，你从床上醒来，四周是卧室熟悉的摆设)\n(但有一点小小的不同，一枚精灵球凭空出现在了床头柜上，旁边还有一张小小的纸条)\n(上面写着“一份小小的礼物”)\n(你知道里面装着什么，你也知道，这是自己梦想成真的第一步)";//text4
	for (int i = 0; i < text.length(); i++)
	{
		Sleep(10);
		cout << text[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
int main()
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	Welcomepage();
	int choice;
	int condition;
	Menu menu;
	Player player;


	//开始界面选项
	while (true)
	{
		cin >> choice;
		if (cin.fail() || choice < 0 || choice > 2)
		{//出错时清除输入流
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

		if (choice == 1)Background(player);
	}
	//游戏开始运行
	while (true)
	{
		condition = menu.Gamerunning();
		if (condition == 0)
		{
			Welcomepage();
			while (true)
			{
				cin >> choice;
				if (cin.fail() || choice < 0 || choice > 2)
				{//出错时清除输入流
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

				if (choice == 1)Background(player);
			}
		}
	}
	return 0;

}