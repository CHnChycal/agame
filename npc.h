#pragma once
#ifndef NPC_H
#define NPC_H

#include<string>
#include<iostream>
#include<vector>
#include"map.h"
#include"Bag.h"
#include"Goods.h"
#include"monsters.h"
#include"monsterbag.h"
#include "player.h"
using namespace std;
class Npc {
public:
	Npc(int id);
	void npctalk(Player pl);						//与npc交谈
	void npcFight();								//与npc交战
	string getNpcName();
	int getNpcId();
	string getNpcDesc();
	Monster* getFirstMonster();
	void removeFirstMoster(Npc*npc);
	int getMonstersCount();
	void setNpc(int isdef);							//读档设置npc
	int ReturnIsdef();								//显示是否被打败    
	void Recover();									//恢复其所有生命 
private:
	string NpcName;     //npc名称
	int NpcId;      //npc序号
	string NpcDesc;     //npc描述
	int isdefeated;  //npc是否被打败(1被打败/0未击败)
	vector<Monster>gymBossMonsters;//道馆要挑战的宝可梦 
	vector<string>TalkDialog;//对话文本
	vector<string>ChallengeDialog;//挑战对话文本
	vector<int>reward;//战利品(默认第一个为经验数量，之后的为道具id以及道具数量)
};

#endif