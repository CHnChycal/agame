#include "map.h"
#include"monsters.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
using namespace std;

Map::Map() : currentLocation("紫瑾市"),currentLocationIndex(1), gymBadges(0) {
    cities[0] = { 1,"紫瑾市" };
    cities[1] = { 2,"斧炎镇" };
    cities[2] = { 3,"橙华市"};
    cities[3] = { 4,"琉璃岛" };

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void Map::showMap() {
    std::cout << "|紫瑾市|-------|斧炎镇|\n";
    std::cout << "    |              |\n";
    std::cout << "|琉璃岛|-------|橙华市|\n";


    std::cout << "///////////////////////////////////////////////////////////////////\n";
    displayOptions();
}

void Map::exploreWilderness() {
    

}

void Map::challengeGym(int& gymBadges,int currentLocationIndex)
{
    switch (currentLocationIndex) {
    case 1:cout << "你将挑战紫瑾市的  道馆\n"; break;
    case 2:if (gymBadges > 0) {
        cout << "你将挑战斧炎镇的  道馆\n";
    }
          else {
        cout << "你不具有挑战资格，请先挑战上一个道馆----紫瑾市的  道馆";
    }break;
    case 3:if (gymBadges > 1) {
        cout << "你将挑战橙华市的  道馆\n";
    }
          else {
        cout << "你不具有挑战资格，请先挑战上一个道馆----斧炎镇的  道馆";
    }break;
    case 4:if(gymBadges > 2) {
        cout << "你将挑战琉璃岛的  道馆\n";
    }
          else {
         cout << "你不具有挑战资格，请先挑战上一个道馆----橙华市的  道馆";
    }break;
    }
}
    

void Map::enterShop() {
    visitLocation(1);
}

void Map::enterHospital() {
    visitLocation(2);
}

void Map::goToOtherCity(int &currentLocationIndex,string &currentLocation) {
    std::cout << "//你现在处于：" << currentLocation << " //\n";
    showAvailableCities(currentLocationIndex);
    int choice;
    std::cin >> choice;
    while(choice!=1&&choice!=2) {
         std::cout << "无效的选择。请重新输入\n";
         std::cin >> choice;
    }
    if (currentLocationIndex == 1 && choice == 1) { currentLocationIndex = 2; changeLocation(2,  currentLocation); }
    else if (currentLocationIndex == 1 && choice == 2) { currentLocationIndex = 4; changeLocation(4,currentLocation); }
    else if (currentLocationIndex == 2 && choice == 1) { currentLocationIndex = 1; changeLocation(1, currentLocation); }
    else if (currentLocationIndex == 2 && choice == 2) { currentLocationIndex = 3; changeLocation(3, currentLocation); }
    else if (currentLocationIndex == 3 && choice == 1) { currentLocationIndex = 2; changeLocation(2,currentLocation); }
    else if (currentLocationIndex == 3 && choice == 2) { currentLocationIndex = 4; changeLocation(4, currentLocation); }
    else if (currentLocationIndex == 4 && choice == 1) { currentLocationIndex = 1; changeLocation(1, currentLocation); }
    else if (currentLocationIndex == 4 && choice == 2) { currentLocationIndex = 3; changeLocation(3, currentLocation); }
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
        challengeGym(gymBadges,currentLocationIndex);
        break;
    case 3:
        enterShop();
        break;
    case 4:
        enterHospital();
        break;
    case 5:
        goToOtherCity(currentLocationIndex,currentLocation);
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


void exploreWildness() {
   
  
}
void Map::showWilderness() {
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "//有野生的宝可梦在附近出没//\n";
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
  
}



void Map::battleAndWinBadge() {
   
}
void Map::showAvailableCities(int currentLocationIndex) {
    if (currentLocationIndex ==1) {
        cout << "可前往的城市：1.斧炎镇 2.琉璃岛" << endl;
    }
    else if (currentLocationIndex == 2) {
        cout << "可前往的城市：1.紫瑾市 2.橙华市" << endl;
    }
    else if (currentLocationIndex ==3) {
        cout << "可前往的城市：1.斧炎镇2.琉璃岛" << endl;
    }
    else if (currentLocationIndex ==4) {
        cout << "可前往的城市：1.紫瑾市 2.橙华市" << endl;
    }

}
void Map::changeLocation(int newLocationIndex, string& currentlocation) {
    if (newLocationIndex == 1) {
        currentLocation = cities[0].name;
        cout << "你已经到达" << currentLocation<<endl;
    }
    else if (newLocationIndex == 2) {
        currentLocation = cities[1].name;
        cout << "你已经到达" << currentLocation<<endl;
    }
    else if (newLocationIndex == 3) {
        currentLocation = cities[2].name;
        cout << "你已经到达" << currentLocation<<endl;
    }
    else if (newLocationIndex == 4) {
        currentLocation = cities[3].name;
        cout << "你已经到达" << currentLocation<<endl;
    }
}
void Map::visitLocation(int i)
{

}
string Map::showLocation()
{
    return currentLocation;
}
int Map::showIndex()
{
    return currentLocationIndex;
}
