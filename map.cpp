#include "map.h"
#include"monsters.h"
#include"monsterbag.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
//using namespace Map;
using namespace std;

Map::Map() : currentLocation("�����"),currentLocationIndex(1), gymBadges(0) {
    cities[0] = { 1,"�����" };
    cities[1] = { 2,"������" };
    cities[2] = { 3,"�Ȼ���"};
    cities[3] = { 4,"������" };

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void Map::showMap() {
    std::cout << "|�����|-------|������|\n";
    std::cout << "    |              |\n";
    std::cout << "|������|-------|�Ȼ���|\n";


    std::cout << "///////////////////////////////////////////////////////////////////\n";
    displayOptions();
}

void Map::challengeGym(int& gymBadges,int currentLocationIndex)
{
    switch (currentLocationIndex) {
    case 1:cout << "�㽫��ս����е�  ����\n"; break;
    case 2:if (gymBadges > 0) {
        cout << "�㽫��ս�������  ����\n";
    }
          else {
        cout << "�㲻������ս�ʸ�������ս��һ������----����е�  ����";
    }break;
    case 3:if (gymBadges > 1) {
        cout << "�㽫��ս�Ȼ��е�  ����\n";
    }
          else {
        cout << "�㲻������ս�ʸ�������ս��һ������----�������  ����";
    }break;
    case 4:if(gymBadges > 2) {
        cout << "�㽫��ս��������  ����\n";
    }
          else {
         cout << "�㲻������ս�ʸ�������ս��һ������----�Ȼ��е�  ����";
    }break;
    }
}
    

void Map::enterShop() {
    Bag* bag = Bag::Getinstance();
    int choice;
    int number;
    int totalPrice;
    system("cls");
    cout << "//////////////////////////////////////////////////////////\n";
    cout << "������˵��صı������̵꣬������Թ���������õı�����װ��\n";
    cout << "//////////////////////////////////////////////////////////\n";


    while (true) {
        cout << "1.����ҩˮ\n2.��ͨ������\n3.��ʦ������\n4.�˳��̵�\n";
        cout << "tip:�����ӦID���������й���\n";
        while (true)
        {
            cout << ":";
            cin >> choice;
            if (cin.fail() || choice < 0 || choice>4)
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "(�����˴������ţ�����������)" << endl;
            }
            else break;
        }
        switch (choice) {
        case 1:
            Goods(4).showGoods();
            cout << "����Ϊ20����ң���������Ҫ���������:";
            cin >> number;//���빺������
            totalPrice = number * 20;
            bag->editGoodNum(7, -totalPrice);
            bag->editGoodNum(4, number);//�۳���Ҳ�������Ʒ����
            cout << "������һ����" << bag->showGoodNum(4) << "ƿ����ҩˮ��";
            break;
        case 2:
            Goods(5).showGoods();
            cout << "����Ϊ40����ң���������Ҫ���������:";
            cin >> number;//���빺������
            totalPrice = number * 40;
            bag->editGoodNum(7, -totalPrice);
            bag->editGoodNum(5, number);//�۳���Ҳ�������Ʒ����
            cout << "������һ����" << bag->showGoodNum(5) << "����ͨ��������";
            break;
        case 3:
            Goods(6).showGoods();
            cout << "����Ϊ80����ң���������Ҫ���������:";
            cin >> number;//���빺������
            totalPrice = number * 80;
            bag->editGoodNum(7, -totalPrice);
            bag->editGoodNum(6, number);//�۳���Ҳ�������Ʒ����
            cout << "������һ����" << bag->showGoodNum(5) << "����ʦ��������";
            break;
        case 4:return;
        default:
            cout << "�����˴������ţ�����������";
            break;

        }
    } system("pause");
}
void Map::enterHospital() {
    MonsterBag* monsterBag = MonsterBag::Getinstance();
    int size = monsterBag->MonsterNum();
    for (int i = 0; i < size; i++) {
        Monster* currentMonster = monsterBag->Return(i);
        currentMonster->Recover();
    }
    cout << "��ı����ζ��ѻָ�����\n";
}
void Map::goToOtherCity(int &currentLocationIndex,string &currentLocation) {
    std::cout << "//�����ڴ��ڣ�" << currentLocation << " //\n";
    showAvailableCities(currentLocationIndex);
    int choice;
    std::cin >> choice;
    while(choice!=1&&choice!=2) {
         std::cout << "��Ч��ѡ������������\n";
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
    std::cout << "��Ϸ���˳���\n";
}

void Map::displayOptions() {
    std::cout << "����������Ҫ���еĲ�����\n";
    std::cout << "1. Ұ��̽��\n";
    std::cout << "2. ��ս����\n";
    std::cout << "3. �����̵�\n";
    std::cout << "4. ����ҽԺ\n";
    std::cout << "5. ǰ����������\n";
    std::cout << "0. �˳�\n";

    int choice;
    std::cout << "���������ѡ��";
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
        std::cout << "��Ч��ѡ��\n";
        displayOptions();
        break;
    }
}

void Map::exploreWilderness()
{
    system("cls");
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "//��ѡ��Ұ���Ѷȵȼ�//\n";
    std::cout << "1: �ȼ�1~20" << endl;
    std::cout << "2: �ȼ�21~40" << endl;
    std::cout << "3: �ȼ�41~60" << endl;
    std::cout << "4: �ȼ�61~80" << endl;
    cout << "0:����" << endl;
    int choice;
    while (true)
    {
        cout << ":";
        cin >> choice;
        if (cin.fail() || choice < 0 || choice>4)
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "(�����˴������ţ�����������)" << endl;
        }
        else break;
    }
    switch (choice)
    {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        exploreWildness(choice - 1);
        break;
    default:
        std::cout << "��Ч��ѡ��\n";
        exploreWilderness();
        break;
    }
}


void Map::exploreWildness(int level) {
    system("cls");
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "//��Ұ���ı������ڸ�����û//\n";
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "����������Ҫ���еĲ�����\n";
    std::cout << "1. ̽��Ұ��\n";
    std::cout << "2. �뿪\n";

    int choice;
    std::cout << "���������ѡ��";
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
        displayOptions();//����ѡ�����
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
        std::cout << "��Ŭ�������������Ź�һ��һľ�������ﰲ���ĳ��棬ʲô��û�С�\n";
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
        std::cout << "�ڲݴ��з���һƿ����ҩˮ��\n";
    case 20:
    case 21:
    case 22:
        std::cout << "��һ����ͨ������\n";
    case 23:
        std::cout << "���˵�ͷ����Ұ�ⱦ���п�����ʦ������\n";
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
        int money = rand() % 20 + 10;
        std::cout << "�ڲݴ��з���һ�����ң��򿪺���" << money << "ö��\n";
    }
}

void Map::Meet(int num)
{
    int newlevel = rand() % 20 + num * 20 + 1;
    int newmonster = rand() % 50;
    Monster enemy(newmonster, newlevel);
    cout << "//////////////////////////////////////////////////////////" << endl;
    cout << "///" << "  һֻlv." << enemy.CURLevel() << "��" << enemy.Show_Name() << "��������" << endl;
    cout << "///  ��ѡ�� :" << endl;
    cout << "///  1: ս��" << endl;
    cout << "///  2: ����" << endl;
    cout << "//////////////////////////////////////////////////////////" << endl;
    int n;
    cin >> n;
    while (n != 1 && n != 2)
    {
        cout << "//////////////////////////////////////////////////////////" << endl;
        cout << "///                                                    ///" << endl;
        cout << "///   ��ѡ������ 1 / 2��                               ///" << endl;
        cout << "///                                                    ///" << endl;
        cout << "//////////////////////////////////////////////////////////" << endl;
        cin >> n;
    }
    switch (n)
    {
    case 1:
    {
        MonsterBag* bag = MonsterBag::Getinstance();
        bag->Find()->Fight(enemy);
        break;
    }
    case 2:
        exploreWildness(num);
        break;//��Ҫ���س�����
    }
}


void Map::battleAndWinBadge() {
   
}
void Map::showAvailableCities(int currentLocationIndex) {
    if (currentLocationIndex ==1) {
        cout << "��ǰ���ĳ��У�1.������ 2.������" << endl;
    }
    else if (currentLocationIndex == 2) {
        cout << "��ǰ���ĳ��У�1.����� 2.�Ȼ���" << endl;
    }
    else if (currentLocationIndex ==3) {
        cout << "��ǰ���ĳ��У�1.������2.������" << endl;
    }
    else if (currentLocationIndex ==4) {
        cout << "��ǰ���ĳ��У�1.����� 2.�Ȼ���" << endl;
    }

}
void Map::changeLocation(int newLocationIndex) {
    if (newLocationIndex == 1) {
        currentLocation = cities[0].name;
        cout << "���Ѿ�����" << currentLocation<<endl;
    }
    else if (newLocationIndex == 2) {
        currentLocation = cities[1].name;
        cout << "���Ѿ�����" << currentLocation<<endl;
    }
    else if (newLocationIndex == 3) {
        currentLocation = cities[2].name;
        cout << "���Ѿ�����" << currentLocation<<endl;
    }
    else if (newLocationIndex == 4) {
        currentLocation = cities[3].name;
        cout << "���Ѿ�����" << currentLocation<<endl;
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
