#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include "menu.h"
#include "player.h"
#include "map.h"
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
int Background(Player player)
{
	system("cls");
	string text;
	for (int i = 0; i < 4; i++)
		cout << endl;
	text = "(һ���â������һ��������������������������ɤ����ʱ������)";//text1
	for (int i = 0; i < text.length(); i++)
	{
		Sleep(10);
		cout << text[i];
	}
	cout << endl;
	text = "�԰�:���ںܶ�ܶ�����ǰ�����滹��һƬ���磬ʲô��û�С��ڻ����ĳ�����䣬������һ�ŵ���\n�������Ժ󣬵����������ϵ�һֻ���汦����������˹����󣬻����ٴδ�������������ɡ�����¬������·������ֻ�����Ρ�\n��ʼ�ı������γ��ˣ����汦������Ҳ��ʼ�������͡�\n�����������࣬��Ϊ����֮��������漣��Ļ�ȡ����ʹ�����ε���������";//text2
	for (int i = 0; i < text.length(); i++)
	{
		Sleep(10);
		cout << text[i];
	}
	cout << endl;
	system("pause");
	text = "�԰�:������ ";//text4
	for (int i = 0; i < text.length(); i++)
	{
		Sleep(10);
		cout << text[i];
	}
	cout << player.Showname();
	text = " ��Ϊһ������ѵ��ʦ����Ҫ̤�ϳ�Ϊ��ǿ������ѵ���ҵĵ�·����";//text4
	for (int i = 0; i < text.length(); i++)
	{
		Sleep(10);
		cout << text[i];
	}
	cout << endl;
	text = "(���ֽ�������â��ʧ�ˣ���Ӵ���������������������Ϥ�İ���)\n(����һ��СС�Ĳ�ͬ��һö������ƾ�ճ������˴�ͷ���ϣ��Ա߻���һ��СС��ֽ��)\n(����д�š�һ��СС�����)\n(��֪������װ��ʲô����Ҳ֪���������Լ��������ĵ�һ��)";//text4
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


	//��ʼ����ѡ��
	while (true)
	{
		cin >> choice;
		if (cin.fail() || choice < 0 || choice > 2)
		{//����ʱ���������
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

		if (choice == 1)Background(player);
	}
	//��Ϸ��ʼ����
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
				{//����ʱ���������
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

				if (choice == 1)Background(player);
			}
		}
	}
	return 0;

}