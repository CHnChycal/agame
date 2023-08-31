#pragma once
#include "player.h"
#include <string>

using namespace std;

Player::Player() {
	name = "小智";
}
Player::~Player()
{

}
Player::Player(string _name)//可选构造函数
{
	name = _name;
}