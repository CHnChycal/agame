#pragma once
#ifndef NPC_H
#define NPC_H
#include<string>
#include"Goods.h"
#include"monsterbag.h"

class Npc {
public:
	Npc (int num);
	string getName();
	int getGoodsId();
	int getGoodsNum();
	int getMoney();
	bool isFighted(int whichNpc);
private:
	string name;
	int GoodsId;
	int Money;
	int GoodsNum;
	int type;
};

Goods goods[8] = { 0,1,2,3,4,5,6,7 };
#endif