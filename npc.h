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

using namespace std;
class Npc {
public:
	bool ifChallengeSucess(Npc npc);
	Npc(int id);
	~Npc();
	void npctalk(int currentLocationIndex);//与npc交谈并进入战斗
	string getNpcName();
	int getNpcId();
	string getNpcDesc();
	void MainNpc(int currentLocationIndex);//与npc的交互
	void ShowNpc(int currentLocationIndex);          //展示npc信息
	Monster* getFirstMonster();
	void removeFirstMoster(Npc*npc);
	int getMonstersCount();
	bool WinNpc(int whichNpc); //判断是否战胜npc
	void setNpc(int isdef);							//读档设置npc
	int ReturnIsdef();;	             //显示是否被打败s      
private:
	string NpcName;     //npc名称
	int NpcId;      //npc序号
	string NpcDesc;     //npc描述
	int isdefeated;  //npc是否被打败(1被打败/0未击败)
	vector<Monster>gymBossMonsters;//道馆要挑战的宝可梦 
	vector<string>TalkDialog;//对话文本
	vector<string>ChallengeDialog;//挑战对话文本
};

#endif