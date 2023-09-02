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
	Player(string _name);//构造重载自定义姓名
	~Player();
	Player& operator=(const Player& c)//可以"="直接复制
	{
		if (this == &c)return *this;
		this->name = c.name; 
		return *this;
	}
	string Showname();

};
	