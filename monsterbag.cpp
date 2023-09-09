#pragma once

#include"monsterbag.h"

BOOL SetConsoleColor(WORD wAttributes)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hConsole == INVALID_HANDLE_VALUE)
		return FALSE;

	return SetConsoleTextAttribute(hConsole, wAttributes);
}

MonsterBag* MonsterBag::monsterbag = new MonsterBag();
void MonsterBag::Query()
{
	system("cls");
	int size = bag.size();
	SetConsoleColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "������ŵı����Σ�" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". " << bag[i].Show_Name() << endl;
	}
	cout << "//////////////////////////////////////////////////////////" << endl;
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "��ѡ�������" << endl;
	cout << "1.��ѯ����������" << endl;
	cout << "2.���������ڵı�����" << endl;
	cout << "3.���������ڱ�����˳��" << endl;
	cout << "0.�رձ���" << endl;
	int n;
	while (true)
	{
		cout << ":";
		cin >> n;
		if (cin.fail() || n < 0 || n>3)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			SetConsoleColor(FOREGROUND_RED);
			cout << "//////////////////////////////////////////////////////////" << endl;
			cout << "///                                                    ///" << endl;
			cout << "///   ��ѡ������ 0~3 ֮���һ������                    ///" << endl;
			cout << "///                                                    ///" << endl;
			cout << "//////////////////////////////////////////////////////////" << endl;
		}
		else break;
	}
	
	switch (n)
	{
	case 1:
	{
		SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "��������Ҫ�鿴�ı��������" << endl;
		int m;
		while (true)
		{
			cout << ":";
			cin >> m;
			if (cin.fail() || m < 1 || m>size)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				SetConsoleColor(FOREGROUND_RED);
				cout << "����ȷѡ�񱦿������!" << endl;
			}
			else break;
		}
		bag[m-1].Show_Detail();
		system("pause");
		this->Query();
		break;
		//������һ��
	}
	case 2:
	{
		this->Release();
		system("pause");
		break;
	}
	case 3:
		this->ChangeMonster_Bag();
		break;
	case 0:
	{
		break;
	}
	break;
	}
}

int MonsterBag::MonsterNum()
{
	return bag.size();
}

void MonsterBag::Add(Monster monster)
{
	if (monster.HasCaught())
	{
		SetConsoleColor(FOREGROUND_RED);
		cout << "��ֻ�������Ѿ��������ˣ�����Ը�������" << endl;
	}
	else
	{
		int size = bag.size();
		if (size < 6)
		{
			bag.push_back(monster);
			SetConsoleColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
			cout << "//////////////////////////////////////////////////////////" << endl;
			monster.Caught();
			cout << monster.Show_Name() << "�Ѽ��뱦���α�����" << endl;
		}
		else
		{
			SetConsoleColor(FOREGROUND_RED);
			cout << "//////////////////////////////////////////////////////////" << endl;
			cout << "�����α�����������������ֱ����κ��ٲ�׽����Ҫ̫̰��Ŷ��" << endl;
		}
	}
}

void MonsterBag::Release()
{
	int size = bag.size();
	
	int k;
	if (size != 1)//ֻ�б����ھ���������Ϊ1ʱ�ɷ���
	{
		cout << "��ѡ��Ҫ�����ı�����\n(����0����)" << endl;
		while (true)
		{
			cout << ":";
			cin >> k;
			if (cin.fail() || k < 1 || k>size)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				SetConsoleColor(FOREGROUND_RED);
				cout << "�����˴������ţ�����������" << endl;
			}
			else break;
		}
		if (k != 0)
		{
			bag.erase(bag.begin() + k - 1);
			SetConsoleColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
			cout<<bag[k-1].Show_Name() << "�뿪���㣬ϣ�����ܹ��ҵ������Լ���δ��" << endl;
		}
	}
	else
	{
		SetConsoleColor(FOREGROUND_RED);
		cout << "�����ڱ�������������Ϊ0������˼��һ�°�" << endl;
	}

	
	system("pause");

	this->Query();//������һ��

}

Monster* MonsterBag::Return(int number)
{
	return &bag[number];
}

Monster* MonsterBag::Find()
{
	int size = bag.size();
	for (int i = 0; i < size; i++)
	{
		if (bag[i].IsAlive())
		{
			return &bag[i];
			break;
		}
	}
	return nullptr;//���ؿ�ָ���Խ��б�����ʾ
}
void MonsterBag::Clear()
{
	bag.clear();
}

void MonsterBag::ChangeMonster_Bag()
{
	system("cls");
	cout << "/////////////////////////////////////////////////////////" << endl;
	cout << "������ı�����˳��Ϊ" << endl;
	for (int i = 0; i < MonsterNum(); i++)
	{
		cout << i + 1 << " " << bag[i].Show_Name() << endl;
	}
	cout << "/////////////////////////////////////////////////////////" << endl;
	cout << "(��ѡ��Ҫ�����ڵ�һս��λ�õı�����,0�˳�)" << endl;
	int choice;
	while (true)
	{
		cout << ":";
		cin >> choice;
		if (cin.fail() || choice < 0 || choice>MonsterNum())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "(�����˴������ţ�����������)" << endl;
		}
		else break;
	}
	if (choice == 0)return;
	if (choice == 1)
	{
		cout << "(�Ѿ��ǵ�һֻ������)" << endl;
		system("pause");
	}
	else 
	{
		Monster tmp(bag[choice - 1]);
		bag.erase(bag.begin() + choice - 1);
		bag.insert(bag.begin(), tmp);
		cout << "(˳������ɹ�)" << endl;
		system("pause");
	}
}