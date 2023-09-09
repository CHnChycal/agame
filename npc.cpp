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
	return "";  // ���ؿ��ַ�����ʾ�ı�������
}



Npc::Npc(int num) {
	type = num;
	switch (num) {
	case 0:
		name = "����";
		GoodsId = 0;
		GoodsNum = 1;
		Money = 100;
		dialog = { "������","��ӭ������ϵ����","��ս������ʼ����׼��������","��ϲ����ս�ɹ�����ö���¾ͽ�������","���ź�����սʧ�ܣ���������������" };
		gymBossMonsters = { Monster(5,40),Monster(5,40),Monster(5,40) };
		break;
	case 1:
		name = "��ɯ";
		GoodsId = 1;
		GoodsNum = 1;
		Money = 200;
		dialog = { "��ɯ��","��ӭ������ϵ����","��ս������ʼ����׼��������","��ϲ����ս�ɹ�����ö���¾ͽ�������","���ź�����սʧ�ܣ���������������" };
		gymBossMonsters = { Monster(18,40),Monster(18,40),Monster(18,40) };
		break;
	case 2:
		name = "ǧ��";
		GoodsId = 2;
		GoodsNum = 1;
		Money = 300;
		dialog = { "ǧ�","��ӭ������ͨϵ����","��ս������ʼ����׼��������","��ϲ����ս�ɹ�����ö���¾ͽ�������","���ź�����սʧ�ܣ���������������" };
		gymBossMonsters = { Monster(12,40),Monster(12,40),Monster(12,40) };
		break;
	case 3:
		name = "�׿���";
		GoodsId = 3;
		GoodsNum = 1;
		Money = 400;
		dialog = { "�׿���","��ӭ����ˮϵ����","��ս������ʼ����׼��������","��ϲ����ս�ɹ�����ö���¾ͽ�������","���ź�����սʧ�ܣ���������������" };
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	default:
		break;
	}
}
