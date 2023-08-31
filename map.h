#pragma once
#ifndef MAP_H
#define MAP_H

#include <string>
#include <vector>

class Map {
public:
    Map();

    void showMap();
    void exploreWilderness();
    void challengeGym();
    void enterShop();
    void enterHospital();
    void goToOtherCity();
    void exitGame();
    void visitLocation();

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