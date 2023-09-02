#pragma once

#include"monsterbag.h"

void MonsterBag::Query()
{
	int size = bag.size();
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "背包存放的宝可梦：" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". " << bag[i].Show_Name() << endl;
	}
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "请选择操作：" << endl;
	cout << "1.查询宝可梦详情" << endl;
	cout << "2.放生背包内的宝可梦" << endl;
	cout << "3.关闭背包" << endl;
	int n;
	cin >> n;
	while (n != 1 && n != 2 && n != 3)
	{
		cout << "//////////////////////////////////////////////////////////" << endl;
		cout << "///                                                    ///" << endl;
		cout << "///   请选择输入 1~3 之间的一个数！                    ///" << endl;
		cout << "///                                                    ///" << endl;
		cout << "//////////////////////////////////////////////////////////" << endl;
		cin >> n;
	}
	switch (n)
	{
	case 1:
	{
		cout << "请选择你要查看的宝可梦" << endl;
		int m;
		cin >> m;
		while (m<0 || m>=size)
		{
			cout << "请正确选择宝可梦序号!" << endl;
			cin >> m;
		}
		bag[m].Show_Detail();
		cout << "输入任何键返回" << endl;
		cin >> m;
		this->Query();
		//返回上一级
	}
	case 2:
	{
		cout << "请选择要放生的宝可梦" << endl;
		int k;
		cin >> k;
		while (k < 0 || k >= size)
		{
			cout << "请正确选择宝可梦序号!" << endl;
			cin >> k;
		}
		bag.erase(bag.begin() + k);
	}
	case 3:
	{
		//返回场景******************************************************************************************
	}
	break;
	}
}