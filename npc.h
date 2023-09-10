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
	void npctalk(Player pl);						//��npc��̸
	void npcFight();								//��npc��ս
	string getNpcName();
	int getNpcId();
	string getNpcDesc();
	Monster* getFirstMonster();
	void removeFirstMoster(Npc*npc);
	int getMonstersCount();
	void setNpc(int isdef);							//��������npc
	int ReturnIsdef();								//��ʾ�Ƿ񱻴��    
	void Recover();									//�ָ����������� 
private:
	string NpcName;     //npc����
	int NpcId;      //npc���
	string NpcDesc;     //npc����
	int isdefeated;  //npc�Ƿ񱻴��(1�����/0δ����)
	vector<Monster>gymBossMonsters;//����Ҫ��ս�ı����� 
	vector<string>TalkDialog;//�Ի��ı�
	vector<string>ChallengeDialog;//��ս�Ի��ı�
	vector<int>reward;//ս��Ʒ(Ĭ�ϵ�һ��Ϊ����������֮���Ϊ����id�Լ���������)
};

#endif