#ifndef _MONSTERBAG_H_
#define _MONSTERBAG_H_

#pragma once

#include"monsters.h"
#include<vector>

//单例模式，怪物背包只需要一个
class MonsterBag {
public:
	static MonsterBag* Getinstance()
	{
		return &monsterbag;
	}
	void Query();//查询背包里的宝可梦
	//void Detail();//显示宝可梦详细信息
	void Add();//添加宝可梦
	void Release();//放生宝可梦
private:
	MonsterBag();
	static MonsterBag monsterbag;
	vector<Monster> bag;
};
#endif
