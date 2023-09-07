#ifndef MENU_H
#define MENU_H
#include <stdio.h>
#include <iostream>
#include "map.h"
#include "player.h"
#include "monsterbag.h"
#include "Bag.h"
#include "Goods.h"
class Menu
{
private:
    Player player;//�洢�������
    Map map;

public:
    Menu();
    ~Menu();
    Player Gamestart(int i);
    void Playeredit(Player _player);//�޸�player
    int Gamerunning();
    void Battle();
    void PokemonBag();
    void ItemBag();
    void ShowMap();
    int save();
    int load();
    void showBag();
    
};


#endif