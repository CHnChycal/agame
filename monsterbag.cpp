#pragma once

#include"monsterbag.h"

MonsterBag* MonsterBag::monsterbag = new MonsterBag();
void MonsterBag::Query()
{
	system("cls");
	int size = bag.size();
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "������ŵı����Σ�" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". " << bag[i].Show_Name() << endl;
	}
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "��ѡ�������" << endl;
	cout << "1.��ѯ����������" << endl;
	cout << "2.���������ڵı�����" << endl;
	cout << "0.�رձ���" << endl;
	int n;
	while (true)
	{
		cout << ":";
		cin >> n;
		if (cin.fail() || n < 0 || n>2)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "//////////////////////////////////////////////////////////" << endl;
			cout << "///                                                    ///" << endl;
			cout << "///   ��ѡ������ 0~2 ֮���һ������                    ///" << endl;
			cout << "///                                                    ///" << endl;
			cout << "//////////////////////////////////////////////////////////" << endl;
		}
		else break;
	}
	
	switch (n)
	{
	case 1:
	{
		cout << "(��������Ҫ�鿴�ı��������)" << endl;
		int m;
		while (true)
		{
			cout << ":";
			cin >> m;
			if (cin.fail() || m < 1 || m>size)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
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
		break;
	}
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
	int size = bag.size();
	if (size < 6)
	{
		bag.push_back(monster);
		cout << "//////////////////////////////////////////////////////////" << endl;
		monster.Caught();
		cout << monster.Show_Name() << "�Ѽ��뱦���α�����" << endl;
	}
	else
	{
		cout << "//////////////////////////////////////////////////////////" << endl;
		cout << "�����α�����������������ֱ����κ��ٲ�׽����Ҫ̫̰��Ŷ��" << endl;
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
				cout << "(�����˴������ţ�����������)" << endl;
			}
			else break;
		}
		if (k != 0)
		{
			bag.erase(bag.begin() + k - 1);
			cout << "(�������뿪���㣬ϣ�����ܹ��ҵ������Լ���δ��)" << endl;
		}
	}
	else cout << "(�����ڱ�������������Ϊ0������˼��һ�°�)" << endl;

	
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
}