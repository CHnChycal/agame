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
    string showLocation();
    void exploreWilderness();
    void challengeGym();
    void enterShop();
    void enterHospital();
    void goToOtherCity();
    void exitGame();
    void visitLocation(int i);

private:
    struct City {
        std::string name;
        std::vector<std::string> connectedCities;
        bool hasGym;
    };

    City cities[4];
    std::string currentLocation;
    int gymBadges;
    int currentLocationIndex;
    void displayOptions();
    void showWilderness();
    void encounterPokemon();
    bool checkGymRequirements(const std::string& gymName);
    void battleAndWinBadge(const std::string& gymName);
    void showAvailableCities();
    void changeLocation(const std::string& newLocation);
}; 
#endif