#pragma once
#ifndef MAP_H
#define MAP_H

#include <vector>
#include <string>

using namespace std;

class Map {
public:
    Map();
    void showMap();//չʾ��ͼ
    void exploreWilderness();//Ұ��̽��
    void challengeGym(int currentLocationIndex);//��ս����
    void enterShop();//�̵�
    void enterHospital();//ҽԺ
    void goToOtherCity(int& currentLocationIndex,string &currentLocation);//�ص����
    void visitLocation(int i);//�ݷ�
    string showLocation();//�����ǰ�ص������
    void exploreWildness(int level);//Ұ��̽���ľ��幦�ܵ�ʵ��
    void explore(int percent);//Ұ��̽��������¼�������
    void Meet(int num);//̽��Ұ���������ˢ�����߲�׽�¹��
//n����ȼ����䣬��nΪ1����Ұ�����ȼ�����Ϊ1~21����nΪ20����Ұ�����ȼ�����Ϊ20~40
    void showAvailableCities(int currentLocationindex);//չʾ�ӵ�ǰ���г������Ե����Ŀ�ĵ�
    void changeLocation(int newLocationIndex);//ͨ���Եص�id���޸�ת����Ӧ�ĵص�����
    int showIndex();//���صص�id
private:
    struct City {
        int id=1;
        std::string name="�����";

    };

    City cities[4];//�ĸ�����
    
    std::string currentLocation;
    int currentLocationIndex;
    
    
}; 
#endif