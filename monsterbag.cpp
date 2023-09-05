#pragma once

#include"monsterbag.h"

MonsterBag* MonsterBag::monsterbag = new MonsterBag();
void MonsterBag::Query()
{
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
	cout << "3.�رձ���" << endl;
	int n;
	cin >> n;
	while (n != 1 && n != 2 && n != 3)
	{
		cout << "//////////////////////////////////////////////////////////" << endl;
		cout << "///                                                    ///" << endl;
		cout << "///   ��ѡ������ 1~3 ֮���һ������                    ///" << endl;
		cout << "///                                                    ///" << endl;
		cout << "//////////////////////////////////////////////////////////" << endl;
		cin >> n;
	}
	switch (n)
	{
	case 1:
	{
		cout << "��ѡ����Ҫ�鿴�ı�����" << endl;
		int m;
		cin >> m;
		while (m<0 || m>=size)
		{
			cout << "����ȷѡ�񱦿������!" << endl;
			cin >> m;
		}
		bag[m].Show_Detail();
		cout << "�����κμ�����" << endl;
		cin >> m;
		this->Query();
		break;
		//������һ��
	}
	case 2:
	{
		this->Release();
		break;
	}
	case 3:
	{
		break;
	}
	break;
	}
}

void MonsterBag::Add(Monster monster)
{
	int size = bag.size();
	if (size < 6)
	{
		bag.push_back(monster);
		cout << "//////////////////////////////////////////////////////////" << endl;
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
	cout << "��ѡ��Ҫ�����ı�����" << endl;
	int k;
	cin >> k;
	while (k < 0 || k >= size)
	{
		cout << "����ȷѡ�񱦿������!" << endl;
		cin >> k;
	}
	bag.erase(bag.begin() + k);
}

Monster MonsterBag::Return(int number)
{
	return bag[number];
}

Monster MonsterBag::Find()
{
	int size = bag.size();
	for (int i = 0; i < size; i++)
	{
		if (bag[i].IsAlive())
		{
			return bag[i];
			break;
		}
	}
}