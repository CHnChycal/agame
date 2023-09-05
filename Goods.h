#ifndef GOODS_H
#define GOODS_H
#pragma once

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Goods {
public:
	Goods(int id);
	~Goods();

	string getName();
	int getGoodsId();
	string getDesc();
	void showGoods();//��ʾ��Ʒ����
	int showGoodsNum();//��ʾ��Ʒ����
	void changeGoodsNum(int num);//�޸���Ʒ����
private:
	string name;     //��Ʒ����
	int goodsId;
	int goodsNum=0;	//��Ʒ����
	string desc;     //��Ʒ����


};

#endif