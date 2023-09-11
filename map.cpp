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
Map::Map() : currentLocation("�����"), currentLocationIndex(1) {
    cities[0] = { 1,"�����" };
    cities[1] = { 2,"������" };
    cities[2] = { 3,"�Ȼ���" };
    cities[3] = { 4,"������" };

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
        cout << "(ѡ���ֻ��ϵ�[�����ͼ]Ӧ�ú󣬸��ֳ��������)" << endl;
        cout << "��Ŀǰ����:" << cities[currentLocationIndex - 1].name << endl << endl;
        std::cout << "|�����|-------|������|\n";
        std::cout << "    |              |\n";
        std::cout << "|������|-------|�Ȼ���|\n";
        cout << "///////////////////////////////////////////////////////////////" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        std::cout << "����������Ҫ���еĲ�����\n";
        std::cout << "1. Ұ��̽��\n";
        std::cout << "2. ��ս����\n";
        std::cout << "3. �����̵�\n";
        std::cout << "4. ����ҽԺ\n";
        std::cout << "5. ǰ����������\n";
        std::cout << "0. �˳�\n";

        int choice;
        std::cout << "���������ѡ��" << endl;
        while (true)
        {
            cout << ":";
            cin >> choice;
            if (cin.fail() || choice < 0 || choice>5)
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(�����˴��������������������)" << endl;
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
            std::cout << "��Ч��ѡ��\n";
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
            cout << "(�㽫Ҫ��ս����еĵ�ϵ����,���ݹ���Ϊ�������Ƽ������εȼ�15+)";
            cout << "/////////////////////////////////////////////////////////" << endl;
            cout << "1.�����ս\n0.�˳�����" << endl;
            while (true)
            {
                cout << ":";
                cin >> choice;
                if (cin.fail() || choice < 0 || choice>1)
                {
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    cout << "(�����˴��������������������)" << endl;
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
                cout << "(�㽫Ҫ��ս������Ļ�ϵ����,���ݹ���Ϊ��ɯ���Ƽ������εȼ�20+)";
                cout << "/////////////////////////////////////////////////////////" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                cout << "1.�����ս\n0.�˳�����" << endl;
                while (true)
                {
                    cout << ":";
                    cin >> choice;
                    if (cin.fail() || choice < 0 || choice>1)
                    {
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                        cout << "(�����˴��������������������)" << endl;
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
                cout << "(δ�������е��ݻ��£����������й�������������)" << endl;
                system("pause");
            }
            break;
        case 3:
            if (bp->showGoodNum(1) == 1) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
                cout << "/////////////////////////////////////////////////////////" << endl;
                cout << "(�㽫Ҫ��ս�Ȼ��е�һ��ϵ����,���ݹ���Ϊǧ��Ƽ������εȼ�25+)";
                cout << "/////////////////////////////////////////////////////////" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                cout << "1.�����ս\n0.�˳�����" << endl;
                while (true)
                {
                    cout << ":";
                    cin >> choice;
                    if (cin.fail() || choice < 0 || choice>1)
                    {
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                        cout << "(�����˴��������������������)" << endl;
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
                cout << "(δ��ø�������ݻ��£�����ܸ������������������)" << endl;
                system("pause");
            }
            break;
        case 4:
            if (bp->showGoodNum(2) == 1) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
                cout << "/////////////////////////////////////////////////////////" << endl;
                cout << "(�㽫Ҫ��ս��������ˮϵ����,���ݹ���Ϊ�׿����Ƽ������εȼ�30+)";
                cout << "/////////////////////////////////////////////////////////" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                cout << "1.�����ս\n0.�˳�����" << endl;
                while (true)
                {
                    cout << ":";
                    cin >> choice;
                    if (cin.fail() || choice < 0 || choice>1)
                    {
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                        cout << "(�����˴��������������������)" << endl;
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
                cout << "(δ��óȻ��е��ݻ��£�����ܳȻ��й�������������)" << endl;
                system("pause");
            }
            break;
        }
    }
    else
    {
        cout << "(��ı������Ѿ�ȫ�����ˣ������˺���������)" << endl;
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
        cout << "������˵��صı������̵꣬������Թ���������õı�����װ��\n";
        cout << "��������:" << bag->showGoodNum(7) << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "1.����ҩˮ\n2.��ͨ������\n3.��ʦ������\n0.�˳��̵�\n";
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        cout << "///////////////////////////////////////////////////////////////" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "tip:�����ӦID���������й���\n";
        while (true)
        {
            cout << ":";
            cin >> choice;
            if (cin.fail() || choice < 0 || choice>3)
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(�����˴��������������������)" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            }
            else break;
        }
        switch (choice) {
        case 1:
            Goods(4).showGoods();
            cout << "����Ϊ20����ң���������Ҫ���������(����0ȡ������)";
            while (true)//���빺������
            {
                cout << ":";
                cin >> number;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    cout << "(�����˴��������������������)" << endl;
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                }
                else break;
            }
            totalPrice = number * 20;
            if (bag->showGoodNum(7) >= totalPrice && number > 0)
            {
                bag->editGoodNum(7, -totalPrice);
                bag->editGoodNum(4, number);//�۳���Ҳ�������Ʒ����
                cout << "������һ����" << bag->showGoodNum(4) << "ƿ����ҩˮ��" << endl;
            }
            else if (bag->showGoodNum(7) < totalPrice && number > 0)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "����������㣡" << endl;
            }
            else if (number == 0)
                cout << "(�������)" << endl;
            else if (number < 0)
                cout << "(�����Թ�������0����ƷŶ���������)" << endl;
            system("pause");
            break;
        case 2:
            Goods(5).showGoods();
            cout << "����Ϊ40����ң���������Ҫ���������(����0ȡ������)";
            while (true)//���빺������
            {
                cout << ":";
                cin >> number;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    cout << "(�����˴��������������������)" << endl;
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                }
                else break;
            }
            totalPrice = number * 40;
            if (bag->showGoodNum(7) >= totalPrice && number > 0)
            {
                bag->editGoodNum(7, -totalPrice);
                bag->editGoodNum(5, number);//�۳���Ҳ�������Ʒ����
                cout << "������һ����" << bag->showGoodNum(5) << "����ͨ��������" << endl;
            }
            else if (bag->showGoodNum(7) < totalPrice && number > 0)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "����������㣡" << endl;
            }
            else if (number == 0)
                cout << "(�������)" << endl;
            else if (number < 0)
                cout << "(�����Թ�������0����ƷŶ���������)" << endl;
            system("pause");
            break;
        case 3:
            Goods(6).showGoods();
            cout << "����Ϊ80����ң���������Ҫ���������(����0ȡ������)";
            while (true)//���빺������
            {
                cout << ":";
                cin >> number;
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    cout << "(�����˴��������������������)" << endl;
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
                }
                else break;
            }
            totalPrice = number * 80;
            if (bag->showGoodNum(7) >= totalPrice && number > 0)
            {
                bag->editGoodNum(7, -totalPrice);
                bag->editGoodNum(6, number);//�۳���Ҳ�������Ʒ����
                cout << "������һ����" << bag->showGoodNum(6) << "����ʦ��������" << endl;
            }
            else if (bag->showGoodNum(7) < totalPrice && number > 0)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "����������㣡" << endl;
            }
            else if (number == 0)
                cout << "(�������)" << endl;
            else if (number < 0)
                cout << "(�����Թ�������0����ƷŶ���������)" << endl;
            system("pause");
            break;
        case 0:
            return;
        default:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            cout << "(�����˴��������������������)" << endl;
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
        cout << currentMonster->Show_Name() << " �Ѿ��ָ�����" << endl;
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "��ı����ζ��ѻָ�����\n";
    system("pause");
}
void Map::goToOtherCity(int& currentLocationIndex, string& currentLocation)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
    std::cout << "//�����ڴ��ڣ�" << currentLocation << " //\n";

    showAvailableCities(currentLocationIndex);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    cout << "0.�Ҳ�������" << endl;
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
            cout << "(�����˴��������������������)" << endl;
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
        std::cout << "//��ѡ��Ұ���Ѷȵȼ�//\n";
        std::cout << "1: �ȼ�1~20" << endl;
        std::cout << "2: �ȼ�21~40" << endl;
        std::cout << "3: �ȼ�41~60" << endl;
        std::cout << "4: �ȼ�61~80" << endl;
        cout << "0:����" << endl;
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
                cout << "(�����˴��������������������)" << endl;
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            }
            else break;
        }
        switch (choice)
        {
        case 0:
            return;//��������ֱ�ӷ���
            break;
        case 1:
        case 2:
        case 3:
        case 4:
            exploreWildness(choice - 1);
            break;
        default:
            std::cout << "��Ч��ѡ��\n";//�ظ�
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
        std::cout << "//��Ұ���ı������ڸ�����û//\n";
        std::cout << "///////////////////////////////////////////////////////////////////////////////////\n";
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        std::cout << "����������Ҫ���еĲ�����\n";
        std::cout << "1. ̽��Ұ��\n";
        std::cout << "2. �뿪\n";

        int choice;
        std::cout << "���������ѡ��";
        while (true)
        {
            cout << ":";
            cin >> choice;
            if (cin.fail() || choice < 1 || choice>2)
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "(�����˴��������������������)" << endl;
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
        case 2://����ѡ�����
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
        std::cout << "��Ŭ�������������Ź�һ��һľ�������ﰲ���ĳ��棬ʲô��û�С�\n";
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        std::cout << "�ڲݴ��з���һƿ����ҩˮ��\n";
        bp->editGoodNum(4, 1);
        break;
    case 20:
    case 21:
    case 22:
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        std::cout << "��һ����ͨ������\n";
        bp->editGoodNum(5, 1);
        break;
    case 23:
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        std::cout << "���˵�ͷ����Ұ�ⱦ���п�����ʦ������\n";
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
        std::cout << "�ڲݴ��з���һ�����ң��򿪺���" << money << "ö��\n";
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
    cout << "///" << "  һֻlv." << enemy.CURLevel() << "��" << enemy.Show_Name() << "��������" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    cout << "///  ��ѡ�� :" << endl;
    cout << "///  1: ս��" << endl;
    cout << "///  2: ����" << endl;
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
            cout << "///   ��ѡ������ 1 / 2��                               ///" << endl;
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
            cout << "(�����ڵı������Ѿ�ȫ�������޷�ս���������˺�����̽����)" << endl;
            system("pause");
        }



        break;
    }
    case 2:
        break;//���س���
    }
}

void Map::showAvailableCities(int currentLocationIndex) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (currentLocationIndex == 1) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "��ǰ���ĳ��У�\n1.������ \n2.������" << endl;
    }
    else if (currentLocationIndex == 2) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "��ǰ���ĳ��У�\n1.����� \n2.�Ȼ���" << endl;
    }
    else if (currentLocationIndex == 3) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "��ǰ���ĳ��У�\n1.������ \n2.������" << endl;
    }
    else if (currentLocationIndex == 4) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout << "��ǰ���ĳ��У�\n1.����� \n2.�Ȼ���" << endl;
    }

}
void Map::changeLocation(int newLocationIndex) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (newLocationIndex == 1) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        currentLocation = cities[0].name;
        cout << "���Ѿ�����" << currentLocation << endl;
    }
    else if (newLocationIndex == 2) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        currentLocation = cities[1].name;
        cout << "���Ѿ�����" << currentLocation << endl;
    }
    else if (newLocationIndex == 3) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        currentLocation = cities[2].name;
        cout << "���Ѿ�����" << currentLocation << endl;
    }
    else if (newLocationIndex == 4) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
        currentLocation = cities[3].name;
        cout << "���Ѿ�����" << currentLocation << endl;
    }
    currentLocationIndex = newLocationIndex;
}
void Map::visitLocation(int i)//�ݷ�
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
