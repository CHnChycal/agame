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
		case 2:
			text = "(��ѡ������������)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			break;
		case 3:
			text = "(��ѡ���˽����)";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			break;
		}
		cout << "(�µĴ浵�Ѵ��������豣�棬������Ϸ�ڱ���)" << endl;
		system("pause");
		Player tmp(name);
		return tmp;
	}
	else {//��ȡ��Ϸ
		Player tmp;
		return tmp;
	}
		
		;
}
void Menu::Playeredit(Player _player)
{
	player = _player;
}
void Menu::Gamerunning()//��Ϸ���н���
{
	system("cls");
}

#endif