#include "map.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Map::Map() : currentLocation("紫瑾市"), gymBadges(0) {
    cities[0] = { "紫瑾市", {"斧炎镇", "琉璃岛"}, true };
    cities[1] = { "斧炎镇", {"紫瑾市", "橙华市"}, true };
    cities[2] = { "橙华市", {"紫瑾市", "琉璃岛"}, true };
    cities[3] = { "琉璃岛", {"橙华市", "紫瑾市"}, true };

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void Map::showMap() {
    std::cout << "|紫瑾市|-------|斧炎镇|\n";
    std::cout << "    |              |\n";
    std::cout << "|橙华市|-------|琉璃岛|\n";


    std::cout << "//你现在处于：" << currentLocation << " //\n";
    std::cout << "///////////////////////////////////////////////////////////////////\n";
    displayOptions();
}

void Map::exploreWilderness() {
    showWilderness();

}

void Map::challengeGym() {

}

void Map::enterShop() {
    visitLocation(1);
}

void Map::enterHospital() {
    visitLocation(2);
}

void Map::goToOtherCity() {
    showAvailableCities();

    int cityCount = cities[currentLocationIndex].connectedCities.size();
    int choice;

    std::cout << "请选择你要去的城市：\n";
    for (int i = 0; i < cityCount; ++i) {
        std::cout << i + 1 << ". " << cities[currentLocationIndex].connectedCities[i] << "\n";
    }
    do {
        std::cout << "请输入要前往的城市序号 (1-" << cityCount << ")：";
        std::cin >> choice;
        if (choice >= 1 && choice <= cityCount) {
        std::string newLocation = cities[currentLocationIndex].connectedCities[choice - 1];
        changeLocation(newLocation);
        std::cout << "当前位置更新为：" << currentLocation << "\n";
        break;
        }
        else {
        std::cout << "无效的城市序号,请重新输入。\n";
        }
    } while (true);
    displayOptions();
}


void Map::exitGame() {
    std::cout << "游戏已退出。\n";
}

void Map::displayOptions() {
    std::cout << "请输入你想要进行的操作：\n";
    std::cout << "1. 野外探索\n";
    std::cout << "2. 挑战道馆\n";
    std::cout << "3. 进入商店\n";
    std::cout << "4. 进入医院\n";
    std::cout << "5. 前往其他城市\n";
    std::cout << "0. 退出\n";

    int choice;
    std::cout << "请输入你的选择：";
    std::cin >> choice;

    switch (choice) {
    case 1:
        exploreWilderness();
        break;
    case 2:
        challengeGym();
        break;
    case 3:
        enterShop();
        break;
    case 4:
        enterHospital();
        break;
    case 5:
        goToOtherCity();
        break;
    case 0:
        exitGame();
        break;
    default:
        std::cout << "无效的选择。\n";
        displayOptions();
        break;
    }
}


void Map::showWilderness() {
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "//有野生的宝可梦在附近出没//\n";
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    encounterPokemon();
}

void Map::encounterPokemon() {
    // Generate and display a random Pokémon encounter
}

bool Map::checkGymRequirements(const std::string& gymName) {
    // Check if the player meets the requirements to challenge the gym
    if (0 == 0)return true;
    else return false;
}

void Map::battleAndWinBadge(const std::string& gymName) {
    // Implement battle and award badge
}
void Map::showAvailableCities() {
    std::cout << "可前往的城市：\n";
    for (const std::string& city : cities[currentLocationIndex].connectedCities) {
        std::cout << city << "\n";
    }
}
void Map::changeLocation(const std::string& newLocation) {
    for (int i = 0; i < 4; ++i) {
        if (cities[i].name == newLocation) {
            currentLocationIndex = i;
            break;
        }
    }
    currentLocation = newLocation;
}

void Map::visitLocation(int i)
{

}