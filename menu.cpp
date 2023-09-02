#ifndef MENU_CPP
#define MENU_CPP

#include "menu.h"
#include "player.h"
#include "map.h"
#include "monsterbag.h"
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
		
}
void Menu::Playeredit(Player _player)
{
	player = _player;
}
int Menu::Gamerunning()//游戏运行界面
{
	while(true)
	{ 
		system("cls");
		MonsterBag* mbp = MonsterBag::Getinstance();
		for (int i = 0; i < 4; i++)
			cout << endl;
		cout << "/////////////////////////////////////////////////////////" << endl;
		cout << "你现在处于" << "" << endl;
		cout << player.Showname() << " 训练师您好，今天想要做些什么呢?" << endl;
		cout << "/////////////////////////////////////////////////////////" << endl;
		cout << "Tip:离开游戏前请存档\n1查看地图（进行探索）\n2检查道具背包\n3检查宝可梦腰包\n4存档\n5读取存档\n6返回主菜单\n0退出游戏" << endl;

		int choice;
		while (true)
		{
			cout << ":";
			cin >> choice;
			if (cin.fail() || choice < 0 || choice>6)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "(输入了错误的序号，请重新输入)" << endl;
			}
			else break;
		}
		switch (choice)
		{
		case 0://退出游戏
			exit(0);
			break;
		case 1://查看地图
			ShowMap();//展示地图
			break;
		case 2://检查道具背包
			break;
		case 3://检查宝可梦背包
			mbp->Query();
			break;
		case 4://存档
			//save();
			break;
		case 5://读取存档
			//load();
			break;
		case 6://返回主菜单
			return 0;
			break;

		}
	}
}
void Menu::ShowMap()
{
	map.showMap();
}
#endif