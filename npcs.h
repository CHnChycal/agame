#ifndef NPCS_H
#define NPCS_H

#include <vector>
#include "npc.h"

using namespace std;
//设置单例模式
class Npcs{
public:
	static Npcs* Getinstance()
	{
		return npcs;
	}
	Npc* Return(int id);//返回对应npc指针
	void SetNpc(int id,int isdef);//读档设置对应npc
	void Clear();//读档清除对应npc设置
private:
	Npcs();
	static Npcs* npcs;
	vector<Npc> npcbag;
};
#endif // !NPCS_H
