#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include "menu.h"
#include "player.h"
using namespace std;
int Welcomepage()//��ʾ��Ϸ�����ѡ��
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | 14);
	for (int i = 0; i < 8; i++)//Ĭ������ȡ����
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
	string newGameMenu = "   1.�µ���Ϸ  2.��ȡ�浵  0.�˳���Ϸ";
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


	//��ʼ����ѡ��
	while (true)
	{
		cin >> choice;
		if (cin.fail() || choice < 0 || choice > 2) {//����ʱ���������
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << endl << endl << '\t' << '\t' << '\t' << '\t' << "�����˴������ţ�����������" << endl;
			cout << endl << endl << '\t' << '\t' << '\t' << '\t' << ":   ";
		}
		else break;
		
	}
	if (choice == 0)exit(0);//�˳���Ϸ
	else
	{
		player = menu.Gamestart(choice);
		menu.Playeredit(player);
	}
	//��Ϸ��ʼ����
	menu.Gamerunning();
	return 0;

}