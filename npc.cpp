#pragma once
#include<iostream>
#include"npc.h";

using namespace std;



Npc::Npc(int num) {
	type = num;
	switch (num) {
	case 0:
		name = "����";
		GoodsId = 0;
		GoodsNum = 1;
		Money = 100;
		break;
	case 1:
		name = "��ɯ";
		GoodsId = 1;
		GoodsNum = 1;
		Money = 200;
		break;
	case 2:
		name = "ǧ��";
		GoodsId = 2;
		GoodsNum = 1;
		Money = 300;
		break;
	case 3:
		name = "�׿���";
		GoodsId = 3;
		GoodsNum = 1;
		Money = 400;
		break;
	default:
		break;
	}
}



