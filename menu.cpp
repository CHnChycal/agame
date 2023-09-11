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
	if (i == 1)//��������Ϸ���Զ��������ͻ�ȡ������
	{
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		string text;
		for (int i = 0; i < 4; i++)
			cout << endl;
		text ="(�����ǰ�����ֲ�����ָ����ڣ���Ȼ�䣬һ���â��������ǰ�Ŀյ���)";
		for (int i = 0; i < text.length(); i++) 
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(�������ܺڰ�����ȥ��һ�����������ֳ�����)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "��ľ��ʿ������ð�����ѵ���ң����Ǵ�ľ��ʿ�������鷳���������������𣿡�";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text=  "�㣺�ҵ�������  ";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cin >> name;
		text = "��ľ��ʿ������ã�" + name + "����ӭ���������ε����磡��";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "��ľ��ʿ������������ֻ�ɰ��ı����Σ���ѡ��һֻ��Ϊ��ĳ�ʼ����ɡ���";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(��ǰ�������������ɫ���������壬���Ǳ�����������)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(��һ����������װ��С��������ϵ������)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(�ڶ�����������װ���������ӣ���ϵ������)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		text = "(��������������װ�Ž���꣬ˮϵ������)";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
		cout << endl;
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
		text = "(������1/2/3����ȡ��ĳ�ʼ������)\n";
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
				cout << "(�����˴������ţ�����������)" << endl;
			}
			else break;
		}
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		switch (choice)
		{
		case 1:
			text = "(��ѡ����С����)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			break;
			choice = 1;
		case 2:
			text = "(��ѡ������������)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			choice = 0;
			break;
		case 3:
			text = "(��ѡ���˽����)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			choice = 2;
			break;
		}
		cout << "(�µĴ浵�Ѵ��������豣�棬������Ϸ�ڱ���)" << endl;
		Monster ms(choice,10); 
		mbp->Add(ms);
		system("pause");
		Player tmp(name);
		return tmp;
	}
	else {//��ȡ��Ϸ
		load();
		Player tmp = player;
		return tmp;
	}
		
}
void Menu::Playeredit(Player _player)
{
	player = _player;
}
int Menu::Gamerunning()//��Ϸ���н���
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
		cout << "�����ڴ��� " << map.showLocation() << endl;
		cout << "������ ";//��ʾ�����е�npc��
		
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
		cout << player.Showname() << " ѵ��ʦ���ã�������Ҫ��Щʲô��?" << endl;
		cout << "/////////////////////////////////////////////////////////" << endl;
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "Tip:�뿪��Ϸǰ��浵\n1�鿴��ͼ(����̽��)\n2��̸(��ս)\n3�����߱���\n4��鱦��������\n5�浵\n6��ȡ�浵\n7�������˵�\n0�˳���Ϸ" << endl;

		int choice;
		while (true)
		{
			cout << ":";
			cin >> choice;
			if (cin.fail() || choice < 0 || choice>7)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "(�����˴������ţ�����������)" << endl;
			}
			else break;
		}
		switch (choice)
		{
		case 0://�˳���Ϸ
			exit(0);
			break;
		case 1://�鿴��ͼ
			ShowMap();//չʾ��ͼ
			break;
		case 2://��npc��̸
			Talk();
			break;
		case 3://�����߱���
			showBag();
			break;
		case 4://��鱦���α���
			mbp->Query();
			break;
		case 5://�浵
			save();
			break;
		case 6://��ȡ�浵
			load();
			break;
		case 7://�������˵�
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
	cout << "������ı���������ѷ���" << player.Showname() << "ƽʱ���õĵ���" << endl;
	cout << "///////////////////////////////////////////////////////////////" << endl;
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "����������Ҫ���еĲ�����\n1�鿴����\n0���ϱ���" << endl;
	while (true)
	{
		cout << ":";
		cin >> choice;
		if (cin.fail() || choice < 0 || choice>1)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "(�����˴������ţ�����������)" << endl;
		}
		else break;
	}
	switch (choice)
	{
	case 0://ֱ�ӽ���������ԭ����
		break;
	case 1://���뱳������
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
		cout << "�޷��򿪱����ļ�!\n����ʧ�ܣ�" << endl;
		system("pause");
		return 0;
	}
	else
	{	//�洢�����Ϣ
		filePlayer << player.Showname() << " ";
		//�洢��ͼ��Ϣ
		fileMap << map.showIndex() << " ";
		//�洢����
		for (int i = 0; i < 8; i++)
		{
			fileBag << bp->showGoodNum(i) << " ";

		}
		//�洢����������
		fileMonster << mbp->MonsterNum() << " ";
		for (int i = 0; i < mbp->MonsterNum(); i++)
		{
			//����ID���ȼ������飬Ѫ��
			fileMonster << mbp->Return(i)->Id() << " " << mbp->Return(i)->CURLevel() << " " << mbp->Return(i)->CURExper() << " " << mbp->Return(i)->CURValue() << " ";
		}
		//����npc����
		for (int i = 0; i < 13; i++)
		{
			fileNpc << npcs->Return(i)->ReturnIsdef() << " ";
		}
		cout << "(����ɹ�)" << endl;
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
	cout << "(�浵��ȡ��)" << endl;
	if (!filePlayer || !fileMap || !fileBag || !fileMonster||!fileNpc)
	{
		cout << "�����ڴ浵�ļ�����ȡʧ�ܣ�" << endl;
		system("pause");
		return 0;
	}
	else
	{
		//���ԭ����Ʒ,�ͱ�����,�Ա���Ϸ�ڶ���
		bp->Clear();
		mbp->Clear();
		//��ȡ�����
		string playername;
		filePlayer >> playername;
		Player player(playername);
		Playeredit(player);
		//��ȡ��ͼλ��
		int index;
		fileMap >> index;
		map.changeLocation(index);
		//��ȡ����
		int num;
		for (int i = 0; i < 8; i++) {
			fileBag >> num;
			bp->reloadGoodNum(i, num);
		}
		//��ȡ������
		int max;//��������
		
		int id;//����id
		int level;//����ȼ�
		int exp;//���ﾭ��
		int value;//����Ѫ��
		fileMonster >> max;
		for (int i = 0; i < max; i++)
		{
			fileMonster >> id >> level >> exp >> value;
			Monster* monster = new Monster(id, level);
			monster->SetExper(exp);
			monster->SetValue(value);
			mbp->Add(*monster);
		}
		//��ȡnpc����
		npcs->Clear();
		int isdef;
		for (int i = 0; i < 13; i++)
		{
			fileNpc >> isdef;
			npcs->SetNpc(i, isdef);
		}
		cout << "(��ȡ�ɹ�)" << endl;
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
	//��ʾ��ѡ����
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
	cout << "(��ѡ����Ķ���)" << endl;
	cout << "1.��̸\n2.ս��\n0.��������" << endl;
	while (true)
	{
		cout << ":";
		cin >> choice;
		if (cin.fail() || choice < 0 || choice>2)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "(�����˴������ţ�����������)" << endl;
		}
		else break;
	}
	switch (choice)
	{
	case 0:
		return;
	case 1:
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "(��ѡ����Ҫ��̸�Ķ���)" << endl;
		while (true)
		{
			cout << ":";
			cin >> _choice;
			if (cin.fail() || _choice < 1 || _choice>num)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "(�����˴������ţ�����������)" << endl;
			}
			else break;
		}
		if (_choice != num)npcs->Return(map.showIndex() * 2 + 1 + _choice)->npctalk(player);
		else npcs->Return(map.showIndex() - 1)->npctalk(player);
		break;
	case 2:
		if (mbp->Find() != nullptr) {
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
			cout << "(��ѡ����Ҫս���Ķ���)" << endl;
			while (true)
			{
				cout << ":";
				cin >> _choice;
				if (cin.fail() || _choice < 1 || _choice>num)
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "(�����˴������ţ�����������)" << endl;
				}
				else break;
			}
			if (_choice != num)npcs->Return(map.showIndex() * 2 + 1 + _choice)->npcFight();

			else { SetConsoleTextAttribute(hConsole, FOREGROUND_RED); cout << "(���ݹ���ֻ�����ڵ�������ս��)" << endl; system("pause"); }
			break;
		}
		else
		{
			cout << "(��ı�������ȫ�����ˣ������˺�������ս��)" << endl;
		}
	}
}
#endif