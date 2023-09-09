#pragma once
#include "npcs.h"
#include "npc.h"
#include <vector>

using namespace std;

Npcs* Npcs::npcs = new Npcs();
Npcs::Npcs()
{
	for (int i = 0; i < 13; i++)
	{
		npcbag.push_back(Npc(i));
	}
}
Npc* Npcs::Return(int id)
{
	return &npcbag[id];
}
void Npcs::SetNpc(int id,int isdef)
{
	npcbag[id].setNpc(isdef);
}
void Npcs::Clear()
{
	for (int i = 0; i < 13; i++)
	{
		npcbag[i].setNpc(0);
	}
}