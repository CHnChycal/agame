#pragma once
#include<iostream>
#include"npc.h";
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


void Npc::MainNpc(int currentLocationIndex, Bag* bag) {
	cout << "你要干什么?" << endl << "1.观察npc" << endl << "2.与npc交谈并战斗" << endl << "3.离开道馆";
	int choice;
	cin >> choice;
	while (choice != 1 && choice != 2 && choice != 3)
	{
		cout << "输入错误！是故意的还是不小心的？" << endl;
		cin >> choice;
	}
	system("cls");
	switch (choice) {
	case 1:
		ShowNpc(currentLocationIndex);
		break;
	case 2:
		npctalk(currentLocationIndex, bag);
		break;
	case 3:
		break;
	}

}
void Npc::ShowNpc(int currentLocationIndex) {

}
Npc::Npc(int Id) {
	switch (Id) {
	case 0:
		NpcName = "铁旋";
		NpcId = 0;
		NpcDesc = "紫堇市道馆馆主,性格开朗、十分乐观,喜欢豪爽的大笑，掌管徽章电力徽章。";
		isdefeated = 0;
		gymBossMonsters = { Monster(5,40),Monster(5,40),Monster(5,40) };
		break;
	case 1:
		NpcName = "亚莎";
		NpcId = 1;
		NpcDesc = "斧炎镇斧炎道馆馆主,活泼、热血，是一位富有激情的女性，当热衷于一件事情后常常会忘记其他事情,掌管徽章烈焰徽章。";
		isdefeated = 0;
		gymBossMonsters = { Monster(18,40),Monster(18,40),Monster(18,40) };
		break;
	case 2:
		NpcName = "千里";
		NpcId = 2;
		NpcDesc = "橙华市橙华道馆的道馆馆主。精通一般属性宝可梦，掌管天秤徽章。";
		isdefeated = 0;
		gymBossMonsters = { Monster(12,40),Monster(12,40),Monster(12,40) };
		break;
	case 3:
		NpcName = "米可莉";
		NpcId = 3;
		NpcDesc = "琉璃岛琉璃道馆馆主,冷静、处事直截了当，责任感和正义感浓重，温柔、随和而不失稳重,掌管雨滴徽章。";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	default:
		break;
	}
}
Npc::~Npc() {}

void Npc::npctalk(int currentLocationIndex, Bag* bag) {
	string text;
	switch (currentLocationIndex) {
	case 1: {
		if (bag->showGoodNum(0) <= 0) {//看是否有徽章判断打败了npc没有
			text = "铁旋:啊哈！你终于来了！我知道你想要什么。你想和我的宝可梦对战！哇哈哈哈哈！别说我没警告你，我会让你火花四溅的！";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			text = "你：哼！我才不怕你呢！让我们来比试比试吧！";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			system("cls");
		}
		else {
			text = "铁旋：我们又要给我们的电池充电了。等我们充好电，我们会很高兴接受你的挑战。所以，有时间的话再来吧，好吗？";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
		}
		break;
	}
	case 2: {
		if (bag->showGoodNum(1) <= 0) {
			text = "亚莎：打输一次不会让我泄气。我爱宝可梦，我爱战斗，而且……我爱这间道馆！让我们用炙热的招式开战吧！";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			text = "你：听你这么说，你很勇哦？让我看看你的宝可梦有多强吧！";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			system("cls");
		}
		else {
			text = "亚莎：你的强大让我想起了一个人……和不同的人战斗，就能学到不同的人的优点！";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
		}
		break;
	}
	case 3: {
		if (bag->showGoodNum(2) <= 0) {
			text = "千里：嗯……看来，你已经赢得两枚徽章了。我真高兴能和自己的孩子来一场真真正正的战斗。但是，战斗就是战斗！身为道馆馆主，我会尽我所能赢取胜利。";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			text = "你：好的老爸！可别被我打得满地找牙！";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			system("cls");
		}
		else {
			text = "千里：你的梦想是什么？我的梦想……哈哈哈……已经实现了。";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
		}
		break;
	}
	case 4: {
		if (bag->showGoodNum(3) <= 0) {
			text = "米可莉：请容我正式介绍我自己。我是米可莉，琉璃道馆的道馆馆主。现在，把你和你的宝可梦的力量展现给我看吧.";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			cout << endl;
			text = "你：请容我正式介绍我自己。我是秦始皇，我是来将你击败的！";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
			system("cls");
		}
		else {
			text = "米可莉：太棒了！你真的是太棒了！你是一个真正的宝可梦训练家。我为能遇见你和你的宝可梦而喜悦。";
			for (int i = 0; i < text.length(); i++)
			{
				Sleep(10);
				cout << text[i];
			}
		}
		break;
	}
		  break;
	}
}

string Npc::getNpcName() {
	return string(NpcName);
}

int Npc::getNpcId() {
	return NpcId;
}

string Npc::getNpcDesc() {
	return string(NpcDesc);
}