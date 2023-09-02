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
	~Monster();
	void Meet(int n);//探索野外遇到怪物（刷级或者捕捉新怪物）
//n代表等级区间，若n为10，则野外怪物等级区间为10~20，若n为20，则野外怪物等级区间为20~30
	void Fight(Monster enemy);//战斗页面显示，但需要调用 M_Attack 和 M_Denfense 等函数来实现战斗
	int Check(Monster enemy);//判断属性优劣势

	void M_Attack(Monster enemy);
	void M_Attacked(Monster enemy);
	void M_Denfense(Monster enemy);

	string Show_Name();//返回妖怪名字
	void Show_Detail();//返回妖怪的详细信息
private:
	string Mname;		//妖怪名字
	int Mnature;		//妖怪属性
	//属性表示：0（一般）、1（火）、2（水）、3（电）、4（草）、5（冰）、6（飞行）、7（毒）、8（虫）、9（岩石）
	bool isAlive;		//妖怪是否活着

	int BasAttack;		//一级攻击力
	int BasDefense;		//一级防御力
	int BasValue;		//一级血量
	int BasSpeed;		//一级速度

	int MaxValue;		//最大血量
	int CurValue;		//当前血量
	int Attack;			//攻击力
	int Defense;		//防御力
	int Speed;			//速度

	int MaxLevel;		//最高等级
	int CurLevel;		//当前等级
	int MaxExper;		//升级所需经验
	int CurExper;		//当前经验

	int Experience;		//击败以后获得经验
	float AcuPercentage;	//捕捉可能性
};

#endif;