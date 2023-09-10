#pragma once
#include<iostream>
#include"npc.h";
#include"monsters.h"
using namespace std;
Monster* Npc::getFirstMonster()
{
	if(!gymBossMonsters.empty()) {
		
		return &gymBossMonsters[0];

	}
	else return nullptr;
}


void Npc::removeFirstMoster()
{
	if ( gymBossMonsters[0].CURValue() == 0) {
		gymBossMonsters.erase(gymBossMonsters.begin());
		
	}

}
bool Npc::ifChallengeSucess(int i) {
	if (Npc(i).gymBossMonsters.empty())return 1;
	else return 0;

}
int Npc::getMonstersCount() {
	return gymBossMonsters.size();
}


void Npc::MainNpc(int currentLocationIndex) {
	cout << "��Ҫ��ʲô?" << endl << "1.�۲�npc" << endl << "2.��npc��̸��ս��" << endl << "3.�뿪����";
	int choice;
	cin >> choice;
	while (choice != 1 && choice != 2 && choice != 3)
	{
		cout << "��������ǹ���Ļ��ǲ�С�ĵģ�" << endl;
		cin >> choice;
	}
	system("cls");
	switch (choice) {
	case 1:
		ShowNpc(currentLocationIndex);
		break;
	case 2:
		npctalk(currentLocationIndex);
		break;
	case 3:
		break;
	}

}
void Npc::ShowNpc(int currentLocationIndex) {
	cout << "Npc���֣�" << Npc(currentLocationIndex).getNpcName() << endl;
	cout << "Npc���飺" << Npc(currentLocationIndex).getNpcDesc() << endl;

}
Npc::Npc(  int Id) {
	switch (Id) {
	case 0:
		NpcName = "����";
		NpcId = 0;
		NpcDesc = "�����е��ݹ���,�Ը��ʡ�ʮ���ֹ�,ϲ����ˬ�Ĵ�Ц���ƹܻ��µ������¡�";
		isdefeated = 0;
		gymBossMonsters = { Monster(5,10),Monster(23,15),Monster(27,15) };
		break;
	case 1:
		NpcName = "��ɯ";
		NpcId = 1;
		NpcDesc = "�������׵��ݹ���,���á���Ѫ����һλ���м����Ů�ԣ���������һ������󳣳���������������,�ƹܻ���������¡�";
		isdefeated = 0;
		gymBossMonsters = { Monster(41,15),Monster(33,20),Monster(29,20) };
		break;
	case 2:
		NpcName = "ǧ��";
		NpcId = 2;
		NpcDesc = "�Ȼ��гȻ����ݵĵ��ݹ�������ͨһ�����Ա����Σ��ƹ���ӻ��¡�";
		isdefeated = 0;
		gymBossMonsters = { Monster(32,25),Monster(36,30),Monster(12,30) };
		break;
	case 3:
		NpcName = "�׿���";
		NpcId = 3;
		NpcDesc = "�������������ݹ���,�侲������ֱ���˵������θк������Ũ�أ����ᡢ��Ͷ���ʧ����,�ƹ���λ��¡�";
		isdefeated = 0;
		gymBossMonsters = { Monster(24,35),Monster(30,35),Monster(39,40) };
		break;
	case 4:
		NpcName = "С��";
		NpcId = 4;
		NpcDesc = "С��������и������е�����רҵ�ı�����ѵ����,��ͨ��ʯ���ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(14,15),Monster(22,20),Monster(44,20) };
		break;
	case 5:
		NpcName = "Сϼ";
		NpcId = 5;
		NpcDesc = "Сϼ�Ը�ܻ��á���Ϊһ����Ӿ������������ȥ˫�ӵ�����,��ͨ�����ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(46,40),Monster(47,40),Monster(25,40) };
		break;
	case 6:
		NpcName = "ģ����Ů";
		NpcId = 6;
		NpcDesc = "ģ����Ů�ļ�������಼ż,��ͨ��ͨ���ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(35,20),Monster(36,25),Monster(49,20) };
		break;
	case 7:
		NpcName = "����";
		NpcId = 7;
		NpcDesc = "������һ���շ���ѧ��,��ͨ�����ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(40,30),Monster(34,30),Monster(20,25) };
		break;
	case 8:
		NpcName = "����";
		NpcId = 8;
		NpcDesc = "�Ǳ����μķ�ϵͳ��һ������Ա���������ض������ͳǶ������ļķ�ϵͳ,��ͨ�������ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(42,20),Monster(45,20),Monster(9,15) };
		break;
	case 9:
		NpcName = "����";
		NpcId = 9;
		NpcDesc = "��ʯӢ���˵�����������֮һ����ͨ�����Ա����Ρ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(48,35),Monster(49,30),Monster(3,40) };
		break;
	case 10:
		NpcName = "������";
		NpcId = 10;
		NpcDesc = "��ľ������,�����̵��梣�Ҳ�Ǵ�ľ��ʿ����Ů,��ͨ�����ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(37,20),Monster(38,25),Monster(31,20) };
		break;
	case 11:
		NpcName = "��ľ��ʿ";
		NpcId = 11;
		NpcDesc = "��ľѩ�ɲ�ʿ,�ǹض������ı����β�ʿ,��ͨ�����ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(16,20),Monster(10,20),Monster(28,25) };
		break;
	case 12:
		NpcName = "����";
		NpcId = 12;
		NpcDesc = "�����Ǵ�ľ��ʿ�����ӣ��и�����������,��ͨ�����ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(0,40),Monster(10,40),Monster(16,40) };
		break;
	default:
		break;
	}
}
Npc::~Npc() {}

void Npc::npctalk(int NpcId) {
	string text;
	Bag* bp = Bag::Getinstance();
	MonsterBag* mbp = MonsterBag::Getinstance();
	if (NpcId < 4) {
		switch (NpcId) {
		case 1: {
			if (bp->showGoodNum(0) <= 0) {//���Ƿ��л����жϴ����npcû��
				text = "����:���������������ˣ���֪������Ҫʲô��������ҵı����ζ�ս���۹�����������˵��û�����㣬�һ�������Ľ��ģ�";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
				cout << endl;
				text = "�㣺�ߣ��ҲŲ������أ������������Ա��԰ɣ�";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
				system("cls");
			}
			else {
				text = "������������Ҫ�����ǵĵ�س���ˡ������ǳ�õ磬���ǻ�ܸ��˽��������ս�����ԣ���ʱ��Ļ������ɣ�����";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
			}
			break;
		}
		case 2: {
			if (bp->showGoodNum(1) <= 0) {
				text = "��ɯ������һ�β�������й�����Ұ������Σ��Ұ�ս�������ҡ����Ұ������ݣ������������ȵ���ʽ��ս�ɣ�";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
				cout << endl;
				text = "�㣺������ô˵�������Ŷ�����ҿ�����ı������ж�ǿ�ɣ�";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
				system("cls");
			}
			else {
				text = "��ɯ�����ǿ������������һ���ˡ����Ͳ�ͬ����ս��������ѧ����ͬ���˵��ŵ㣡";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
			}
			break;
		}
		case 3: {
			if (bp->showGoodNum(2) <= 0) {
				text = "ǧ��š������������Ѿ�Ӯ����ö�����ˡ���������ܺ��Լ��ĺ�����һ������������ս�������ǣ�ս������ս������Ϊ���ݹ������һᾡ������Ӯȡʤ����";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
				cout << endl;
				text = "�㣺�õ��ϰ֣��ɱ��Ҵ������������";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
				system("cls");
			}
			else {
				text = "ǧ����������ʲô���ҵ����롭�������������Ѿ�ʵ���ˡ�";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
			}
			break;
		}
		case 4: {
			if (bp->showGoodNum(3) <= 0) {
				text = "�׿�����������ʽ�������Լ��������׿����������ݵĵ��ݹ��������ڣ��������ı����ε�����չ�ָ��ҿ���.";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
				cout << endl;
				text = "�㣺��������ʽ�������Լ���������ʼ�ʣ�������������ܵģ�";
				for (int i = 0; i < text.length(); i++)
				{
					Sleep(10);
					cout << text[i];
				}
				system("cls");
			}
			else {
				text = "�׿���̫���ˣ��������̫���ˣ�����һ�������ı�����ѵ���ҡ���Ϊ�����������ı����ζ�ϲ�á�";
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
	else {
		cout << Npc(NpcId).getNpcName() << ":";
		text = "����˭����Ҫ����ս���𣿺ã�������㣡";
		for (int i = 0; i < text.length(); i++)
		{
			Sleep(10);
			cout << text[i];
		}
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

void Npc::setNpc(int isdef)
{
	isdefeated = isdef;
}

int Npc::ReturnIsdef()
{
	return isdefeated;
}
