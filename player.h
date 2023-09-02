#pragma once

#include <string>
#include "map.h"
#include "monsters.h"
#include "monsterbag.h"

using namespace std;

class Player
{
private:
	string name;
public:
	Player();
	Player(string _name);//���������Զ�������
	~Player();
	Player& operator=(const Player& c)//����"="ֱ�Ӹ���
	{
		if (this == &c)return *this;
		this->name = c.name; 
		return *this;
	}
	string Showname();

};
	