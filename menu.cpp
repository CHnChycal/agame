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
	MonsterBag* mbp = MonsterBag::Getinstance();
	system("cls");
	if (i == 1)//��������Ϸ���Զ��������ͻ�ȡ������
	{
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
		Monster ms(choice,1);
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
	while(true)
	{ 
		system("cls");
		MonsterBag* mbp = MonsterBag::Getinstance();
		cout << "/////////////////////////////////////////////////////////" << endl;
		cout << "�����ڴ��� " << map.showLocation() << endl;
		cout << "������ " << endl;
		cout << player.Showname() << " ѵ��ʦ���ã�������Ҫ��Щʲô��?" << endl;
		cout << "/////////////////////////////////////////////////////////" << endl;
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
	int choice;
	Bag* bp = Bag::Getinstance();
	system("cls");
	cout << "///////////////////////////////////////////////////////////////" << endl;
	cout << "������ı���������ѷ���" << player.Showname() << "ƽʱ���õĵ���" << endl;
	cout << "///////////////////////////////////////////////////////////////" << endl;
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
	ofstream filePlayer("SavePlayer.dat", ios_base::binary);
	ofstream fileMap("SaveMap.dat", ios_base::binary);
	ofstream fileBag("SaveBag.dat", ios_base::binary);
	ofstream fileMonster("SaveMonster.dat", ios_base::binary);
	Bag* bp = Bag::Getinstance();
	MonsterBag* mbp = MonsterBag::Getinstance();
	if (!filePlayer || !fileMap || !fileBag || !fileMonster)
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

		cout << "(����ɹ�)" << endl;
		filePlayer.close();
		fileMap.close();
		fileBag.close();
		fileMonster.close();
		system("pause");
		return 1;
	}
}
int Menu::load()
{
	ifstream filePlayer("SavePlayer.dat", ios_base::binary);
	ifstream fileMap("SaveMap.dat", ios_base::binary);
	ifstream fileBag("SaveBag.dat", ios_base::binary);
	ifstream fileMonster("SaveMonster.dat", ios_base::binary);
	Bag* bp = Bag::Getinstance();
	MonsterBag* mbp = MonsterBag::Getinstance();
	if (!filePlayer || !fileMap || !fileBag || !fileMonster)
	{
		cout << "�����ڴ浵�ļ�����ȡʧ�ܣ�" << endl;
		system("pause");
		return 0;
	}
	else
	{
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
		cout << "(��ȡ�ɹ�)" << endl;
		filePlayer.close();
		fileMap.close();
		fileBag.close();
		fileMonster.close();
		system("pause");
		return 1;
	}
}
#endif