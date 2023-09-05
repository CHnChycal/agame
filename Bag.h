#pragma once
#ifndef BAG_H
#define BAG_H

#include"Goods.h"
#include<vector>
class Bag {
public:
	Bag();//构造函数
	void showbag();
	void editGoodNum(int id, int num);//修改物品数量，负数则为减少
	int showGoodNum(int id);//返回物品数量
	void reloadGoodNum(int id, int num);//读取时使用，恢复物品数量

private:
	vector<Goods> goods;

};


#endif