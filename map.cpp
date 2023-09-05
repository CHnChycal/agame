#include "map.h"
#include"monsters.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
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

void Map::exploreWilderness() {
    

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
    visitLocation(1);
}

void Map::enterHospital() {
    visitLocation(2);
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


void exploreWildness() {
   
  
}
void Map::showWilderness() {
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "//��Ұ���ı������ڸ�����û//\n";
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
  
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
void Map::changeLocation(int newLocationIndex, string& currentlocation) {
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
