#pragma once
#ifndef NPCTEXT_H
#define NPCTEX_H

#include<string>
#include<iostream>
#include"monsterbag.h"
#include<vector>
#include"map.h"
#include"Bag.h"
#include"Goods.h"
#include"monsters.h"
using namespace std;
class Npc {
public:
	bool ifChallengeSucess(int i);
	Npc(int id);
	~Npc();
	void npctalk(int currentLocationIndex, Bag* bag);//与npc交谈并进入战斗
	string getNpcName();
	int getNpcId();
	string getNpcDesc();
	void MainNpc(int currentLocationIndex, Bag* bag);//与npc的交互
	void ShowNpc(int currentLocationIndex);          //展示npc信息
	Monster* getFirstMonster();
	void removeFirstMoster();
	int getMonstersCount();
	bool WinNpc(int whichNpc);                      //判断是否战胜npc
private:
	string NpcName;     //npc名称
	int NpcId;      //npc序号
	string NpcDesc;     //npc描述
	int isdefeated;  //npc是否被打败
	vector<Monster>gymBossMonsters;
};

#endif