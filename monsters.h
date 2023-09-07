#ifndef _MONSTER_H_
#define _MONSTER_H_

#pragma once

#include<windows.h>
#include<conio.h>

#include<cstdlib>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include"bag.h"

using namespace std;

class Monster {
public:
	Monster(int num,int level);
	void SetExper(int curexper);//设置经验值
	void SetValue(int curvalue);//设置血量
	void Recover();//血量回满
	//void Meet(int n);//探索野外遇到怪物（刷级或者捕捉新怪物）
//n代表等级区间，若n为1，则野外怪物等级区间为1~21，若n为20，则野外怪物等级区间为20~40
	void Fight(Monster enemy);//战斗页面显示，但需要调用 M_Attack 和 M_Denfense 等函数来实现战斗
	void UsePotion();//使用恢复药水
	void UseBall(Monster enemy);//使用精灵球捕捉
	int Check(Monster enemy);//判断属性优劣势

	void M_Attack(Monster enemy);
	void M_Attacked(Monster enemy);
	//void M_Denfense(Monster enemy);
	void Caught();		//妖怪被捉，把hascaught改成true
	bool HasCaught();	//返回hascaught
	bool IsAlive();
	string Show_Name();	//返回妖怪名字
	int Id();			//返回妖怪的id
	int CURValue();		//返回妖怪当前血量
	int CURLevel();		//返回妖怪的当前等级
	int CURExper();		//返回妖怪的当前经验值
	void Show_Detail();	//返回妖怪的详细信息
private:
	string Mname;		//妖怪名字
	int id;				//创建宝可梦时的id
	int Mnature;		//妖怪属性
	//属性表示：0（一般）、1（火）、2（水）、3（电）、4（草）、5（冰）、6（飞行）、7（毒）、8（虫）、9（岩石）
	bool isAlive;		//妖怪是否活着
	bool hasCaught;		//妖怪是否被捕捉

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