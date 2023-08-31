#ifndef MENU_CPP
#define MENU_CPP

#include "menu.h"
#include "player.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
Menu::Menu()
{

}
Menu::~Menu()
{

}
Player Menu::Gamestart(int i) 
{
	string name;

	system("cls");
	if (i == 1)//创建新游戏，自定义姓名和获取御三家
	{
		string text;
		for (int i = 0; i < 4; i++)
			cout << endl;
		text ="(你的眼前是伸手不见五指的漆黑，猛然间，一阵光芒打在你身前的空地上)";
		for (int i = 0; i < text.length(); i++) 
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(随着四周黑暗的褪去，一个光团逐渐显现出人形)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "大木博士：“你好啊新人训练家，我是大木博士，可以麻烦你告诉我你的名字吗？”";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text=  "你：我的名字是  ";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cin >> name;
		text = "大木博士：“你好，" + name + "，欢迎来到宝可梦的世界！”";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "大木博士：“这里有三只可爱的宝可梦，请选择一只作为你的初始精灵吧。”";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(面前出现了三个红白色的球形物体，它们被称作精灵球)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(第一个精灵球里装着小火龙，火系宝可梦)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(第二个精灵球里装着妙蛙种子，草系宝可梦)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(第三个精灵球里装着杰尼龟，水系宝可梦)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(请输入1/2/3来获取你的初始宝可梦)\n";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		text = name;
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		int choice;
		while (true)
		{
			cout << ":";
			cin >> choice;
			if (cin.fail() || choice < 1 || choice>3)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "(输入了错误的序号，请重新输入)" << endl;
			}
			else break;
		}
		switch (choice)
		{
		case 1:
			text = "(你选择了小火龙)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			break;
		case 2:
			text = "(你选择了妙蛙种子)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			break;
		case 3:
			text = "(你选择了杰尼龟)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			break;
		}
		cout << "(新的存档已创建，如需保存，请在游戏内保存)" << endl;
		system("pause");
		Player tmp(name);
		return tmp;
	}
	else {//读取游戏
		Player tmp;
		return tmp;
	}
		
		;
}
void Menu::Playeredit(Player _player)
{
	player = _player;
}
void Menu::Gamerunning()//游戏运行界面
{
	system("cls");
}

#endif