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
	cout << "背包存放的宝可梦：" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". " << bag[i].Show_Name() << endl;
	}
	cout << "//////////////////////////////////////////////////////////" << endl;
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "请选择操作：" << endl;
	cout << "1.查询宝可梦详情" << endl;
	cout << "2.放生背包内的宝可梦" << endl;
	cout << "3.调整背包内宝可梦顺序" << endl;
	cout << "0.关闭背包" << endl;
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
			cout << "输入错误！请重新输入" << endl;
		}
		else break;
	}
	
	switch (n)
	{
	case 1:
	{
		SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "请输入你要查看的宝可梦序号" << endl;
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

void MonsterBag::showMonster()
{
	int size = bag.size();
	SetConsoleColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
	cout << "背包存放的宝可梦：" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". " << bag[i].Show_Name() << endl;
	}
}

void MonsterBag::Add(Monster monster)
{
	if (monster.HasCaught())
	{
		SetConsoleColor(FOREGROUND_RED);
		cout << "这只宝可梦已经有主人了，它不愿意跟你走" << endl;
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
			cout << monster.Show_Name() << "已加入宝可梦背包！" << endl;
		}
		else
		{
			SetConsoleColor(FOREGROUND_RED);
			cout << "//////////////////////////////////////////////////////////" << endl;
			cout << "宝可梦背包已满，请放生部分宝可梦后再捕捉，不要太贪心哦！" << endl;
		}
	}
}

void MonsterBag::Release()
{
	int size = bag.size();
	
	int k;
	if (size != 1)//只有背包内精灵数量不为1时可放生
	{
		SetConsoleColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "请选择要放生的宝可梦\n(输入0返回)" << endl;
		while (true)
		{
			cout << ":";
			cin >> k;
			if (cin.fail() || k < 0 || k>size)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				SetConsoleColor(FOREGROUND_RED);
				cout << "输入了错误的序号，请重新输入" << endl;
			}
			else break;
		}
		if (k != 0)
		{
			bag.erase(bag.begin() + k - 1);
			SetConsoleColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
			cout<<"宝可梦离开了你，希望它能够找到属于自己的未来" << endl;
		}
		else
		{
			SetConsoleColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
			cout << "再想想吧" << endl;
		}
	}
	else
	{
		SetConsoleColor(FOREGROUND_RED);
		cout << "背包内宝可梦数量不可为0，请再思考一下吧" << endl;
	}

	
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
	return nullptr;//返回空指针以进行报错提示
}
void MonsterBag::Clear()
{
	bag.clear();
}

void MonsterBag::ChangeMonster_Bag()
{
	system("cls");
	cout << "/////////////////////////////////////////////////////////" << endl;
	cout << "腰包里的宝可梦顺序为" << endl;
	for (int i = 0; i < MonsterNum(); i++)
	{
		cout << i + 1 << " " << bag[i].Show_Name() << endl;
	}
	cout << "/////////////////////////////////////////////////////////" << endl;
	cout << "(请选择要放置在第一战斗位置的宝可梦,0退出)" << endl;
	int choice;
	while (true)
	{
		cout << ":";
		cin >> choice;
		if (cin.fail() || choice < 0 || choice>MonsterNum())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "(输入了错误的序号，请重新输入)" << endl;
		}
		else break;
	}
	if (choice == 0)return;
	if (choice == 1)
	{
		cout << "(已经是第一只宝可梦)" << endl;
		system("pause");
	}
	else 
	{
		Monster tmp(bag[choice - 1]);
		bag.erase(bag.begin() + choice - 1);
		bag.insert(bag.begin(), tmp);
		cout << "(顺序调换成功)" << endl;
		system("pause");
	}
}
