#pragma once
#ifndef BAG_H
#define BAG_H

#include"Goods.h"
#include<vector>
class Bag {
public:
	Bag();//���캯��
	void showbag();
	void editGoodNum(int id, int num);//�޸���Ʒ������������Ϊ����
	int showGoodNum(int id);//������Ʒ����
	void reloadGoodNum(int id, int num);//��ȡʱʹ�ã��ָ���Ʒ����

private:
	vector<Goods> goods;

};


#endif