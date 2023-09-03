#pragma once
#include"Goods.h"

Goods::Goods(int id)
{
	switch (id)
	{
	case 0: {
		goodsId = id;
		name = "电力徽章";
		desc = "在紫堇市的紫堇道馆挑战成功后获得，你能隐隐感受到一股电力在体内流动";
		break;
	}
	case 1: {
		goodsId = id;
		name = "烈焰徽章";
		desc = "在釜炎镇的釜炎道馆挑战成功后获得，你心里感到有烈火在燃烧。";
		break;
	}
	case 2: {
		goodsId = id;
		name = "天秤徽章";
		desc = "在橙华市的橙华道馆挑战成功后获得，击败你老爸后你感到前所未有的快乐。";
		break;
	}
	case 3: {
		goodsId = id;
		name = "雨滴徽章";
		desc = "在琉璃市的琉璃道馆挑战成功后获得，优雅又不失华丽的外表令你感到惊奇。";
		break;
	}
	case 4: {
		goodsId = id;
		name = "治疗药水";
		desc = "里面装有红红的液体，可以帮助宝可梦回复血量，不知到味道怎么样。";
		break;
	}case 5: {
		goodsId = id;
		name = "普通精灵球";
		desc = "可以捕捉宝可梦，看起来平平无奇";
		break;
	}
	case 6: {
		goodsId = id;
		name = "大师精灵球";
		desc = "可以捕捉宝可梦，外表镶嵌着黄金，看起来很珍贵。";
		break;
	}
	default:
		break;
	}
}

Goods::~Goods()
{
}

string Goods::getName() {
	return string(name);
}

int Goods::getGoodsId() {
	return goodsId;
}

string Goods::getDesc() {
	return string(desc);
}

void Goods::showGoods() {
	cout << name << endl;
	cout << desc << endl;
}