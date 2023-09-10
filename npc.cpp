#pragma once
#include<iostream>
#include"npc.h";
#include"monsters.h"
#include"player.h"
#include"monsterbag.h"
using namespace std;
Monster* Npc::getFirstMonster()
{
	if(!gymBossMonsters.empty()) {
		
		return &gymBossMonsters[0];

	}
	else return nullptr;
}


void Npc::removeFirstMoster(Npc*npc)
{
		npc->gymBossMonsters.erase(gymBossMonsters.begin());
		
	}

/*bool Npc::ifChallengeSucess(Npc npc) {
	return npc.gymBossMonsters.empty();

}*/
int Npc::getMonstersCount() {
	return gymBossMonsters.size();
}



Npc::Npc(int Id) {
	switch (Id) {
	case 0:
		NpcName = "����";
		NpcId = 0;
		NpcDesc = "�����е��ݹ���,�Ը��ʡ�ʮ���ֹ�,ϲ����ˬ�Ĵ�Ц���ƹܻ��µ������¡�";
		//ͨ�öԻ�
		TalkDialog.push_back("����:��������������ӭ���������е��ݣ������ǵ�ϵ���������������ã�����Я����ϵ��������������еĻ�����������һ�����������������");
		TalkDialog.push_back(":���������ҵı������ǻᰮ������ط��ģ���");
		//��ս�Ի�
		ChallengeDialog.push_back("����:�����������ڿ����б��ѵ��������𣬹�����������������ʹʹ���Ķ�սһ���ɣ���");
		ChallengeDialog.push_back("����:��������Ҫ�����ǵĵ�س���ˡ������ǳ�õ磬���ǻ�ܸ��˽��������ս�����ԣ���ʱ��Ļ������ɣ����𣿡�");
		isdefeated = 0;
		gymBossMonsters = { Monster(5,10),Monster(23,15),Monster(27,15) };
		//����
		reward.push_back(2000);
		reward.push_back(0);
		reward.push_back(1);

		break;
	case 1:
		NpcName = "��ɯ";
		NpcId = 1;
		NpcDesc = "�������׵��ݹ���,���á���Ѫ����һλ���м����Ů�ԣ���������һ������󳣳���������������,�ƹܻ���������¡�";
		//ͨ�öԻ�
		TalkDialog.push_back("��ɯ:����ã��������Ǽ��������������һ����Ϥ�ĸо����ͺ���һλ����......(�����˼)��Ҹղź���˵������?��");
		TalkDialog.push_back("(ת�ƻ���):������������һ�����ֵĳ����أ���ɯС�����Ҳ�ǳ����ڳ������հɣ���");
		TalkDialog.push_back("��ɯ:���������������ǵ�Ȼ�ˣ����������һ���ǳ�����ĳ��У����������˶���ӭ���������������У���");
		TalkDialog.push_back(":�������������ҿ��������úô�һ�����ˡ�");
		//��ս�Ի�
		ChallengeDialog.push_back("��ɯ:���������ҵ�ѪҺ��ȼ�գ����Ѿ��Ȳ���Ҫ����ʹʹ���Ĵ�һ���ˣ������������ȵ���ʽ��ս�ɣ���");
		ChallengeDialog.push_back("��ɯ:�����ǿ������������һ���ˡ����Ͳ�ͬ����ս��������ѧ����ͬ���˵��ŵ㣡��");
		isdefeated = 0;
		gymBossMonsters = { Monster(41,15),Monster(33,20),Monster(29,20) };
		//����
		reward.push_back(2000);
		reward.push_back(1);
		reward.push_back(1);
		break;
	case 2:
		NpcName = "ǧ��";
		NpcId = 2;
		NpcDesc = "�Ȼ��гȻ����ݵĵ��ݹ�������ͨһ�����Ա����Σ��ƹ���ӻ��£�����֮����";
		//ͨ�öԻ�
		TalkDialog.push_back("ǧ��:����ӭ�����Ȼ��У�����(���ɻ�Ĵ�����һ�Եļ����Լ�һͷſ���������ݵ���)�������ڿ��ҵ�ȦȦ�ܶ԰ɣ���������Ϣ��ȦȦ�ܵ�ϰ��֮һŶ��");
		TalkDialog.push_back(":��ԭ����ˣ�����ѧ����(��¼��ѧϰ�ʼ���)����л���׵�ָ�㣡��");
		TalkDialog.push_back("ǧ��:�����ӣ���Ϊһ��ѵ��ʦ��Ҫ���ֶ�δ֪�ĺ��棬�������ƶ�һ�н����ĸ�Դ��");
		TalkDialog.push_back(":(�㿴�Ÿ��ף���������˳��)");
		//��ս�Ի�
		ChallengeDialog.push_back("ǧ��:���š������������Ѿ�Ӯ����ö�����ˡ���������ܺ��Լ��ĺ�����һ������������ս�������ǣ�ս������ս������Ϊ���ݹ������һᾡ������Ӯȡʤ����");
		ChallengeDialog.push_back("ǧ��:���ҵ�������ʲô���ҵ����롭�������������Ѿ�ʵ���ˡ���");
		isdefeated = 0;
		gymBossMonsters = { Monster(32,25),Monster(36,20),Monster(12,25) };
		//����
		reward.push_back(2000);
		reward.push_back(2);
		reward.push_back(1);
		break;
	case 3:
		NpcName = "�׿���";
		NpcId = 3;
		NpcDesc = "�������������ݹ���,�侲������ֱ���˵������θк������Ũ�أ����ᡢ��Ͷ���ʧ����,�ƹ���λ��¡�";
		//ͨ�öԻ�
		TalkDialog.push_back("�׿���:���������ͺ���������һ�㣬��������������ϣ�����ܺ���һ���ػ��ⷬ��ɫ����");
		TalkDialog.push_back(":�����ǵ�Ȼ������������ұ��岻�ݴǣ���");
		TalkDialog.push_back("(����������С��)\n�׿���:�����Ͱɣ����Դ���Ȼ�����ᡱ");
		TalkDialog.push_back(":(����ȷʵ���˳���Զ���Ĵ�������Ļ�������������Ϊһ�����㲻�������Լ���˼������)");
		//��ս�Ի�
		ChallengeDialog.push_back("�׿���:����������ʽ�������Լ��������׿����������ݵĵ��ݹ��������ڣ�չʾ���ҿ��ɣ�����㱦����֮������");
		ChallengeDialog.push_back("�׿���:���أ���ȷʵ��ǿ�����ڣ�������ҵ�ף�������������Ϲھ�֮·�ɣ���");
		isdefeated = 0;
		gymBossMonsters = { Monster(24,35),Monster(30,35),Monster(39,40) };
		//����
		reward.push_back(2000);
		reward.push_back(3);
		reward.push_back(1);
		break;
	case 4:
		NpcName = "С��";//����1
		NpcId = 4;
		NpcDesc = "С��������и������е�����רҵ�ı�����ѵ����,��ͨ��ʯ���ԡ�";
		//ͨ�öԻ�
		TalkDialog.push_back("С��:������ð���˵��Ҳ�ɣ�������������������ĵ�һ�죬���������ˣ���");
		TalkDialog.push_back(":������ð�����");
		//��ս�Ի�
		ChallengeDialog.push_back("С��:����Ȼ�������ܶ��������߹��������Ǿ��ͳ���ı����ν��аɣ���");
		ChallengeDialog.push_back("С��:���ɶ񣬼���ǿ�����ң�Ҳ��ݵ������˵�ǿ��֮���𣡡�");
		isdefeated = 0;
		gymBossMonsters = { Monster(14,15),Monster(22,20),Monster(44,20) };
		//����
		reward.push_back(500);
		break;
	case 5:
		NpcName = "Сϼ";//����1
		NpcId = 5;
		NpcDesc = "Сϼ�Ը�ܻ��á���Ϊһ����Ӿ������������ȥ˫�ӵ�����,��ͨ�����ԡ�";
		//ͨ�öԻ�
		TalkDialog.push_back("Сϼ:����ã��������ʲô���֣���ס��������ˣ���������ϲ����Ӿ������Ȥ���ҵ��������𣿡�");
		TalkDialog.push_back(":��(�о������ղ��ԣ��Ͻ��ӿ���)��");
		//��ս�Ի�
		ChallengeDialog.push_back("Сϼ:���������������˳Ծ������˿�Ҫ��Ӧ���ҵ�������Ŷ����");
		ChallengeDialog.push_back("Сϼ:�����Ǻ���ǿ��ı����βٿ�����������ң���Ҫ�����ҵİ���Ŷ��(����)��");
		isdefeated = 0;
		gymBossMonsters = { Monster(46,15),Monster(47,20),Monster(25,20) };
		//����
		reward.push_back(500);
		break;
	case 6:
		NpcName = "ģ����Ů";//����2 
		NpcId = 6;
		NpcDesc = "ģ����Ů�ļ�������಼ż,��ͨ��ͨ���ԣ���Ϊһ����ַ��ӣ����Դ���ż�ǵ�̬������ʤ���Դ����˵�̬�ȡ�";
		//ͨ�öԻ�
		TalkDialog.push_back("��Ů:��С��Ҳ�����Ǹ��˺ֶܹ԰ɣ�����(С��)��...���Ϻã����ں��ҵĲ�ż˵������Ǹ�ŵ����ˡ���");
		TalkDialog.push_back(":��(��æ����)û�е��¡�");
		//��ս�Ի�
		ChallengeDialog.push_back("��Ů:��(С��)������...����Ҫ��ս�����ҵı����ο��ܻ�����ʧ���ء���");
		ChallengeDialog.push_back("��Ů:��(С��)ʧ...ʧ���ˣ�С���Բ��𣬵����������Ҳ������Ӧ���İɡ�");
		isdefeated = 0;
		gymBossMonsters = { Monster(35,25),Monster(36,25),Monster(49,29) };
		//����
		reward.push_back(500);
		break;
	case 7:
		NpcName = "����";//����2
		NpcId = 7;
		NpcDesc = "������һ���շ���ѧ��,��ͨ�����ԡ�";
		//ͨ�öԻ�
		TalkDialog.push_back("����:���Ϸ�ǡ��·���˵أ�ǡ���������㣬��ô����û����Ȥ���ҽ��������أ���");
		TalkDialog.push_back(":�����...�Ǹ�...�һ��м��£������������Ҹ��ˣ���");
		TalkDialog.push_back("����:����ѽ�����ڵ������ˣ���");
		//��ս�Ի�
		ChallengeDialog.push_back("����:����������Ȥ�������ҵĹ�������ʲô��������ս�ģ����Ҳ���ѵ����������ϵĳ�С�ӣ���");
		ChallengeDialog.push_back("����:����ѽ��������Ϲ�ͷ����һ�겻��һ���ˣ�(ԭ�����£�׼������)ʲô�����٣���ʱ���ģ����ˣ���Ҳ����(������)��");
		isdefeated = 0;
		gymBossMonsters = { Monster(40,30),Monster(34,30),Monster(20,25) };
		//����
		reward.push_back(500);
		break;
	case 8:
		NpcName = "����";//����3
		NpcId = 8;
		NpcDesc = "�Ǳ����μķ�ϵͳ��һ������Ա���������ض������ͳǶ������ļķ�ϵͳ,��ͨ�������ԡ�";
		//ͨ�öԻ�
		TalkDialog.push_back("����:��(�߸�)����һֻСССС��~~��ʲô�����������𣿹ֲ�����˼�ġ���");
		TalkDialog.push_back(":����������ȫû������С��ʲô�ġ���");
		TalkDialog.push_back("����:��(������)����˵���������з��Ĵ汦���ε����䣬���ܹ������ݵ���ʽ�洢�����Σ������뱦��ʲô�ģ����ã����ǲ���˵��ʲô��ֵĻ���(�첽�뿪)��");
		TalkDialog.push_back(":��(����ܵ�һ�����صĲ������������Ե���ȥ��������������ʧ�ˣ���о��Լ�����ʧȥ��ʲô)��");
		//��ս�Ի�
		ChallengeDialog.push_back("����:��(��⵽������쳣���������ݳ�ʼ�������ڵ��ñ��������ݣ�ս����ʼ)��");
		ChallengeDialog.push_back("����:��(���������ݳ�ʼ�������ڳ�ʼ��Ŀ�������)��ã��ҽ����ԣ�����֮ǰ�����𣿡�");
		isdefeated = 0;
		gymBossMonsters = { Monster(42,20),Monster(45,20),Monster(9,25) };
		//����
		reward.push_back(500);
		break;
	case 9:
		NpcName = "����";//����3
		NpcId = 9;
		NpcDesc = "��ʯӢ���˵�����������֮һ����ͨ�����Ա����Σ����ߡ�";
		//ͨ�öԻ�
		TalkDialog.push_back("����:�������Ա����ε��������̵������乲֮ͬ�������²�������");
		TalkDialog.push_back(":��(�������ڰ����ֱ��ϻ������е�֩�룬һ��θ)��");
		TalkDialog.push_back("����:������������������ʹ���������ϵ�����εĴ����ν����һ������");
		TalkDialog.push_back(":��(����ʶ�������һλǿ��)��");
		//��ս�Ի�
		ChallengeDialog.push_back("����:����������¶�ֻ�ܳ������ߵ�Ŀ��������У���");
		ChallengeDialog.push_back("����:����ô�������ڿ�ʼ����Ҫѵ��Ů���ˡ���");
		isdefeated = 0;
		gymBossMonsters = { Monster(48,35),Monster(49,30),Monster(3,40) };
		//����
		reward.push_back(500);
		break;
	case 10:
		NpcName = "������";//����4
		NpcId = 10;
		NpcDesc = "��ľ������,�����̵��梣�Ҳ�Ǵ�ľ��ʿ����Ů,��ͨ�����ԡ�";
		//ͨ�öԻ�
		TalkDialog.push_back("������:��ƤƤ��Ҫ���ܣ���ײ�����˵ģ���");
		TalkDialog.push_back(":��(���ñ�ײ��)��");
		TalkDialog.push_back("������:����Ǹ��Ǹ��ƤƤͨ���������ģ�û���˵�����ɣ���Ҫ�Ҹ��㰴Ħ����ʱ���������ΰ�Ħ�������ջ�������");
		TalkDialog.push_back(":��û��û�£���Ħ���£��Ժ���˵�ɡ���");
		//��ս�Ի�
		ChallengeDialog.push_back("������:���������еغȲ��ʱ�����Ѿ���÷ǳ�ǿ���ء���");
		ChallengeDialog.push_back("������:�����Ҳ�����ҵı����ΰ�Ħ��Ŷ����");
		isdefeated = 0;
		gymBossMonsters = { Monster(37,20),Monster(38,25),Monster(31,20) };
		//����
		reward.push_back(500);
		break;
	case 11:
		NpcName = "��ľ��ʿ";//����4
		NpcId = 11;
		NpcDesc = "��ľѩ�ɲ�ʿ,�ǹض������ı����β�ʿ,��ͨ�����ԡ�";
		//ͨ�öԻ�
		TalkDialog.push_back("��ľ��ʿ:����ð�������ѵ��ʦ��");
		TalkDialog.push_back(":������...��������������Ǹ��ˣ���");
		TalkDialog.push_back("��ľ��ʿ:�������������ϳ����ˣ�����������Ĳ������ң����������䡾�����Ρ�Ŷ����");
		TalkDialog.push_back(":��(��Խ���е��Ի��ѵ���һ�У���Ȼ����һ�������Σ�)��");
		//��ս�Ի�
		ChallengeDialog.push_back("��ľ��ʿ:��ʲôʱ����Ҳ�ɳ������ֵز��˰������ɣ����ҿ�������ʵ��ʵ���������ΰɣ���");
		ChallengeDialog.push_back("��ľ��ʿ:���ܺã��������Ѿ��㹻ǿ���ܹ�ȥ������Ŀ���ˣ���");
		isdefeated = 0;
		gymBossMonsters = { Monster(16,40),Monster(10,40),Monster(28,40) };
		//����
		reward.push_back(500);
		break;
	case 12:
		NpcName = "����";//����4
		NpcId = 12;
		NpcDesc = "�����Ǵ�ľ��ʿ�����ӣ��и�����������,��ͨ�����ԡ�";
		//ͨ�öԻ�
		TalkDialog.push_back("����:�������������үү˵�����Ǹ�ѵ��ʦ�������Ҽ����㣡��");
		TalkDialog.push_back(":����һ�����Ǵ�ľ��ʿ�����Ӱɣ�ͦǿ�����");
		TalkDialog.push_back("����:���ǿ��ǣ���һֱ������������ҵĲ�ϵ������Ŷ����");
		TalkDialog.push_back(":��(��ǰ�ĺ�������ɢ�����ʹ�ľ��ʿ���Ƶ��������Ǹ�����)��");
		//��ս�Ի�
		ChallengeDialog.push_back("����:��(һ����Ϥ����������)���������Ĵ�ʦ����սһ��������������ָ�̣���");
		ChallengeDialog.push_back("����:����ǿ����������үү���õ�ѵ��ʦ����");
		isdefeated = 0;
		gymBossMonsters = { Monster(0,40),Monster(10,35),Monster(16,35) };
		//����
		reward.push_back(500);
		break;
	default:
		break;
	}
	//����npc�����β���ץ��
	gymBossMonsters[0].Caught();
	gymBossMonsters[1].Caught();
	gymBossMonsters[2].Caught();
}

void Npc::npctalk(Player pl) //������̸
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
	for (int i = 0; i < TalkDialog.size(); i++)
	{
		if (i % 2 == 0)cout << TalkDialog[i] << endl;
		else cout << pl.Showname() << TalkDialog[i] << endl;
		system("pause");
	}
}
void Npc::npcFight()//ս����̸
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	MonsterBag* mbp = MonsterBag::Getinstance();
	system("cls");
	if (isdefeated == 0)
	{
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << ChallengeDialog[0] << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		system("cls");
		//��ʼս��
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << NpcName << "�ͳ���" << gymBossMonsters[0].Show_Name() << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		//while (mbp->Find() != nullptr) 
		//{
			mbp->Find()->Fight(&gymBossMonsters[0]);
			//cout << "����������Ŷ��" << endl;
			//system("pause");
		//}
		
		if (mbp->Find() == nullptr|| mbp->Find() != nullptr && gymBossMonsters[0].CURValue() > 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			cout << "///////////////////////////////////////////////////////////////" << endl;
			cout << "��սʧ���ˣ��������ս�ɣ�" << endl;
			cout << "///////////////////////////////////////////////////////////////" << endl;
			system("pause");
			Recover();
			return;
		}
		system("cls");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << NpcName << "�ͳ���" << gymBossMonsters[1].Show_Name() << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		mbp->Find()->Fight(&gymBossMonsters[1]);
		if (mbp->Find() == nullptr || mbp->Find() != nullptr && gymBossMonsters[1].CURValue() > 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			cout << "///////////////////////////////////////////////////////////////" << endl;
			cout << "��սʧ���ˣ��������ս�ɣ�" << endl;
			cout << "///////////////////////////////////////////////////////////////" << endl;
			system("pause");
			Recover();
			return;
		}
		system("cls");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << NpcName << "�ͳ���" << gymBossMonsters[2].Show_Name() << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		mbp->Find()->Fight(&gymBossMonsters[2]);
		
		if (mbp->Find() == nullptr ||  mbp->Find() != nullptr && gymBossMonsters[2].CURValue() > 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			cout << "///////////////////////////////////////////////////////////////" << endl;
			cout << "��սʧ���ˣ��������ս�ɣ�" << endl;
			cout << "///////////////////////////////////////////////////////////////" << endl;
			system("pause");
			Recover();
			return;
		}
		//ս��ʤ��
		system("cls");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << "ս��ʤ����"<< endl;
		cout << ChallengeDialog[1] << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << "ÿֻ�����ζ���ȡ�˾���" <<reward[0]<< endl;
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		for (int i = 0; i < mbp->MonsterNum(); i++)
		{
			system("cls");
			mbp->Return(i)->Exppp(reward[0]);
			system("pause");
		}
		if (NpcId < 3)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
			cout << "///////////////////////////////////////////////////////////////" << endl;
			cout << "��ȡ�˵��ݻ��£�" << endl;
			cout << "///////////////////////////////////////////////////////////////" << endl;
			Bag* bp = Bag::Getinstance();
			bp->editGoodNum(reward[1], reward[2]);
			system("pause");
		}
		
		isdefeated = 1;

	}
	else
	{
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		if (NpcId > 3)cout << "(��NPC�ѱ����ܣ�������ս)" << endl;
		else cout << "(�õ����ѱ���ս�����޷��ٴ���ս)" << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
	}

}
string Npc::getNpcName() {
	return NpcName;
}

int Npc::getNpcId() {
	return NpcId;
}

string Npc::getNpcDesc() {
	return NpcDesc;
}

void Npc::setNpc(int isdef)
{
	isdefeated = isdef;
}

int Npc::ReturnIsdef()
{
	return isdefeated;
}
void Npc::Recover()
{
	for (int i = 0; i < 3; i++)
	{
		gymBossMonsters[i].Recover();
	}
}
