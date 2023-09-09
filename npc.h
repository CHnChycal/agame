#pragma once
#ifndef NPC_H
#define NPC_H

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
	void npctalk(int currentLocationIndex);			//��npc��̸������ս��
	string getNpcName();
	int getNpcId();
	string getNpcDesc();
	void MainNpc(int currentLocationIndex);			//��npc�Ľ���
	void ShowNpc(int currentLocationIndex);          //չʾnpc��Ϣ
	Monster* getFirstMonster();
	void removeFirstMoster();
	int getMonstersCount();
	bool WinNpc(int whichNpc);                      //�ж��Ƿ�սʤnpc
	void setNpc(int isdef);							//��������npc
	int ReturnIsdef();								//��ʾ�Ƿ񱻴��
private:
	string NpcName;     //npc����
	int NpcId;      //npc���
	string NpcDesc;     //npc����
	int isdefeated;  //npc�Ƿ񱻴��(1�����/0δ����)
	vector<Monster>Monsters;//Я��������
	vector<string>TalkDialog;//�Ի��ı�
	vector<string>ChallengeDialog;//��ս�Ի��ı�
};

#endif