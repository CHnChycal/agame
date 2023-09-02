#ifndef MENU_H
#define MENU_H
#include <stdio.h>
#include <iostream>
#include "map.h"
#include "player.h"
#include "monsterbag.h"
class Menu
{
private:
    Player player;
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
    void save();
    void load();

    
};


#endif