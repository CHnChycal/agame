#ifndef NPCS_H
#define NPCS_H

#include <vector>
#include "npc.h"

using namespace std;
//���õ���ģʽ
class Npcs{
public:
	static Npcs* Getinstance()
	{
		return npcs;
	}
	Npc* Return(int id);//���ض�Ӧnpcָ��
	void SetNpc(int id,int isdef);//�������ö�Ӧnpc
	void Clear();//���������Ӧnpc����
private:
	Npcs();
	static Npcs* npcs;
	vector<Npc> npcbag;
};
#endif // !NPCS_H
