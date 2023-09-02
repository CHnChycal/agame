#ifndef _MONSTERBAG_H_
#define _MONSTERBAG_H_

#pragma once

#include"monsters.h"
#include<vector>

//����ģʽ�����ﱳ��ֻ��Ҫһ��
class MonsterBag {
public:
	static MonsterBag* Getinstance()
	{
		return &monsterbag;
	}
	void Query();//��ѯ������ı�����
	//void Detail();//��ʾ��������ϸ��Ϣ
	void Add(Monster monster);//��ӱ�����
	void Release();//����������
	Monster Find();//���ұ������һֻ״̬Ϊ���ŵı����Σ�һ������ս����ʼ�Լ��������б����������л������Σ�
private:
	MonsterBag();
	static MonsterBag monsterbag;
	vector<Monster> bag;
};
#endif
