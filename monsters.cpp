#pragma once

#include"monsters.h"


Monster::Monster(int num,int level) 
{
	switch (num) 
	{
	case 0: //草
	{
		Mname = "妙蛙种子";
		Mnature = 4;
		BasValue = 65;
		BasAttack = 49;
		BasDefense = 34;
		BasSpeed = 45;
	}
	case 1: //火
	{
		Mname = "小火龙";
		Mnature = 1;
		BasValue = 59;
		BasAttack = 52;
		BasDefense = 37;
		BasSpeed = 65;
	}
	case 2://水
	{
		Mname = "杰尼龟";
		Mnature = 2;
		BasValue = 64;
		BasAttack = 48;
		BasDefense = 38;
		BasSpeed = 43;
	}
	case 3://虫
	{
		Mname = "绿毛虫";
		Mnature = 8;
		BasValue = 55;
		BasAttack = 45;
		BasDefense = 30;
		BasSpeed = 45;
	}
	case 4://毒
	{
		Mname = "阿柏蛇";
		Mnature = 7;
		BasValue = 45;
		BasAttack = 50;
		BasDefense = 33;
		BasSpeed = 55;
	}
	case 5://电
	{
		Mname = "皮卡丘";
		Mnature = 3;
		BasValue = 63;
		BasAttack = 70;
		BasDefense = 48;
		BasSpeed = 90;
	}
	case 6://岩石
	{
		Mname = "穿山鼠";
		Mnature = 9;
		BasValue = 58;
		BasAttack = 48;
		BasDefense = 50;
		BasSpeed = 40;
	}
	case 7://飞行
	{
		Mname = "皮皮";
		Mnature = 6;
		BasValue = 50;
		BasAttack = 40;
		BasDefense = 32;
		BasSpeed = 44;
	}
	case 8://一般
	{
		Mname = "胖丁";
		Mnature = 0;
		BasValue = 60;
		BasAttack = 38;
		BasDefense = 48;
		BasSpeed = 38;
	}
	case 9://飞行
	{
		Mname = "超音蝠";
		Mnature = 6;
		BasValue = 56;
		BasAttack = 51;
		BasDefense = 30;
		BasSpeed = 49;
	}
	case 10://草
	{
		Mname = "走路草";
		Mnature = 4;
		BasValue = 52;
		BasAttack = 38;
		BasDefense = 38;
		BasSpeed = 40;
	}
	case 11://岩石
	{
		Mname = "地鼠";
		Mnature = 9;
		BasValue = 44;
		BasAttack = 42;
		BasDefense = 25;
		BasSpeed = 78;
	}
	case 12://一般
	{
		Mname = "喵喵";
		Mnature = 6;
		BasValue = 46;
		BasAttack = 51;
		BasDefense = 25;
		BasSpeed = 62;
	}
	case 13://水
	{
		Mname = "可达鸭";
		Mnature = 2;
		BasValue = 53;
		BasAttack = 39;
		BasDefense = 36;
		BasSpeed = 39;
	}
	case 14://岩石
	{
		Mname = "卡蒂狗";
		Mnature = 9;
		BasValue = 50;
		BasAttack = 46;
		BasDefense = 45;
		BasSpeed = 40;
	}
	case 15://水
	{
		Mname = "蚊香蝌蚪";
		Mnature = 2;
		BasValue = 39;
		BasAttack = 36;
		BasDefense = 36;
		BasSpeed = 40;
	}
	case 16://草
	{
		Mname = "喇叭芽";
		Mnature = 4;
		BasValue = 52;
		BasAttack = 34;
		BasDefense = 38;
		BasSpeed = 36;
	}
	case 17://毒
	{
		Mname = "毒刺水母";
		Mnature = 7;
		BasValue = 46;
		BasAttack = 48;
		BasDefense = 39;
		BasSpeed = 37;
	}
	case 18://火
	{
		Mname = "小火马";
		Mnature = 1;
		BasValue = 50;
		BasAttack = 52;
		BasDefense = 39;
		BasSpeed = 53;
	}
	case 19://水
	{
		Mname = "呆呆兽";
		Mnature = 2;
		BasValue = 64;
		BasAttack = 54;
		BasDefense = 42;
		BasSpeed = 30;
	}
	case 20://毒
	{
		Mname = "臭臭泥";
		Mnature = 7;
		BasValue = 68;
		BasAttack = 36;
		BasDefense = 47;
		BasSpeed = 28;
	}
	case 21://水
	{
		Mname = "小海狮";
		Mnature = 2;
		BasValue = 54;
		BasAttack = 47;
		BasDefense = 42;
		BasSpeed = 44;
	}
	case 22://岩石
	{
		Mname = "大岩蛇";
		Mnature = 9;
		BasValue = 72;
		BasAttack = 56;
		BasDefense = 40;
		BasSpeed = 60;
	}
	case 23://电
	{
		Mname = "雷电球";
		Mnature = 3;
		BasValue = 52;
		BasAttack = 47;
		BasDefense = 35;
		BasSpeed = 66;
	}
	case 24://水
	{
		Mname = "宝石海星";
		Mnature = 2;
		BasValue = 65;
		BasAttack = 41;
		BasDefense = 50;
		BasSpeed = 39;
	}
	case 25://冰
	{
		Mname = "急冻鸟";
		Mnature = 5;
		BasValue = 54;
		BasAttack = 52;
		BasDefense = 41;
		BasSpeed = 66;
	}
	case 26://火
	{
		Mname = "火焰鸟";
		Mnature = 1;
		BasValue = 54;
		BasAttack = 52;
		BasDefense = 41;
		BasSpeed = 66;
	}
	case 27://电
	{
		Mname = "闪电鸟";
		Mnature = 3;
		BasValue = 54;
		BasAttack = 52;
		BasDefense = 41;
		BasSpeed = 66;
	}
	case 28://草
	{
		Mname = "月桂叶";
		Mnature = 4;
		BasValue = 60;
		BasAttack = 41;
		BasDefense = 43;
		BasSpeed = 45;
	}
	case 29://火
	{
		Mname = "火伊布";
		Mnature = 1;
		BasValue = 65;
		BasAttack = 55;
		BasDefense = 45;
		BasSpeed = 55;
	}
	case 30://水
	{
		Mname = "水伊布";
		Mnature = 2;
		BasValue = 65;
		BasAttack = 55;
		BasDefense = 45;
		BasSpeed = 55;
	}
	case 31://电
	{
		Mname = "雷伊布";
		Mnature = 3;
		BasValue = 65;
		BasAttack = 55;
		BasDefense = 45;
		BasSpeed = 55;
	}
	case 32://一般
	{
		Mname = "圈圈熊";
		Mnature = 0;
		BasValue = 60;
		BasAttack = 50;
		BasDefense = 48;
		BasSpeed = 37;
	}
	case 33://火
	{
		Mname = "熔岩虫";
		Mnature = 1;
		BasValue = 48;
		BasAttack = 62;
		BasDefense = 42;
		BasSpeed = 39;
	}
	case 34://毒
	{
		Mname = "毒粉蝶";
		Mnature = 7;
		BasValue = 46;
		BasAttack = 61;
		BasDefense = 37;
		BasSpeed = 53;
	}
	case 35://飞行
	{
		Mname = "长翅鸥";
		Mnature = 6;
		BasValue = 52;
		BasAttack = 47;
		BasDefense = 36;
		BasSpeed = 67;
	}
	case 36://一般
	{
		Mname = "优雅猫";
		Mnature = 0;
		BasValue = 56;
		BasAttack = 52;
		BasDefense = 42;
		BasSpeed = 60;
	}
	case 37://电
	{
		Mname = "正电拍拍";
		Mnature = 3;
		BasValue = 60;
		BasAttack = 50;
		BasDefense = 40;
		BasSpeed = 50;
	}
	case 38://电
	{
		Mname = "负电拍拍";
		Mnature = 3;
		BasValue = 60;
		BasAttack = 40;
		BasDefense = 50;
		BasSpeed = 50;
	}
	case 39://水
	{
		Mname = "巨牙鲨";
		Mnature = 2;
		BasValue = 64;
		BasAttack = 65;
		BasDefense = 40;
		BasSpeed = 60;
	}
	case 40://毒
	{
		Mname = "溶食兽";
		Mnature = 7;
		BasValue = 55;
		BasAttack = 55;
		BasDefense = 55;
		BasSpeed = 55;
	}
	case 41://火
	{
		Mname = "喷火驼";
		Mnature = 1;
		BasValue = 68;
		BasAttack = 60;
		BasDefense = 45;
		BasSpeed = 40;
	}
	case 42://飞行
	{
		Mname = "七夕青鸟";
		Mnature = 6;
		BasValue = 55;
		BasAttack = 50;
		BasDefense = 55;
		BasSpeed = 60;
	}
	case 43://岩石
	{
		Mname = "月石";
		Mnature = 9;
		BasValue = 60;
		BasAttack = 50;
		BasDefense = 50;
		BasSpeed = 80;
	}
	case 44://岩石
	{
		Mname = "太阳岩";
		Mnature = 9;
		BasValue = 60;
		BasAttack = 65;
		BasDefense = 55;
		BasSpeed = 50;
	}
	case 45://飞行
	{
		Mname = "沙漠蜻蜓";
		Mnature = 6;
		BasValue = 57;
		BasAttack = 47;
		BasDefense = 47;
		BasSpeed = 72;
	}
	case 46://冰
	{
		Mname = "雪童子";
		Mnature = 5;
		BasValue = 59;
		BasAttack = 49;
		BasDefense = 43;
		BasSpeed = 44;
	}
	case 47://冰
	{
		Mname = "海豹球";
		Mnature = 5;
		BasValue = 65;
		BasAttack = 48;
		BasDefense = 46;
		BasSpeed = 38;
	}
	case 48://虫
	{
		Mname = "三蜜蜂";
		Mnature = 8;
		BasValue = 60;
		BasAttack = 53;
		BasDefense = 37;
		BasSpeed = 66;
	}
	case 49://虫
	{
		Mname = "百足蜈蚣";
		Mnature = 8;
		BasValue = 58;
		BasAttack = 52;
		BasDefense = 43;
		BasSpeed = 70;
	}
	break;
	}
	CurLevel = level;
	MaxValue = CurLevel * 5 + BasValue;
	Attack = CurLevel * 2 + BasAttack;
	Defense = CurLevel * 2 + BasDefense;
	Speed = CurLevel + BasSpeed;
	
	isAlive = true;

	MaxLevel = 80;
	CurValue = MaxValue;
	MaxExper = CurLevel * 20 + 80;
	CurExper = 0;

	Experience = CurLevel * 10;
	AcuPercentage = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//探索野外遇到怪物
void Monster::Meet(int num)//修改为num
{
	int newlevel = rand() % 10 + num;
	int newmonster = rand() % 50;
	Monster enemy(newmonster, newlevel);
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "///" << "  一只lv." << enemy.CurLevel << "的" << enemy.Mname << "向你挑衅" << endl;
	cout << "///  请选择 :" << endl;
	cout << "///  1: 战斗" << endl;
	cout << "///  2: 逃跑" << endl;
	cout << "//////////////////////////////////////////////////////////" << endl;
	int n;
	cin >> n;
	while (n != 1 && n != 2)
	{
		cout << "//////////////////////////////////////////////////////////" << endl;
		cout << "///                                                    ///" << endl;
		cout << "///   请选择输入 1 / 2！                               ///" << endl;
		cout << "///                                                    ///" << endl;
		cout << "//////////////////////////////////////////////////////////" << endl;
		cin >> n;
	}
	if (n == 1)
	{
		this->Fight(enemy);
	}
	else if (n == 2)
	{
		//返回场景*******************************************************************************
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//战斗页面
void Monster::Fight(Monster enemy)
{
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << this->Mname << "(lv." << this->CurLevel << ")" << "与" << enemy.Mname << "lv.(" << enemy.CurLevel << ")开始了战斗！" << endl;
	cout << "//////////////////////////////////////////////////////////" << endl;
	int n;
	while(this->isAlive && enemy.isAlive)//当双方都未死亡时选择操作
	{
		cout << "//////////////////////////////////////////////////////////" << endl;
		cout << "请选择你的操作：" << endl;
		cout << "1: 攻击" << endl;
		cout << "2: 防御" << endl;
		cout << "3: 回复道具" << endl;
		cout << "4: 捕捉道具" << endl;
		cout << "5: 逃跑" << endl;//返回场景****************************************************************************
		cout << "//////////////////////////////////////////////////////////" << endl;
		cin >> n;
		while (n != 1 && n != 2 && n != 3 && n != 4 && n != 5)
		{
			cout << "//////////////////////////////////////////////////////////" << endl;
			cout << "///                                                    ///" << endl;
			cout << "///   请选择输入 1~5 之间的一个数！                    ///" << endl;
			cout << "///                                                    ///" << endl;
			cout << "//////////////////////////////////////////////////////////" << endl;
			cin >> n;
		}
		switch (n)
		{
		case 1:
		{
			if (this->Speed >= enemy.Speed)
			{
				M_Attack(enemy);
				if (enemy.isAlive) M_Attacked(enemy);
				else break;
			}
			else
			{
				M_Attacked(enemy);
				if (this->isAlive) M_Attack(enemy);
				else
				{
					//切换下一只怪物并且调用Fight（）函数
				}
			}
		}
		case 2:
		{
			cout << this->Mname << "进行了防御，双方都未受到伤害" << endl;
			cout << "//////////////////////////////////////////////////////////" << endl;
		}
		case 3:
		{
			//打开背包，选择道具
		}
		case 4:
		{
			//打开背包，选择精灵球
			//捕捉概率 = 总血量-当前血量/总血量 * 精灵球概率倍率
		}
		case 5:
		{
			//返回场景
		}
		break;
		}
	}
}

void Monster::M_Attack(Monster enemy)
{
	int damage;
	damage = this->Attack - enemy.Defense;
	int check = this->Check(enemy);//判断属性优劣势
	if (damage <= 0)//对敌人造成伤害
	{
		cout << this->Mname << "对" << enemy.Mname << "发起了攻击，但没能击破" << enemy.Mname << "的防御，造成了 0 点伤害" << endl;
	}
	else {
		switch (check)
		{
		case 0:
		{
			cout << this->Mname << "对" << enemy.Mname << "发起了攻击，但效果微弱。造成了 " << damage / 2 << " 点伤害" << endl;
			enemy.CurValue -= damage / 2;
		}
		case 1:
		{
			cout << this->Mname << "对" << enemy.Mname << "发起了攻击。造成了 " << damage << " 点伤害" << endl;
			enemy.CurValue -= damage;
		}
		case 2:
		{
			cout << this->Mname << "对" << enemy.Mname << "发起了攻击，效果显著！造成了 " << damage * 2 << " 点伤害" << endl;
			enemy.CurValue -= damage * 2;
		}
		}
	}
	if (enemy.CurValue <= 0)
	{
		enemy.isAlive = false;
		cout << enemy.Mname << "体力不支，倒下了!" << endl;
		this->CurExper += enemy.Experience;
		if (this->CurExper >= this->MaxExper && this->CurLevel < this->MaxLevel)//经验足够且未达最高等级
		{
			this->CurLevel += 1;
			this->CurExper = 0;
			this->MaxExper += 20;
			this->MaxValue += 5;
			this->Attack += 2;
			this->Defense += 2;
			this->Speed += 1;
			//升级以后各项属性增加
			this->CurValue = MaxValue;
			//升级以后恢复状态
			cout << this->Mname << "升到了" << this->CurLevel << "级！各项属性获得了提升" << endl;
		}
		else//未达升级条件则显示当前经验
		{
			cout << this->Mname << "获得了" << enemy.Experience << "点经验，当前经验" << this->CurExper << " / " << this->MaxExper << endl;
		}
	}
	cout << "//////////////////////////////////////////////////////////" << endl;

	//返回场景***************************************************************************

}

void Monster::M_Attacked(Monster enemy)
{
	int damage;
	damage = enemy.Attack - this->Defense;
	int check = this->Check(enemy);//判断属性优劣势
	if (damage <= 0)//收到敌人伤害
	{
		cout << enemy.Mname << "对" << this->Mname << "发起了攻击，但没能击破" << this->Mname << "的防御，造成了 0 点伤害" << endl;
	}
	else {
		switch (check)
		{
		case 0:
		{
			cout << enemy.Mname << "对" << this->Mname << "发起了攻击，但效果微弱。造成了 " << damage / 2 << " 点伤害" << endl;
			this->CurValue -= damage / 2;
		}
		case 1:
		{
			cout << enemy.Mname << "对" << this->Mname << "发起了攻击。造成了 " << damage << " 点伤害" << endl;
			this->CurValue -= damage;
		}
		case 2:
		{
			cout << enemy.Mname << "对" << this->Mname << "发起了攻击，效果显著！造成了 " << damage * 2 << " 点伤害" << endl;
			this->CurValue -= damage * 2;
		}
		}
	}
	if (this->CurValue <= 0)
	{
		this->isAlive = false;
		cout << this->Mname << "体力不支，倒下了!" << endl;
	}
	cout << "//////////////////////////////////////////////////////////" << endl;
	//自动切换背包里下一只宝可梦，若都没存活，则返回场景*********************************************************************
}

int Monster::Check(Monster enemy)
{
	switch (this->Mnature)
	{
	case 0://一般属性时，对一般属性劣势，对其他属性正常
	{
		if (enemy.Mnature == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	case 1://火属性时，对火、水、岩石属性劣势，对草、冰、虫属性优势，对其他正常
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 2 || enemy.Mnature == 9)
		{
			return 0;
		}
		else if (enemy.Mnature == 4 || enemy.Mnature == 5 || enemy.Mnature == 8)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 2://水属性时，对水、草属性劣势，对火、岩石属性优势，对其他正常
	{
		if (enemy.Mnature == 2 || enemy.Mnature == 4)
		{
			return 0;
		}
		else if (enemy.Mnature == 1 || enemy.Mnature == 9)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 3://电属性时，对电、草属性劣势，对水、飞行属性优势，对其他正常
	{
		if (enemy.Mnature == 3 || enemy.Mnature == 4)
		{
			return 0;
		}
		else if (enemy.Mnature == 2 || enemy.Mnature == 6)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 4://草属性时,对火、草、毒、飞行、虫属性劣势，对水、岩石属性优势，对其他正常
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 4 || enemy.Mnature == 6 || enemy.Mnature == 7 || enemy.Mnature == 8)
		{
			return 0;
		}
		else if (enemy.Mnature == 2 || enemy.Mnature == 9)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 5://冰属性时，对火、水、冰属性劣势，对草、飞行属性优势，对其他正常
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 2 || enemy.Mnature == 5)
		{
			return 0;
		}
		else if (enemy.Mnature == 4 || enemy.Mnature == 6)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 6://飞行属性时，对电、岩石属性劣势，对草、虫属性优势，对其他正常
	{
		if (enemy.Mnature == 3 || enemy.Mnature == 9)
		{
			return 0;
		}
		else if (enemy.Mnature == 4 || enemy.Mnature == 8)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 7://毒属性时，对毒、岩石属性劣势,对草属性优势，对其他正常
	{
		if (enemy.Mnature == 7 || enemy.Mnature == 9)
		{
			return 0;
		}
		else if (enemy.Mnature == 4)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 8://虫属性时，对火、毒、飞行属性劣势，对草属性优势，对其他正常
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 6 || enemy.Mnature == 7)
		{
			return 0;
		}
		else if (enemy.Mnature == 4)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 9://岩石属性时，对火、冰、飞行、虫属性优势，对其他正常
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 5 || enemy.Mnature == 6 || enemy.Mnature == 8)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	break;
	}
}

string Monster::Show_Name()
{
	return this->Mname;
}

void Monster::Show_Detail()
{
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "名称：" << this->Mname << endl;
	cout << "属性:";
	switch (this->Mnature)
	{
	case 0:cout << "一般" << endl;
	case 1:cout << "火" << endl;
	case 2:cout << "水" << endl;
	case 3:cout << "电" << endl;
	case 4:cout << "草" << endl;
	case 5:cout << "冰" << endl;
	case 6:cout << "飞行" << endl;
	case 7:cout << "毒" << endl;
	case 8:cout << "虫" << endl;
	case 9:cout << "岩石" << endl;
		break;
	}
	cout << endl;
	cout << "HP：" << this->CurValue << " / " << this->MaxValue << endl;
	cout << "攻击力：" << this->Attack << endl;
	cout << "防御力：" << this->Defense << endl;
	cout << "速度：" << this->Speed << endl;
	cout << endl;
	cout << "等级：" << this->CurLevel << " / 80" << endl;
	cout << "经验：" << this->CurExper << " / " << this->MaxExper << endl;
}