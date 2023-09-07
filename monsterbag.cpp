#pragma once

#include"monsterbag.h"

MonsterBag* MonsterBag::monsterbag = new MonsterBag();
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
		break;
		//返回上一级
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
		cout << monster.Show_Name() << "已加入宝可梦背包！" << endl;
	}
	else
	{
		cout << "//////////////////////////////////////////////////////////" << endl;
		cout << "宝可梦背包已满，请放生部分宝可梦后再捕捉，不要太贪心哦！" << endl;
	}
}

void MonsterBag::Release()
{
	int size = bag.size();
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