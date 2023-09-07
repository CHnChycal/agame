#pragma once

#include"monsterbag.h"

MonsterBag* MonsterBag::monsterbag = new MonsterBag();
void MonsterBag::Query()
{
	system("cls");
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
	cout << "0.关闭背包" << endl;
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
			cout << "///   请选择输入 0~2 之间的一个数！                    ///" << endl;
			cout << "///                                                    ///" << endl;
			cout << "//////////////////////////////////////////////////////////" << endl;
		}
		else break;
	}
	
	switch (n)
	{
	case 1:
	{
		cout << "(请输入你要查看的宝可梦序号)" << endl;
		int m;
		while (true)
		{
			cout << ":";
			cin >> m;
			if (cin.fail() || m < 1 || m>size)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "请正确选择宝可梦序号!" << endl;
			}
			else break;
		}
		bag[m-1].Show_Detail();
		system("pause");
		this->Query();
		break;
		//返回上一级
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
	
	int k;
	if (size != 1)//只有背包内精灵数量不为1时可放生
	{
		cout << "请选择要放生的宝可梦\n(输入0返回)" << endl;
		while (true)
		{
			cout << ":";
			cin >> k;
			if (cin.fail() || k < 1 || k>size)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "(输入了错误的序号，请重新输入)" << endl;
			}
			else break;
		}
		if (k != 0)
		{
			bag.erase(bag.begin() + k - 1);
			cout << "(宝可梦已被放生，希望它能够找到属于自己的未来)" << endl;
		}
	}
	else cout << "(背包内宝可梦数量不可为0，请再思考一下吧)" << endl;

	
	system("pause");

	this->Query();//返回上一级

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