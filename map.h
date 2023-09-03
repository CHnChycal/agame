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
    void challengeGym();
    void enterShop();
    void enterHospital();
    void goToOtherCity(int& currentLocationIndex,string &currentLocation);
  
    void exitGame();
    void visitLocation(int i);
    void displayOptions();
    string showLocation();
   
    void showWilderness();
    void battleAndWinBadge();
    void showAvailableCities(int currentLocationindex);
    void changeLocation(int newLocationIndex, string& currentlocation);

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