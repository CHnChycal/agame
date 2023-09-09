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
		cout << "背包里的物品如下: " << endl;
		for (int i = 0; i < 7; i++)
		{
			if (goods[i].showGoodsNum() > 0)
			{
				itemNum[listNum - 1] = i;
				cout << listNum << '\t' << goods[i].getName() << '\t' << goods[i].showGoodsNum() << endl;
				listNum++;

			}
		}
		if (listNum == 1)cout << "(背包内空无一物)" << endl;

		itemNum[listNum - 1] = 7;
		cout << listNum << '\t' << goods[7].getName() << '\t' << goods[7].showGoodsNum() << endl;

		cout << "0\t退出" << endl;
		cout << "/////////////////////////////////////////////////////////" << endl;
		cout << "tips:输入对应物品序号即可查看详情" << endl;
		int choice;
		while (true)
		{
			cout << ":";
			cin >> choice;
			if (cin.fail() || choice<0||choice>listNum)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "(输入了错误的序号，请重新输入)" << endl;
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
		if (sum < 0)cout << "货币数量不足" << endl;
		else if(sum > 0 && num < 0)
		{
			cout << "(消费成功！)" << endl;
			goods[id].changeGoodsNum(sum);

		}
		else if (sum > 0 && num > 0)
		{
			cout << "(金币已放入背包)" << endl;
			goods[id].changeGoodsNum(sum);
		}
		
		
	}
	else
	{
		if (sum < 0)cout << "物品数量不足" << endl;
		else
		{
			if (num < 0) 
			{
				cout << "已从背包中减少" << num << "件" << goods[id].getName() << endl;
				goods[id].changeGoodsNum(sum);
				system("pause");
			}
			else
			{
				cout << "已将" << num << "件" << goods[id].getName() <<"添加到背包" << endl;
				goods[id].changeGoodsNum(sum);
				system("pause");
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
