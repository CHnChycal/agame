#pragma once
#include "player.h"
#include <string>

using namespace std;

Player::Player() {
	name = "С��";
}
Player::~Player()
{

}
Player::Player(string _name)//��ѡ���캯��
{
	name = _name;
}