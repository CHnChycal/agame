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
	void showGoods();

private:
	string name;     //��Ʒ����
	int goodsId;
	string desc;     //��Ʒ����


};

#endif