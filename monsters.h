#ifndef _MONSTER_H_
#define _MONSTER_H_

#pragma once

#include<windows.h>
#include<conio.h>

#include<cstdlib>
#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

class Monster {
public:
	Monster(int num,int level);
	void Meet(int n);//̽��Ұ���������ˢ�����߲�׽�¹��
//n�����ȼ����䣬��nΪ10����Ұ�����ȼ�����Ϊ10~20����nΪ20����Ұ�����ȼ�����Ϊ20~30
	void Fight(Monster enemy);//ս��ҳ����ʾ������Ҫ���� M_Attack �� M_Denfense �Ⱥ�����ʵ��ս��
	int Check(Monster enemy);//�ж�����������

	void M_Attack(Monster enemy);
	void M_Attacked(Monster enemy);
	//void M_Denfense(Monster enemy);

	string Show_Name();//������������
	void Show_Detail();//�������ֵ���ϸ��Ϣ
private:
	string Mname;		//��������
	int Mnature;		//��������
	//���Ա�ʾ��0��һ�㣩��1���𣩡�2��ˮ����3���磩��4���ݣ���5��������6�����У���7��������8���棩��9����ʯ��
	bool isAlive;		//�����Ƿ����

	int BasAttack;		//һ��������
	int BasDefense;		//һ��������
	int BasValue;		//һ��Ѫ��
	int BasSpeed;		//һ���ٶ�

	int MaxValue;		//���Ѫ��
	int CurValue;		//��ǰѪ��
	int Attack;			//������
	int Defense;		//������
	int Speed;			//�ٶ�

	int MaxLevel;		//��ߵȼ�
	int CurLevel;		//��ǰ�ȼ�
	int MaxExper;		//�������辭��
	int CurExper;		//��ǰ����

	int Experience;		//�����Ժ��þ���
	float AcuPercentage;	//��׽������
};

#endif;