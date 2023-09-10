#pragma once
#ifndef MAP_H
#define MAP_H

#include <vector>
#include <string>

using namespace std;

class Map {
public:
    Map();
    void showMap();//展示地图
    void exploreWilderness();//野外探索
    void challengeGym(int currentLocationIndex);//挑战道馆
    void enterShop();//商店
    void enterHospital();//医院
    void goToOtherCity(int& currentLocationIndex,string &currentLocation);//地点更改
    void visitLocation(int i);//暂废
    string showLocation();//输出当前地点的名称
    void exploreWildness(int level);//野外探索的具体功能的实现
    void explore(int percent);//野外探索的随机事件（？）
    void Meet(int num);//探索野外遇到怪物（刷级或者捕捉新怪物）
//n代表等级区间，若n为1，则野外怪物等级区间为1~21，若n为20，则野外怪物等级区间为20~40
    void showAvailableCities(int currentLocationindex);//展示从当前城市出发可以到达的目的地
    void changeLocation(int newLocationIndex);//通过对地点id的修改转换相应的地点名称
    int showIndex();//返回地点id
private:
    struct City {
        int id=1;
        std::string name="紫瑾市";

    };

    City cities[4];//四个城市
    
    std::string currentLocation;
    int currentLocationIndex;
    
    
}; 
#endif