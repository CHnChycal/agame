#include "map.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Map::Map() : currentLocation("�����"), gymBadges(0) {
    cities[0] = { "�����", {"������", "������"}, true };
    cities[1] = { "������", {"�����", "�Ȼ���"}, true };
    cities[2] = { "�Ȼ���", {"�����", "������"}, true };
    cities[3] = { "������", {"�Ȼ���", "�����"}, true };

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void Map::showMap() {
    std::cout << "|�����|-------|������|\n";
    std::cout << "    |              |\n";
    std::cout << "|�Ȼ���|-------|������|\n";


    std::cout << "//�����ڴ��ڣ�" << currentLocation << " //\n";
    std::cout << "///////////////////////////////////////////////////////////////////\n";
    displayOptions();
}


void Map::exploreWilderness() {
    showWilderness();

}

void Map::challengeGym() {

}

void Map::enterShop() {
    visitLocation("�̵�");
}

void Map::enterHospital() {
    visitLocation("ҽԺ");
}

void Map::goToOtherCity() {
    showAvailableCities();

    int cityCount = cities[currentLocationIndex].connectedCities.size();
    int choice;

    std::cout << "��ѡ����Ҫȥ�ĳ��У�\n";
    for (int i = 0; i < cityCount; ++i) {
        std::cout << i + 1 << ". " << cities[currentLocationIndex].connectedCities[i] << "\n";
    }
    do {
        std::cout << "������Ҫǰ���ĳ������ (1-" << cityCount << ")��";
        std::cin >> choice;
        if (choice >= 1 && choice <= cityCount) {
        std::string newLocation = cities[currentLocationIndex].connectedCities[choice - 1];
        changeLocation(newLocation);
        std::cout << "��ǰλ�ø���Ϊ��" << currentLocation << "\n";
        break;
        }
        else {
        std::cout << "��Ч�ĳ������,���������롣\n";
        }
    } while (true);
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
        std::cout << "��Ч��ѡ��\n";
        displayOptions();
        break;
    }
}


void Map::showWilderness() {
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    std::cout << "//��Ұ���ı������ڸ�����û//\n";
    std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
    encounterPokemon();
}

void Map::encounterPokemon() {
    // Generate and display a random Pok��mon encounter
}

bool Map::checkGymRequirements(const std::string& gymName) {
    // Check if the player meets the requirements to challenge the gym
}

void Map::battleAndWinBadge(const std::string& gymName) {
    // Implement battle and award badge
}
void Map::showAvailableCities() {
    std::cout << "��ǰ���ĳ��У�\n";
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