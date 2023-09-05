#ifndef _MONSTERBAG_H_
#define _MONSTERBAG_H_

#pragma once

#include"monsters.h"
#include<vector>

using namespace std;
class MonsterBag{
public:
	static MonsterBag* Getinstance()
	{
		return monsterbag;
	}
	void Query();//查询背包里的宝可梦
	//void Detail();//显示宝可梦详细信息
	void Add(Monster monster);//添加宝可梦
	void Release();//放生宝可梦
	Monster Return(int number);//返回特定序号宝可梦（序号为0~5）
	Monster Find();//查找背包里第一只状态为活着的宝可梦，一般用在战斗开始以及过程中有宝可梦阵亡切换宝可梦（
private:
	MonsterBag(){}
	static MonsterBag* monsterbag;
	vector<Monster> bag;
};

#endif
