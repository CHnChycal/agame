#pragma once
#include<iostream>
#include"npc.h";
#include"monsterbag.h"

using namespace std;




  Monster* Npc::getFirstMonster()
{
	if (!gymBossMonsters.empty()) {
		return &gymBossMonsters[0];
	}
	return nullptr;
}

void Npc::removeFirstMoster()
{
	if (!gymBossMonsters.empty()) {
		gymBossMonsters.erase(gymBossMonsters.begin());
	}

}
int Npc::getMonstersCount() {
	return gymBossMonsters.size();
}

std::string Npc::getDialogueText(int index) {
	if (index >= 0 && index < dialog.size()) {
		return dialog[index];
	}
	return "";  // 返回空字符串表示文本不存在
}



Npc::Npc(int num) {
	type = num;
	switch (num) {
	case 0:
		name = "铁旋";
		GoodsId = 0;
		GoodsNum = 1;
		Money = 100;
		dialog = { "铁旋：","欢迎来到电系道馆","挑战即将开始，你准备好了吗","恭喜你挑战成功，这枚徽章就交给你了","很遗憾，挑战失败，请多多历练再来吧" };
		gymBossMonsters = { Monster(5,40),Monster(5,40),Monster(5,40) };
		break;
	case 1:
		name = "亚莎";
		GoodsId = 1;
		GoodsNum = 1;
		Money = 200;
		dialog = { "亚莎：","欢迎来到火系道馆","挑战即将开始，你准备好了吗","恭喜你挑战成功，这枚徽章就交给你了","很遗憾，挑战失败，请多多历练再来吧" };
		gymBossMonsters = { Monster(18,40),Monster(18,40),Monster(18,40) };
		break;
	case 2:
		name = "千里";
		GoodsId = 2;
		GoodsNum = 1;
		Money = 300;
		dialog = { "千里：","欢迎来到普通系道馆","挑战即将开始，你准备好了吗","恭喜你挑战成功，这枚徽章就交给你了","很遗憾，挑战失败，请多多历练再来吧" };
		gymBossMonsters = { Monster(12,40),Monster(12,40),Monster(12,40) };
		break;
	case 3:
		name = "米可莉";
		GoodsId = 3;
		GoodsNum = 1;
		Money = 400;
		dialog = { "米可莉：","欢迎来到水系道馆","挑战即将开始，你准备好了吗","恭喜你挑战成功，这枚徽章就交给你了","很遗憾，挑战失败，请多多历练再来吧" };
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	default:
		break;
	}
}
