#pragma once
#ifndef MAP_H
#define MAP_H

#include <vector>
#include <string>

using namespace std;

class Map {
public:
    Map();
    void showMap();
    void exploreWilderness();
    void challengeGym(int currentLocationIndex);
    void enterShop();
    void enterHospital();
    void goToOtherCity(int& currentLocationIndex,string &currentLocation);
  
    void visitLocation(int i);
    string showLocation();
    
    void exploreWildness(int level);
    void explore(int percent);//野外探索的随机事件（？）
    void Meet(int num);//探索野外遇到怪物（刷级或者捕捉新怪物）
//n代表等级区间，若n为1，则野外怪物等级区间为1~21，若n为20，则野外怪物等级区间为20~40
    void Event();

    void battleAndWinBadge();
    void showAvailableCities(int currentLocationindex);
    void changeLocation(int newLocationIndex);
    int showIndex();
private:
    struct City {
        int id=1;
        std::string name="紫瑾市";

    };

    City cities[4];
    
    std::string currentLocation;
    int gymBadges;
    int currentLocationIndex;
    
    
}; 
#endif