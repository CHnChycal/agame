#include "map.h"
#include"monsters.h"
#include"monsterbag.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
//using namespace Map;
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
    if (currentLocationIndex == 1 && choice == 1) { currentLocationIndex = 2; changeLocation(2); }
    else if (currentLocationIndex == 1 && choice == 2) { currentLocationIndex = 4; changeLocation(4); }
    else if (currentLocationIndex == 2 && choice == 1) { currentLocationIndex = 1; changeLocation(1); }
    else if (currentLocationIndex == 2 && choice == 2) { currentLocationIndex = 3; changeLocation(3); }
    else if (currentLocationIndex == 3 && choice == 1) { currentLocationIndex = 2; changeLocation(2); }
    else if (currentLocationIndex == 3 && choice == 2) { currentLocationIndex = 4; changeLocation(4); }
    else if (currentLocationIndex == 4 && choice == 1) { currentLocationIndex = 1; changeLocation(1); }
    else if (currentLocationIndex == 4 && choice == 2) { currentLocationIndex = 3; changeLocation(3); }
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

void Map::exploreWilderness()
{
    system("cls");
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "//请选择野外难度等级//\n";
    std::cout << "1: 等级1~20" << endl;
    std::cout << "2: 等级21~40" << endl;
    std::cout << "3: 等级41~60" << endl;
    std::cout << "4: 等级61~80" << endl;
    int level;
    cin >> level;
    switch (level)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        exploreWildness(level - 1);
        break;
    default:
        std::cout << "无效的选择。\n";
        exploreWilderness();
        break;
    }
}


void Map::exploreWildness(int level) {
    system("cls");
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "//有野生的宝可梦在附近出没//\n";
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "请输入你想要进行的操作：\n";
    std::cout << "1. 探索野外\n";
    std::cout << "2. 离开\n";

    int choice;
    std::cout << "请输入你的选择：";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int percentage = rand() % 50;
        switch (percentage)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
            explore(percentage);
            system("pause");
            exploreWildness(level);
            break;
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
            Meet(level);
            break;
        }
    }
    case 2:
        displayOptions();//返回选择界面
        break;
    }
}
void Map::explore(int percent) {
    switch (percent)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
        std::cout << "你努力的搜索，不放过一草一木，但这里安静的出奇，什么都没有。\n";
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
        std::cout << "在草丛中发现一瓶治疗药水。\n";
    case 20:
    case 21:
    case 22:
        std::cout << "捡到一个普通精灵球。\n";
    case 23:
        std::cout << "鸿运当头！在野外宝箱中开出大师精灵球！\n";
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
        int money = rand() % 20 + 10;
        std::cout << "在草丛中发现一袋代币，打开后共有" << money << "枚。\n";
    }
}

void Map::Meet(int num)
{
    int newlevel = rand() % 20 + num * 20 + 1;
    int newmonster = rand() % 50;
    Monster enemy(newmonster, newlevel);
    cout << "//////////////////////////////////////////////////////////" << endl;
    cout << "///" << "  一只lv." << enemy.CURLevel() << "的" << enemy.Show_Name() << "向你挑衅" << endl;
    cout << "///  请选择 :" << endl;
    cout << "///  1: 战斗" << endl;
    cout << "///  2: 逃跑" << endl;
    cout << "//////////////////////////////////////////////////////////" << endl;
    int n;
    cin >> n;
    while (n != 1 && n != 2)
    {
        cout << "//////////////////////////////////////////////////////////" << endl;
        cout << "///                                                    ///" << endl;
        cout << "///   请选择输入 1 / 2！                               ///" << endl;
        cout << "///                                                    ///" << endl;
        cout << "//////////////////////////////////////////////////////////" << endl;
        cin >> n;
    }
    switch (n)
    {
    case 1:
    {
        MonsterBag* bag = MonsterBag::Getinstance();
        bag->Find().Fight(enemy);
        break;
    }
    case 2:
        exploreWildness(num);
        break;//想要返回场景的
    }
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
void Map::changeLocation(int newLocationIndex) {
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
