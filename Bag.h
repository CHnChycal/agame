#pragma once
#ifndef BAG_H
#define BAG_H

#include<map>
#include"Goods.h"

class Bag {
public:
	Bag();
	~Bag();

	void showBags();
	void showGoods(int* goodsId, int* num);
	void showGoods(int goodsId, int num);  //重载应对两种情况
	int getGoodsNum();                     //得到背包物品的数量
	int getWhichGoodsId(int whichGoods);   //得到背包第whichGoods件物品的Id
	int getWhichGoodsNum(int whichGoods);  //得到背包第whichGoods件物品的数量
	void addGoods(int id, int num);
	bool reduceGoods(int id, int num);
	void saveBag();                        //最后保存游戏时单独将物品存入一个数组
	//int** getSaveBag();                  //得到保存物品的数组

	bool isUseDrug();                      //判断是否有药水可以用
	//void operator=(Bag bag);
	map<int, int>getMapBag();

private:
	map<int, int> bags;
	int saveGoods[20][2];                  //用来save物品的数组
	Goods goods[7] = { 0,1,2,3,4,5,6 };    //物品实例化
};


#endif