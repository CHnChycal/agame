#ifndef MENU_CPP
#define MENU_CPP
#include "npcs.h"
#include "menu.h"
#include "player.h"
#include "map.h"
#include "monsterbag.h"

#include "npc.h"

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
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	string name;
	MonsterBag* mbp = MonsterBag::Getinstance();
	system("cls");
	if (i == 1)//创建新游戏，自定义姓名和获取御三家
	{
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
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
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
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
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
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
			choice = 1;
		case 2:
			text = "(你选择了妙蛙种子)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			choice = 0;
			break;
		case 3:
			text = "(你选择了杰尼龟)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			choice = 2;
			break;
		}
		cout << "(新的存档已创建，如需保存，请在游戏内保存)" << endl;
		Monster ms(choice,10); 
		mbp->Add(ms);
		system("pause");
		Player tmp(name);
		return tmp;
	}
	else {//读取游戏
		load();
		Player tmp = player;
		return tmp;
	}
		
}
void Menu::Playeredit(Player _player)
{
	player = _player;
}
int Menu::Gamerunning()//游戏运行界面
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	MonsterBag* mbp = MonsterBag::Getinstance();
	Npcs* npcs = Npcs::Getinstance();
	while(true)
	{ 
		system("cls");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "/////////////////////////////////////////////////////////" << endl;
		cout << "你现在处于 " << map.showLocation() << endl;
		cout << "这里有 ";//显示场景中的npc名
		
		if (map.showIndex() == 1)
		{
			for (int i = 0; i < 2; i++)
			{
				cout << npcs->Return(i + 4)->getNpcName() << " ";
			}
			cout << npcs->Return(0)->getNpcName();
		}
		else if (map.showIndex() == 2)
		{
			for (int i = 0; i < 2; i++)
			{
				cout << npcs->Return(i + 6)->getNpcName() << " ";
			}
			cout << npcs->Return(1)->getNpcName();
		}
		else if (map.showIndex() == 3)
		{
			for (int i = 0; i < 2; i++)
			{
				cout << npcs->Return(i + 8)->getNpcName() << " ";
			}
			cout << npcs->Return(2)->getNpcName();
		}
		else if (map.showIndex() == 4)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << npcs->Return(i + 10)->getNpcName() << " ";
			}
			cout << npcs->Return(3)->getNpcName();
		}
		cout << endl;
		cout << player.Showname() << " 训练师您好，今天想要做些什么呢?" << endl;
		cout << "/////////////////////////////////////////////////////////" << endl;
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "Tip:离开游戏前请存档\n1查看地图(进行探索)\n2交谈(对战)\n3检查道具背包\n4检查宝可梦腰包\n5存档\n6读取存档\n7返回主菜单\n0退出游戏" << endl;

		int choice;
		while (true)
		{
			cout << ":";
			cin >> choice;
			if (cin.fail() || choice < 0 || choice>7)
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
		case 2://与npc交谈
			Talk();
			break;
		case 3://检查道具背包
			showBag();
			break;
		case 4://检查宝可梦背包
			mbp->Query();
			break;
		case 5://存档
			save();
			break;
		case 6://读取存档
			load();
			break;
		case 7://返回主菜单
			return 0;
			break;

		}
	}
}
void Menu::ShowMap()
{
	map.showMap();
}
void Menu::showBag()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int choice;
	Bag* bp = Bag::Getinstance();
	system("cls");
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
	cout << "///////////////////////////////////////////////////////////////" << endl;
	cout << "红白相间的背包内有序堆放着" << player.Showname() << "平时常用的道具" << endl;
	cout << "///////////////////////////////////////////////////////////////" << endl;
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "请输入你想要进行的操作：\n1查看道具\n0合上背包" << endl;
	while (true)
	{
		cout << ":";
		cin >> choice;
		if (cin.fail() || choice < 0 || choice>1)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "(输入了错误的序号，请重新输入)" << endl;
		}
		else break;
	}
	switch (choice)
	{
	case 0://直接结束，返回原代码
		break;
	case 1://进入背包界面
		bp->showbag();
		break;
	}
}
int Menu::save()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ofstream filePlayer("SavePlayer.dat", ios_base::binary);
	ofstream fileMap("SaveMap.dat", ios_base::binary);
	ofstream fileBag("SaveBag.dat", ios_base::binary);
	ofstream fileMonster("SaveMonster.dat", ios_base::binary);
	ofstream fileNpc("SaveNpc.dat", ios_base::binary);
	Bag* bp = Bag::Getinstance();
	MonsterBag* mbp = MonsterBag::Getinstance();
	Npcs* npcs = Npcs::Getinstance();
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
	if (!filePlayer || !fileMap || !fileBag || !fileMonster||!fileNpc)
	{
		cout << "无法打开保存文件!\n保存失败！" << endl;
		system("pause");
		return 0;
	}
	else
	{	//存储玩家信息
		filePlayer << player.Showname() << " ";
		//存储地图信息
		fileMap << map.showIndex() << " ";
		//存储背包
		for (int i = 0; i < 8; i++)
		{
			fileBag << bp->showGoodNum(i) << " ";

		}
		//存储宝可梦数据
		fileMonster << mbp->MonsterNum() << " ";
		for (int i = 0; i < mbp->MonsterNum(); i++)
		{
			//保存ID，等级，经验，血量
			fileMonster << mbp->Return(i)->Id() << " " << mbp->Return(i)->CURLevel() << " " << mbp->Return(i)->CURExper() << " " << mbp->Return(i)->CURValue() << " ";
		}
		//储存npc数据
		for (int i = 0; i < 13; i++)
		{
			fileNpc << npcs->Return(i)->ReturnIsdef() << " ";
		}
		cout << "(保存成功)" << endl;
		filePlayer.close();
		fileMap.close();
		fileBag.close();
		fileMonster.close();
		fileNpc.close();
		system("pause");
		return 1;
	}
}
int Menu::load()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ifstream filePlayer("SavePlayer.dat", ios_base::binary);
	ifstream fileMap("SaveMap.dat", ios_base::binary);
	ifstream fileBag("SaveBag.dat", ios_base::binary);
	ifstream fileMonster("SaveMonster.dat", ios_base::binary);
	ifstream fileNpc("SaveNpc.dat", ios_base::binary);

	Bag* bp = Bag::Getinstance();
	MonsterBag* mbp = MonsterBag::Getinstance();
	Npcs* npcs = Npcs::Getinstance();
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
	system("cls");
	cout << "(存档读取中)" << endl;
	if (!filePlayer || !fileMap || !fileBag || !fileMonster||!fileNpc)
	{
		cout << "不存在存档文件，读取失败！" << endl;
		system("pause");
		return 0;
	}
	else
	{
		//清除原有物品,和宝可梦,以便游戏内读档
		bp->Clear();
		mbp->Clear();
		//读取玩家名
		string playername;
		filePlayer >> playername;
		Player player(playername);
		Playeredit(player);
		//读取地图位置
		int index;
		fileMap >> index;
		map.changeLocation(index);
		//读取背包
		int num;
		for (int i = 0; i < 8; i++) {
			fileBag >> num;
			bp->reloadGoodNum(i, num);
		}
		//读取宝可梦
		int max;//怪物数量
		
		int id;//怪物id
		int level;//怪物等级
		int exp;//怪物经验
		int value;//怪物血量
		fileMonster >> max;
		for (int i = 0; i < max; i++)
		{
			fileMonster >> id >> level >> exp >> value;
			Monster* monster = new Monster(id, level);
			monster->SetExper(exp);
			monster->SetValue(value);
			mbp->Add(*monster);
		}
		//读取npc数据
		npcs->Clear();
		int isdef;
		for (int i = 0; i < 13; i++)
		{
			fileNpc >> isdef;
			npcs->SetNpc(i, isdef);
		}
		cout << "(读取成功)" << endl;
		filePlayer.close();
		fileMap.close();
		fileBag.close();
		fileMonster.close();
		fileNpc.close();
		system("pause");
		return 1;
	}
}
void Menu::Talk()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	Npcs* npcs = Npcs::Getinstance();
	MonsterBag* mbp = MonsterBag::Getinstance();
	system("cls");
	int num=0;
	int choice;
	int _choice;
	//显示可选人数
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
	cout << "/////////////////////////////////////////////////////////" << endl;
	if (map.showIndex() == 1)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << i+1 <<"." << npcs->Return(i + 4)->getNpcName() <<" " << npcs->Return(i + 4)->getNpcDesc() << endl;
			num++;
		}
		cout << 3 << "." << npcs->Return(0)->getNpcName() << " " << npcs->Return(0)->getNpcDesc() << endl;
		num++;
	}
	else if (map.showIndex() == 2)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << i + 1 << "." << npcs->Return(i + 6)->getNpcName() << " " << npcs->Return(i + 6)->getNpcDesc() << endl;
			num++;
		}
		cout << 3 << "." << npcs->Return(1)->getNpcName() << " " << npcs->Return(1)->getNpcDesc() << endl;
		num++;
	}
	else if (map.showIndex() == 3)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << i + 1 << "." << npcs->Return(i + 8)->getNpcName() << " " << npcs->Return(i + 8)->getNpcDesc() << endl;
			num++;
		}
		cout << 3 << "." << npcs->Return(2)->getNpcName() << " " << npcs->Return(2)->getNpcDesc() << endl;
		num++;
	}
	else if (map.showIndex() == 4)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << "." << npcs->Return(i + 10)->getNpcName() << " " << npcs->Return(i + 10)->getNpcDesc() << endl;
			num++;
		}
		cout << 4 << "." << npcs->Return(3)->getNpcName() << " " << npcs->Return(3)->getNpcDesc() << endl;
		num++;
	}
	cout << "/////////////////////////////////////////////////////////" << endl;
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "(请选择你的动作)" << endl;
	cout << "1.交谈\n2.战斗\n0.不做动作" << endl;
	while (true)
	{
		cout << ":";
		cin >> choice;
		if (cin.fail() || choice < 0 || choice>2)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "(输入了错误的序号，请重新输入)" << endl;
		}
		else break;
	}
	switch (choice)
	{
	case 0:
		return;
	case 1:
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "(请选择想要交谈的对象)" << endl;
		while (true)
		{
			cout << ":";
			cin >> _choice;
			if (cin.fail() || _choice < 1 || _choice>num)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "(输入了错误的序号，请重新输入)" << endl;
			}
			else break;
		}
		if (_choice != num)npcs->Return(map.showIndex() * 2 + 1 + _choice)->npctalk(player);
		else npcs->Return(map.showIndex() - 1)->npctalk(player);
		break;
	case 2:
		if (mbp->Find() != nullptr) {
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
			cout << "(请选择想要战斗的对象)" << endl;
			while (true)
			{
				cout << ":";
				cin >> _choice;
				if (cin.fail() || _choice < 1 || _choice>num)
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "(输入了错误的序号，请重新输入)" << endl;
				}
				else break;
			}
			if (_choice != num)npcs->Return(map.showIndex() * 2 + 1 + _choice)->npcFight();

			else { SetConsoleTextAttribute(hConsole, FOREGROUND_RED); cout << "(道馆馆主只可以在道馆内挑战！)" << endl; system("pause"); }
			break;
		}
		else
		{
			cout << "(你的宝可梦已全部重伤，请疗伤后再来挑战吧)" << endl;
			system("pause");
		}
	}
}
#endif