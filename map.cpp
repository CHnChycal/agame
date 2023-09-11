#include "map.h"
#include"monsters.h"
#include"monsterbag.h"
#include"npc.h"
#include"npcs.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
//using namespace Map;
using namespace std;
Bag* bag = Bag::Getinstance();
Map::Map() : currentLocation("紫瑾市"), currentLocationIndex(1) {
    cities[0] = { 1,"紫瑾市" };
    cities[1] = { 2,"斧炎镇" };
    cities[2] = { 3,"橙华市" };
    cities[3] = { 4,"琉璃岛" };

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void Map::showMap() {

    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    while (true)
    {
        system("cls");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        cout << "///////////////////////////////////////////////////////////////" << endl;
        cout << "(选中手机上的[城镇地图]应用后，浮现出几个光点)" << endl;
        cout << "您目前处于:" << cities[currentLocationIndex - 1].name << endl << endl;
        std::cout << "|紫瑾市|-------|斧炎镇|\n";
        std::cout << "    |              |\n";
        std::cout << "|琉璃岛|-------|橙华市|\n";
        cout << "///////////////////////////////////////////////////////////////" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        std::cout << "请输入你想要进行的操作：\n";
        std::cout << "1. 野外探索\n";
        std::cout << "2. 挑战道馆\n";
        std::cout << "3. 进入商店\n";
        std::cout << "4. 进入医院\n";
        std::cout << "5. 前往其他城市\n";
        std::cout << "0. 退出\n";

        int choice;
        std::cout << "请输入你的选择" << endl;
        while (true)
        {
            cout << ":";
            cin >> choice;
            if (cin.fail() || choice < 0 || choice>5)
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(输入了错误的数量，请重新输入)" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            }
            else break;
        }

        switch (choice) {
        case 1:
            exploreWilderness();
            break;
        case 2:
            challengeGym(currentLocationIndex);
            break;
        case 3:
            enterShop();
            break;
        case 4:
            enterHospital();
            break;
        case 5:
            goToOtherCity(currentLocationIndex, currentLocation);
            break;
        case 0:
            break;
        default:
            std::cout << "无效的选择。\n";
            break;
        }
        if (choice == 0)break;
    }
}
void Map::challengeGym(int currentLocationIndex)
{
    system("cls");
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    MonsterBag* Monsterbag = MonsterBag::Getinstance();
    Npcs* npcs = Npcs::Getinstance();
    Bag* bp = Bag::Getinstance();
    int choice;
    if (Monsterbag->Find() != nullptr) {
        switch (currentLocationIndex) {
        case 1:
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
            cout << "/////////////////////////////////////////////////////////" << endl;
            cout << "(你将要挑战紫瑾市的电系道馆,道馆馆主为铁旋，推荐宝可梦等级15+)";
            cout << "/////////////////////////////////////////////////////////" << endl;
            cout << "1.进入对战\n0.退出道馆" << endl;
            while (true)
            {
                cout << ":";
                cin >> choice;
                if (cin.fail() || choice < 0 || choice>1)
                {
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    cout << "(输入了错误的数量，请重新输入)" << endl;
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                }
                else break;
            }
            if (choice == 1)
            {
                npcs->Return(0)->npcFight();
            }
            break;
        case 2:

            if (bp->showGoodNum(0) == 1) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
                cout << "/////////////////////////////////////////////////////////" << endl;
                cout << "(你将要挑战斧炎镇的火系道馆,道馆馆主为亚莎，推荐宝可梦等级20+)";
                cout << "/////////////////////////////////////////////////////////" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                cout << "1.进入对战\n0.退出道馆" << endl;
                while (true)
                {
                    cout << ":";
                    cin >> choice;
                    if (cin.fail() || choice < 0 || choice>1)
                    {
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                        cout << "(输入了错误的数量，请重新输入)" << endl;
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                    }
                    else break;
                }
                if (choice == 1)
                {
                    npcs->Return(1)->npcFight();
                }
            }
            else
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(未获得紫瑾市道馆徽章，请击败紫瑾市馆主后再来尝试)" << endl;
                system("pause");
            }
            break;
        case 3:
            if (bp->showGoodNum(1) == 1) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
                cout << "/////////////////////////////////////////////////////////" << endl;
                cout << "(你将要挑战橙华市的一般系道馆,道馆馆主为千里，推荐宝可梦等级25+)";
                cout << "/////////////////////////////////////////////////////////" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                cout << "1.进入对战\n0.退出道馆" << endl;
                while (true)
                {
                    cout << ":";
                    cin >> choice;
                    if (cin.fail() || choice < 0 || choice>1)
                    {
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                        cout << "(输入了错误的数量，请重新输入)" << endl;
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                    }
                    else break;
                }
                if (choice == 1)
                {
                    npcs->Return(2)->npcFight();
                }
            }
            else
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(未获得斧炎镇道馆徽章，请击败斧炎镇馆主后再来尝试)" << endl;
                system("pause");
            }
            break;
        case 4:
            if (bp->showGoodNum(2) == 1) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
                cout << "/////////////////////////////////////////////////////////" << endl;
                cout << "(你将要挑战琉璃岛的水系道馆,道馆馆主为米可莉，推荐宝可梦等级30+)";
                cout << "/////////////////////////////////////////////////////////" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                cout << "1.进入对战\n0.退出道馆" << endl;
                while (true)
                {
                    cout << ":";
                    cin >> choice;
                    if (cin.fail() || choice < 0 || choice>1)
                    {
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                        cout << "(输入了错误的数量，请重新输入)" << endl;
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                    }
                    else break;
                }
                if (choice == 1)
                {
                    npcs->Return(3)->npcFight();
                }
            }
            else
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(未获得橙华市道馆徽章，请击败橙华市馆主后再来尝试)" << endl;
                system("pause");
            }
            break;
        }
    }
    else
    {
        cout << "(你的宝可梦已经全部重伤，请疗伤后再来尝试)" << endl;
        system("pause");
    }
}


void Map::enterShop() {

    int choice;
    int number;
    int totalPrice;
    Bag* bag = Bag::Getinstance();
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    while (true) {
        system("cls");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        cout << "///////////////////////////////////////////////////////////////" << endl;
        cout << "你进入了当地的宝可梦商店，这里可以购置许多有用的宝可梦装备\n";
        cout << "货币数量:" << bag->showGoodNum(7) << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "1.治疗药水\n2.普通精灵球\n3.大师精灵球\n0.退出商店\n";
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        cout << "///////////////////////////////////////////////////////////////" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "tip:输入对应ID和数量进行购买\n";
        while (true)
        {
            cout << ":";
            cin >> choice;
            if (cin.fail() || choice < 0 || choice>3)
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(输入了错误的数量，请重新输入)" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            }
            else break;
        }
        switch (choice) {
        case 1:
            Goods(4).showGoods();
            cout << "单价为20个金币，请输入你要购买的数量(输入0取消购买)";
            while (true)//输入购买数量
            {
                cout << ":";
                cin >> number;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    cout << "(输入了错误的数量，请重新输入)" << endl;
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                }
                else break;
            }
            totalPrice = number * 20;
            if (bag->showGoodNum(7) >= totalPrice && number > 0)
            {
                bag->editGoodNum(7, -totalPrice);
                bag->editGoodNum(4, number);//扣除金币并增加物品数量
                cout << "你现在一共有" << bag->showGoodNum(4) << "瓶治疗药水了" << endl;
            }
            else if (bag->showGoodNum(7) < totalPrice && number > 0)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "金币数量不足！" << endl;
            }
            else if (number == 0)
                cout << "(再想想吧)" << endl;
            else if (number < 0)
                cout << "(不可以购买少于0件物品哦，再想想吧)" << endl;
            system("pause");
            break;
        case 2:
            Goods(5).showGoods();
            cout << "单价为40个金币，请输入你要购买的数量(输入0取消购买)";
            while (true)//输入购买数量
            {
                cout << ":";
                cin >> number;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    cout << "(输入了错误的数量，请重新输入)" << endl;
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                }
                else break;
            }
            totalPrice = number * 40;
            if (bag->showGoodNum(7) >= totalPrice && number > 0)
            {
                bag->editGoodNum(7, -totalPrice);
                bag->editGoodNum(5, number);//扣除金币并增加物品数量
                cout << "你现在一共有" << bag->showGoodNum(5) << "个普通精灵球了" << endl;
            }
            else if (bag->showGoodNum(7) < totalPrice && number > 0)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "金币数量不足！" << endl;
            }
            else if (number == 0)
                cout << "(再想想吧)" << endl;
            else if (number < 0)
                cout << "(不可以购买少于0件物品哦，再想想吧)" << endl;
            system("pause");
            break;
        case 3:
            Goods(6).showGoods();
            cout << "单价为80个金币，请输入你要购买的数量(输入0取消购买)";
            while (true)//输入购买数量
            {
                cout << ":";
                cin >> number;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    cout << "(输入了错误的数量，请重新输入)" << endl;
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                }
                else break;
            }
            totalPrice = number * 80;
            if (bag->showGoodNum(7) >= totalPrice && number > 0)
            {
                bag->editGoodNum(7, -totalPrice);
                bag->editGoodNum(6, number);//扣除金币并增加物品数量
                cout << "你现在一共有" << bag->showGoodNum(6) << "个大师精灵球了" << endl;
            }
            else if (bag->showGoodNum(7) < totalPrice && number > 0)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "金币数量不足！" << endl;
            }
            else if (number == 0)
                cout << "(再想想吧)" << endl;
            else if (number < 0)
                cout << "(不可以购买少于0件物品哦，再想想吧)" << endl;
            system("pause");
            break;
        case 0:
            return;
        default:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            cout << "(输入了错误的数量，请重新输入)" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            break;

        }
    }
    system("pause");
}
void Map::enterHospital() {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    MonsterBag* monsterBag = MonsterBag::Getinstance();
    int size = monsterBag->MonsterNum();
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
    for (int i = 0; i < size; i++) {
        Monster* currentMonster = monsterBag->Return(i);
        currentMonster->Recover();
        cout << currentMonster->Show_Name() << " 已经恢复健康" << endl;
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "你的宝可梦都已恢复健康\n";
    system("pause");
}
void Map::goToOtherCity(int& currentLocationIndex, string& currentLocation)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
    std::cout << "//你现在处于：" << currentLocation << " //\n";

    showAvailableCities(currentLocationIndex);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    cout << "0.我不想走了" << endl;
    int choice;
    while (true)
    {
        cout << ":";
        cin >> choice;
        if (cin.fail() || choice < 0 || choice>2)
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            cout << "(输入了错误的数量，请重新输入)" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        }
        else break;
    }
    if (choice != 0)
    {
        if (currentLocationIndex == 1 && choice == 1) { currentLocationIndex = 2; changeLocation(2); }
        else if (currentLocationIndex == 1 && choice == 2) { currentLocationIndex = 4; changeLocation(4); }
        else if (currentLocationIndex == 2 && choice == 1) { currentLocationIndex = 1; changeLocation(1); }
        else if (currentLocationIndex == 2 && choice == 2) { currentLocationIndex = 3; changeLocation(3); }
        else if (currentLocationIndex == 3 && choice == 1) { currentLocationIndex = 2; changeLocation(2); }
        else if (currentLocationIndex == 3 && choice == 2) { currentLocationIndex = 4; changeLocation(4); }
        else if (currentLocationIndex == 4 && choice == 1) { currentLocationIndex = 1; changeLocation(1); }
        else if (currentLocationIndex == 4 && choice == 2) { currentLocationIndex = 3; changeLocation(3); }
        system("pause");
    }

}




void Map::exploreWilderness()
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    while (true)
    {
        system("cls");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        cout << "///////////////////////////////////////////////////////////////" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        std::cout << "//请选择野外难度等级//\n";
        std::cout << "1: 等级1~20" << endl;
        std::cout << "2: 等级21~40" << endl;
        std::cout << "3: 等级41~60" << endl;
        std::cout << "4: 等级61~80" << endl;
        cout << "0:返回" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        cout << "///////////////////////////////////////////////////////////////" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        int choice;
        while (true)
        {
            cout << ":";
            cin >> choice;
            if (cin.fail() || choice < 0 || choice>4)
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(输入了错误的数量，请重新输入)" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            }
            else break;
        }
        switch (choice)
        {
        case 0:
            return;//结束代码直接返回
            break;
        case 1:
        case 2:
        case 3:
        case 4:
            exploreWildness(choice - 1);
            break;
        default:
            std::cout << "无效的选择。\n";//重复
            break;
        }
    }
}


void Map::exploreWildness(int level) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    while (true)
    {
        system("cls");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
        std::cout << "//有野生的宝可梦在附近出没//\n";
        std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        std::cout << "请输入你想要进行的操作：\n";
        std::cout << "1. 探索野外\n";
        std::cout << "2. 离开\n";

        int choice;
        std::cout << "请输入你的选择";
        while (true)
        {
            cout << ":";
            cin >> choice;
            if (cin.fail() || choice < 1 || choice>2)
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(输入了错误的数量，请重新输入)" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            }
            else break;
        }
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
            break;
        }
        case 2://返回选择界面
            return;
            break;
        }
    }
}
void Map::explore(int percent) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    Bag* bp = Bag::Getinstance();
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
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        std::cout << "你努力的搜索，不放过一草一木，但这里安静的出奇，什么都没有。\n";
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        std::cout << "在草丛中发现一瓶治疗药水。\n";
        bp->editGoodNum(4, 1);
        break;
    case 20:
    case 21:
    case 22:
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        std::cout << "捡到一个普通精灵球。\n";
        bp->editGoodNum(5, 1);
        break;
    case 23:
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        std::cout << "鸿运当头！在野外宝箱中开出大师精灵球！\n";
        bp->editGoodNum(6, 1);
        break;
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        int money = rand() % 20 + 10;
        std::cout << "在草丛中发现一袋代币，打开后共有" << money << "枚。\n";
        bp->editGoodNum(7, money);
        break;
    }
}

void Map::Meet(int num)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int newlevel = rand() % 20 + num * 20 + 1;
    int newmonster = rand() % 50;
    Monster enemy(newmonster, newlevel);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "//////////////////////////////////////////////////////////" << endl;
    cout << "///" << "  一只lv." << enemy.CURLevel() << "的" << enemy.Show_Name() << "向你挑衅" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    cout << "///  请选择 :" << endl;
    cout << "///  1: 战斗" << endl;
    cout << "///  2: 逃跑" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "//////////////////////////////////////////////////////////" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    int n;
    while (true)
    {
        cout << ":";
        cin >> n;
        if (cin.fail() || n < 1 || n>2)
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "//////////////////////////////////////////////////////////" << endl;
            cout << "///                                                    ///" << endl;
            cout << "///   请选择输入 1 / 2！                               ///" << endl;
            cout << "///                                                    ///" << endl;
            cout << "//////////////////////////////////////////////////////////" << endl;
        }
        else break;
    }
    switch (n)
    {
    case 1:
    {
        MonsterBag* bag = MonsterBag::Getinstance();
        if (bag->Find() != nullptr)
        {
            bag->Find()->Fight(&enemy);
        }
        else
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
            cout << "(背包内的宝可梦已经全部重伤无法战斗，请疗伤后再来探索吧)" << endl;
            system("pause");
        }



        break;
    }
    case 2:
        break;//返回场景
    }
}

void Map::showAvailableCities(int currentLocationIndex) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (currentLocationIndex == 1) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "可前往的城市：\n1.斧炎镇 \n2.琉璃岛" << endl;
    }
    else if (currentLocationIndex == 2) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "可前往的城市：\n1.紫瑾市 \n2.橙华市" << endl;
    }
    else if (currentLocationIndex == 3) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "可前往的城市：\n1.斧炎镇 \n2.琉璃岛" << endl;
    }
    else if (currentLocationIndex == 4) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "可前往的城市：\n1.紫瑾市 \n2.橙华市" << endl;
    }

}
void Map::changeLocation(int newLocationIndex) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (newLocationIndex == 1) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        currentLocation = cities[0].name;
        cout << "你已经到达" << currentLocation << endl;
    }
    else if (newLocationIndex == 2) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        currentLocation = cities[1].name;
        cout << "你已经到达" << currentLocation << endl;
    }
    else if (newLocationIndex == 3) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        currentLocation = cities[2].name;
        cout << "你已经到达" << currentLocation << endl;
    }
    else if (newLocationIndex == 4) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        currentLocation = cities[3].name;
        cout << "你已经到达" << currentLocation << endl;
    }
    currentLocationIndex = newLocationIndex;
}
void Map::visitLocation(int i)//暂废
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
