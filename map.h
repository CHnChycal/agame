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
   
    void explore();//Ò°ÍâÌ½Ë÷
    void Meet(int num);
    void Event();

    void battleAndWinBadge();
    void showAvailableCities(int currentLocationindex);
    void changeLocation(int newLocationIndex, string& currentlocation);
    int showIndex();
private:
    struct City {
        int id=1;
        std::string name="×ÏèªÊÐ";

    };

    City cities[4];
    
    std::string currentLocation;
    int gymBadges;
    int currentLocationIndex;
    
    
}; 
#endif