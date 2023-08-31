#ifndef MENU_H
#define MENU_H
#include <stdio.h>
#include <iostream>
#include "map.h"
#include "player.h"
class Menu
{
private:
    Player player;
public:
    Menu();
    ~Menu();
    Player Gamestart(int i);
    void Playeredit(Player _player);//ÐÞ¸Äplayer
    void Gamerunning();
    void Store();
    void Hospital();
    void Battle();
    void PokemonBag();
    void ItemBag();
    void Map();


    
};


#endif