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
    void challengeGym(int& gymbadges, int currentLocationIndex);
    void enterShop();
    void enterHospital();
    void goToOtherCity(int& currentLocationIndex,string &currentLocation);
  
    void exitGame();
    void visitLocation(int i);
    void displayOptions();
    string showLocation();
   
    void exploreWildness(int level);
    void explore(int percent);//Ұ��̽��������¼�������
    void Meet(int num);//̽��Ұ���������ˢ�����߲�׽�¹��
//n����ȼ����䣬��nΪ1����Ұ�����ȼ�����Ϊ1~21����nΪ20����Ұ�����ȼ�����Ϊ20~40
    void Event();

    void battleAndWinBadge();
    void showAvailableCities(int currentLocationindex);
    void changeLocation(int newLocationIndex);
    int showIndex();
private:
    struct City {
        int id=1;
        std::string name="�����";

    };

    City cities[4];
    
    std::string currentLocation;
    int gymBadges;
    int currentLocationIndex;
    
    
}; 
#endif