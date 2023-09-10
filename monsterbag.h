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
	void Query();//��ѯ������ı�����
	int MonsterNum();//��ѯ������ı���������
	void showMonster();

	//void Detail();//��ʾ��������ϸ��Ϣ
	void Add(Monster monster);//��ӱ�����
	void Release();//����������
	Monster* Return(int number);//�����ض���ű����Σ����Ϊ0~5��
	Monster* Find();//���ұ������һֻ״̬Ϊ���ŵı����Σ�һ������ս����ʼ�Լ��������б����������л�������
	void ChangeMonster_Bag();//�������л�������˳��
	void Clear();//��ձ��������ڶ���
private:
	MonsterBag(){}
	static MonsterBag* monsterbag;
	vector<Monster> bag;
};

#endif
