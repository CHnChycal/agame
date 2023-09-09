#pragma once
#include<iostream>
#include<iomanip>
#include"Bag.h"
#include"Goods.h"
using namespace std;
Bag* Bag::bag = new Bag();
Bag::Bag()
{
	for (int i = 0; i < 8; i++)
	{
		Goods good(i);
		goods.push_back(good);
	}
}
void Bag::showbag()
{
	int itemNum[8];
	int listNum = 1;
	while(true)
	{ 
		listNum = 1;
		system("cls");
		cout << "/////////////////////////////////////////////////////////" << endl;
		cout << "���������Ʒ����: " << endl;
		for (int i = 0; i < 7; i++)
		{
			if (goods[i].showGoodsNum() > 0)
			{
				itemNum[listNum - 1] = i;
				cout << listNum << '\t' << goods[i].getName() << '\t' << goods[i].showGoodsNum() << endl;
				listNum++;

			}
		}
		if (listNum == 1)cout << "(�����ڿ���һ��)" << endl;

		itemNum[listNum - 1] = 7;
		cout << listNum << '\t' << goods[7].getName() << '\t' << goods[7].showGoodsNum() << endl;

		cout << "0\t�˳�" << endl;
		cout << "/////////////////////////////////////////////////////////" << endl;
		cout << "tips:�����Ӧ��Ʒ��ż��ɲ鿴����" << endl;
		int choice;
		while (true)
		{
			cout << ":";
			cin >> choice;
			if (cin.fail() || choice<0||choice>listNum)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "(�����˴������ţ�����������)" << endl;
			}
			else break;
		}
		if (choice == 0)break;
		else
		{
			cout << goods[itemNum[choice - 1]].getDesc() << endl;
			system("pause");
		}
	}
}
void Bag::editGoodNum(int id, int num)
{
	int sum;
	sum = goods[id].showGoodsNum() + num;
	if (id == 7)
	{
		if (sum < 0)cout << "������������" << endl;
		else if(sum > 0 && num < 0)
		{
			cout << "(���ѳɹ���)" << endl;
			goods[id].changeGoodsNum(sum);

		}
		else if (sum > 0 && num > 0)
		{
			cout << "(����ѷ��뱳��)" << endl;
			goods[id].changeGoodsNum(sum);
		}
		
		
	}
	else
	{
		if (sum < 0)cout << "��Ʒ��������" << endl;
		else
		{
			if (num < 0) 
			{
				cout << "�Ѵӱ����м���" << num << "��" << goods[id].getName() << endl;
				goods[id].changeGoodsNum(sum);
			}
			else
			{
				cout << "�ѽ�" << num << "��" << goods[id].getName() <<"��ӵ�����" << endl;
				goods[id].changeGoodsNum(sum);
			}
		}
	}
}
int Bag::showGoodNum(int id)
{
	return goods[id].showGoodsNum();
}
void Bag::reloadGoodNum(int id, int num)
{
	goods[id].changeGoodsNum(num);

}
void Bag::Clear()
{
	for (int i = 0; i < 8; i++)
	{
		goods[i].changeGoodsNum(goods[i].showGoodsNum());
	}
}
