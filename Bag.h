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
	void showGoods(int goodsId, int num);  //����Ӧ���������
	int getGoodsNum();                     //�õ�������Ʒ������
	int getWhichGoodsId(int whichGoods);   //�õ�������whichGoods����Ʒ��Id
	int getWhichGoodsNum(int whichGoods);  //�õ�������whichGoods����Ʒ������
	void addGoods(int id, int num);
	bool reduceGoods(int id, int num);
	void saveBag();                        //��󱣴���Ϸʱ��������Ʒ����һ������
	//int** getSaveBag();                  //�õ�������Ʒ������

	bool isUseDrug();                      //�ж��Ƿ���ҩˮ������
	//void operator=(Bag bag);
	map<int, int>getMapBag();

private:
	map<int, int> bags;
	int saveGoods[20][2];                  //����save��Ʒ������
	Goods goods[7] = { 0,1,2,3,4,5,6 };    //��Ʒʵ����
};


#endif