#pragma once
#ifndef NPCTEXT.H
#define NPCTEXT.H

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
	Npc(int id);
	~Npc();
	void npctalk(int currentLocationIndex, Bag* bag);//��npc��̸������ս��
	string getNpcName();
	int getNpcId();
	string getNpcDesc();
	void MainNpc(int currentLocationIndex, Bag* bag);//��npc�Ľ���
	void ShowNpc(int currentLocationIndex);          //չʾnpc��Ϣ
	Monster* getFirstMonster();
	void removeFirstMoster();
	int getMonstersCount();
	bool WinNpc(int whichNpc);                      //�ж��Ƿ�սʤnpc
private:
	string NpcName;     //npc����
	int NpcId;      //npc���
	string NpcDesc;     //npc����
	int isdefeated;  //npc�Ƿ񱻴��
	vector<Monster>gymBossMonsters;
};

#endif