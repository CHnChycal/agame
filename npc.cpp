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
		npctalk(currentLocationIndex, bag);
		break;
	case 3:
		break;
	}

}
void Npc::ShowNpc(int currentLocationIndex) {
	;
}
Npc::Npc(int Id) {
	switch (Id) {
	case 0:
		NpcName = "����";
		NpcId = 0;
		NpcDesc = "�����е��ݹ���,�Ը��ʡ�ʮ���ֹ�,ϲ����ˬ�Ĵ�Ц���ƹܻ��µ������¡�";
		isdefeated = 0;
		gymBossMonsters = { Monster(5,40),Monster(5,40),Monster(5,40) };
		break;
	case 1:
		NpcName = "��ɯ";
		NpcId = 1;
		NpcDesc = "�������׵��ݹ���,���á���Ѫ����һλ���м����Ů�ԣ���������һ������󳣳���������������,�ƹܻ���������¡�";
		isdefeated = 0;
		gymBossMonsters = { Monster(18,40),Monster(18,40),Monster(18,40) };
		break;
	case 2:
		NpcName = "ǧ��";
		NpcId = 2;
		NpcDesc = "�Ȼ��гȻ����ݵĵ��ݹ�������ͨһ�����Ա����Σ��ƹ���ӻ��¡�";
		isdefeated = 0;
		gymBossMonsters = { Monster(12,40),Monster(12,40),Monster(12,40) };
		break;
	case 3:
		NpcName = "�׿���";
		NpcId = 3;
		NpcDesc = "�������������ݹ���,�侲������ֱ���˵������θк������Ũ�أ����ᡢ��Ͷ���ʧ����,�ƹ���λ��¡�";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	case 4:
		NpcName = "С��";
		NpcId = 4;
		NpcDesc = "С��������и������е�����רҵ�ı�����ѵ����,��ͨ��ʯ���ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	case 5:
		NpcName = "Сϼ";
		NpcId = 5;
		NpcDesc = "Сϼ�Ը�ܻ��á���Ϊһ����Ӿ������������ȥ˫�ӵ�����,��ͨˮ���ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	case 6:
		NpcName = "ģ����Ů";
		NpcId = 6;
		NpcDesc = "ģ����Ů�ļ�������಼ż,��ͨ��ͨ���ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	case 7:
		NpcName = "����";
		NpcId = 7;
		NpcDesc = "������һ���շ���ѧ��,��ͨ�����ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	case 8:
		NpcName = "����";
		NpcId = 8;
		NpcDesc = "�Ǳ����μķ�ϵͳ��һ������Ա���������ض������ͳǶ������ļķ�ϵͳ,��ͨ�������ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	case 9:
		NpcName = "����";
		NpcId = 9;
		NpcDesc = "��ʯӢ���˵�����������֮һ����ͨ�����Ա����Ρ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	case 10:
		NpcName = "������";
		NpcId = 10;
		NpcDesc = "��ľ������,�����̵��梣�Ҳ�Ǵ�ľ��ʿ����Ů,��ͨ�����ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	case 11:
		NpcName = "��ľ��ʿ";
		NpcId = 11;
		NpcDesc = "��ľѩ�ɲ�ʿ,�ǹض������ı����β�ʿ,��ͨ�����ԡ�";
		isdefeated = 0;
		gymBossMonsters = { Monster(13,40),Monster(13,40),Monster(13,40) };
		break;
	case 12:
		NpcName = "����";
		NpcId = 12;
		NpcDesc = "�����Ǵ�ľ��ʿ�����ӣ��и�����������,��ͨһ�����ԡ�";
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
		if (bag->showGoodNum(0) <= 0) {//���Ƿ��л����жϴ����npcû��
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
		if (bag->showGoodNum(1) <= 0) {
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
		if (bag->showGoodNum(2) <= 0) {
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
		if (bag->showGoodNum(3) <= 0) {
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

string Npc::getNpcName() {
	return string(NpcName);
}

int Npc::getNpcId() {
	return NpcId;
}

string Npc::getNpcDesc() {
	return string(NpcDesc);
}

