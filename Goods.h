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
	void showGoods();//显示物品详情
	int showGoodsNum();//显示物品数量
	void changeGoodsNum(int num);//修改物品数量
private:
	string name;     //物品名称
	int goodsId;
	int goodsNum=0;	//物品数量
	string desc;     //物品描述


};

#endif