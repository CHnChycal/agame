#pragma once

#include"monsters.h"


Monster::Monster(int num,int level) 
{
	switch (num) 
	{
	case 0: //��
	{
		Mname = "��������";
		Mnature = 4;
		BasValue = 65;
		BasAttack = 49;
		BasDefense = 34;
		BasSpeed = 45;
	}
	case 1: //��
	{
		Mname = "С����";
		Mnature = 1;
		BasValue = 59;
		BasAttack = 52;
		BasDefense = 37;
		BasSpeed = 65;
	}
	case 2://ˮ
	{
		Mname = "�����";
		Mnature = 2;
		BasValue = 64;
		BasAttack = 48;
		BasDefense = 38;
		BasSpeed = 43;
	}
	case 3://��
	{
		Mname = "��ë��";
		Mnature = 8;
		BasValue = 55;
		BasAttack = 45;
		BasDefense = 30;
		BasSpeed = 45;
	}
	case 4://��
	{
		Mname = "������";
		Mnature = 7;
		BasValue = 45;
		BasAttack = 50;
		BasDefense = 33;
		BasSpeed = 55;
	}
	case 5://��
	{
		Mname = "Ƥ����";
		Mnature = 3;
		BasValue = 63;
		BasAttack = 70;
		BasDefense = 48;
		BasSpeed = 90;
	}
	case 6://��ʯ
	{
		Mname = "��ɽ��";
		Mnature = 9;
		BasValue = 58;
		BasAttack = 48;
		BasDefense = 50;
		BasSpeed = 40;
	}
	case 7://����
	{
		Mname = "ƤƤ";
		Mnature = 6;
		BasValue = 50;
		BasAttack = 40;
		BasDefense = 32;
		BasSpeed = 44;
	}
	case 8://һ��
	{
		Mname = "�ֶ�";
		Mnature = 0;
		BasValue = 60;
		BasAttack = 38;
		BasDefense = 48;
		BasSpeed = 38;
	}
	case 9://����
	{
		Mname = "������";
		Mnature = 6;
		BasValue = 56;
		BasAttack = 51;
		BasDefense = 30;
		BasSpeed = 49;
	}
	case 10://��
	{
		Mname = "��·��";
		Mnature = 4;
		BasValue = 52;
		BasAttack = 38;
		BasDefense = 38;
		BasSpeed = 40;
	}
	case 11://��ʯ
	{
		Mname = "����";
		Mnature = 9;
		BasValue = 44;
		BasAttack = 42;
		BasDefense = 25;
		BasSpeed = 78;
	}
	case 12://һ��
	{
		Mname = "����";
		Mnature = 6;
		BasValue = 46;
		BasAttack = 51;
		BasDefense = 25;
		BasSpeed = 62;
	}
	case 13://ˮ
	{
		Mname = "�ɴ�Ѽ";
		Mnature = 2;
		BasValue = 53;
		BasAttack = 39;
		BasDefense = 36;
		BasSpeed = 39;
	}
	case 14://��ʯ
	{
		Mname = "���ٹ�";
		Mnature = 9;
		BasValue = 50;
		BasAttack = 46;
		BasDefense = 45;
		BasSpeed = 40;
	}
	case 15://ˮ
	{
		Mname = "�������";
		Mnature = 2;
		BasValue = 39;
		BasAttack = 36;
		BasDefense = 36;
		BasSpeed = 40;
	}
	case 16://��
	{
		Mname = "����ѿ";
		Mnature = 4;
		BasValue = 52;
		BasAttack = 34;
		BasDefense = 38;
		BasSpeed = 36;
	}
	case 17://��
	{
		Mname = "����ˮĸ";
		Mnature = 7;
		BasValue = 46;
		BasAttack = 48;
		BasDefense = 39;
		BasSpeed = 37;
	}
	case 18://��
	{
		Mname = "С����";
		Mnature = 1;
		BasValue = 50;
		BasAttack = 52;
		BasDefense = 39;
		BasSpeed = 53;
	}
	case 19://ˮ
	{
		Mname = "������";
		Mnature = 2;
		BasValue = 64;
		BasAttack = 54;
		BasDefense = 42;
		BasSpeed = 30;
	}
	case 20://��
	{
		Mname = "������";
		Mnature = 7;
		BasValue = 68;
		BasAttack = 36;
		BasDefense = 47;
		BasSpeed = 28;
	}
	case 21://ˮ
	{
		Mname = "С��ʨ";
		Mnature = 2;
		BasValue = 54;
		BasAttack = 47;
		BasDefense = 42;
		BasSpeed = 44;
	}
	case 22://��ʯ
	{
		Mname = "������";
		Mnature = 9;
		BasValue = 72;
		BasAttack = 56;
		BasDefense = 40;
		BasSpeed = 60;
	}
	case 23://��
	{
		Mname = "�׵���";
		Mnature = 3;
		BasValue = 52;
		BasAttack = 47;
		BasDefense = 35;
		BasSpeed = 66;
	}
	case 24://ˮ
	{
		Mname = "��ʯ����";
		Mnature = 2;
		BasValue = 65;
		BasAttack = 41;
		BasDefense = 50;
		BasSpeed = 39;
	}
	case 25://��
	{
		Mname = "������";
		Mnature = 5;
		BasValue = 54;
		BasAttack = 52;
		BasDefense = 41;
		BasSpeed = 66;
	}
	case 26://��
	{
		Mname = "������";
		Mnature = 1;
		BasValue = 54;
		BasAttack = 52;
		BasDefense = 41;
		BasSpeed = 66;
	}
	case 27://��
	{
		Mname = "������";
		Mnature = 3;
		BasValue = 54;
		BasAttack = 52;
		BasDefense = 41;
		BasSpeed = 66;
	}
	case 28://��
	{
		Mname = "�¹�Ҷ";
		Mnature = 4;
		BasValue = 60;
		BasAttack = 41;
		BasDefense = 43;
		BasSpeed = 45;
	}
	case 29://��
	{
		Mname = "������";
		Mnature = 1;
		BasValue = 65;
		BasAttack = 55;
		BasDefense = 45;
		BasSpeed = 55;
	}
	case 30://ˮ
	{
		Mname = "ˮ����";
		Mnature = 2;
		BasValue = 65;
		BasAttack = 55;
		BasDefense = 45;
		BasSpeed = 55;
	}
	case 31://��
	{
		Mname = "������";
		Mnature = 3;
		BasValue = 65;
		BasAttack = 55;
		BasDefense = 45;
		BasSpeed = 55;
	}
	case 32://һ��
	{
		Mname = "ȦȦ��";
		Mnature = 0;
		BasValue = 60;
		BasAttack = 50;
		BasDefense = 48;
		BasSpeed = 37;
	}
	case 33://��
	{
		Mname = "���ҳ�";
		Mnature = 1;
		BasValue = 48;
		BasAttack = 62;
		BasDefense = 42;
		BasSpeed = 39;
	}
	case 34://��
	{
		Mname = "���۵�";
		Mnature = 7;
		BasValue = 46;
		BasAttack = 61;
		BasDefense = 37;
		BasSpeed = 53;
	}
	case 35://����
	{
		Mname = "����Ÿ";
		Mnature = 6;
		BasValue = 52;
		BasAttack = 47;
		BasDefense = 36;
		BasSpeed = 67;
	}
	case 36://һ��
	{
		Mname = "����è";
		Mnature = 0;
		BasValue = 56;
		BasAttack = 52;
		BasDefense = 42;
		BasSpeed = 60;
	}
	case 37://��
	{
		Mname = "��������";
		Mnature = 3;
		BasValue = 60;
		BasAttack = 50;
		BasDefense = 40;
		BasSpeed = 50;
	}
	case 38://��
	{
		Mname = "��������";
		Mnature = 3;
		BasValue = 60;
		BasAttack = 40;
		BasDefense = 50;
		BasSpeed = 50;
	}
	case 39://ˮ
	{
		Mname = "������";
		Mnature = 2;
		BasValue = 64;
		BasAttack = 65;
		BasDefense = 40;
		BasSpeed = 60;
	}
	case 40://��
	{
		Mname = "��ʳ��";
		Mnature = 7;
		BasValue = 55;
		BasAttack = 55;
		BasDefense = 55;
		BasSpeed = 55;
	}
	case 41://��
	{
		Mname = "�����";
		Mnature = 1;
		BasValue = 68;
		BasAttack = 60;
		BasDefense = 45;
		BasSpeed = 40;
	}
	case 42://����
	{
		Mname = "��Ϧ����";
		Mnature = 6;
		BasValue = 55;
		BasAttack = 50;
		BasDefense = 55;
		BasSpeed = 60;
	}
	case 43://��ʯ
	{
		Mname = "��ʯ";
		Mnature = 9;
		BasValue = 60;
		BasAttack = 50;
		BasDefense = 50;
		BasSpeed = 80;
	}
	case 44://��ʯ
	{
		Mname = "̫����";
		Mnature = 9;
		BasValue = 60;
		BasAttack = 65;
		BasDefense = 55;
		BasSpeed = 50;
	}
	case 45://����
	{
		Mname = "ɳĮ����";
		Mnature = 6;
		BasValue = 57;
		BasAttack = 47;
		BasDefense = 47;
		BasSpeed = 72;
	}
	case 46://��
	{
		Mname = "ѩͯ��";
		Mnature = 5;
		BasValue = 59;
		BasAttack = 49;
		BasDefense = 43;
		BasSpeed = 44;
	}
	case 47://��
	{
		Mname = "������";
		Mnature = 5;
		BasValue = 65;
		BasAttack = 48;
		BasDefense = 46;
		BasSpeed = 38;
	}
	case 48://��
	{
		Mname = "���۷�";
		Mnature = 8;
		BasValue = 60;
		BasAttack = 53;
		BasDefense = 37;
		BasSpeed = 66;
	}
	case 49://��
	{
		Mname = "�������";
		Mnature = 8;
		BasValue = 58;
		BasAttack = 52;
		BasDefense = 43;
		BasSpeed = 70;
	}
	break;
	}
	CurLevel = level;
	MaxValue = CurLevel * 5 + BasValue;
	Attack = CurLevel * 2 + BasAttack;
	Defense = CurLevel * 2 + BasDefense;
	Speed = CurLevel + BasSpeed;
	
	isAlive = true;

	MaxLevel = 80;
	CurValue = MaxValue;
	MaxExper = CurLevel * 20 + 80;
	CurExper = 0;

	Experience = CurLevel * 10;
	AcuPercentage = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//̽��Ұ����������
void Monster::Meet(int num)//�޸�Ϊnum
{
	int newlevel = rand() % 10 + num;
	int newmonster = rand() % 50;
	Monster enemy(newmonster, newlevel);
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "///" << "  һֻlv." << enemy.CurLevel << "��" << enemy.Mname << "��������" << endl;
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
	case 1:this->Fight(enemy);
	case 2:break;//��Ҫ���س�����
		break;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ս��ҳ��
void Monster::Fight(Monster enemy)
{
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << this->Mname << "(lv." << this->CurLevel << ")" << "��" << enemy.Mname << "lv.(" << enemy.CurLevel << ")��ʼ��ս����" << endl;
	cout << "//////////////////////////////////////////////////////////" << endl;
	int n;
	while(this->isAlive && enemy.isAlive)//��˫����δ����ʱѡ�����
	{
		cout << "//////////////////////////////////////////////////////////" << endl;
		cout << "��ѡ����Ĳ�����" << endl;
		cout << "1: ����" << endl;
		cout << "2: ����" << endl;
		cout << "3: �ظ�����" << endl;
		cout << "4: ��׽����" << endl;
		cout << "5: ����" << endl;//���س���****************************************************************************
		cout << "//////////////////////////////////////////////////////////" << endl;
		cin >> n;
		while (n != 1 && n != 2 && n != 3 && n != 4 && n != 5)
		{
			cout << "//////////////////////////////////////////////////////////" << endl;
			cout << "///                                                    ///" << endl;
			cout << "///   ��ѡ������ 1~5 ֮���һ������                    ///" << endl;
			cout << "///                                                    ///" << endl;
			cout << "//////////////////////////////////////////////////////////" << endl;
			cin >> n;
		}
		switch (n)
		{
		case 1:
		{
			if (this->Speed >= enemy.Speed)
			{
				M_Attack(enemy);
				if (enemy.isAlive) M_Attacked(enemy);
				else break;
			}
			else
			{
				M_Attacked(enemy);
				if (this->isAlive) M_Attack(enemy);
				else
				{
					//�л���һֻ���ﲢ�ҵ���Fight��������
				}
			}
		}
		case 2:
		{
			cout << this->Mname << "�����˷�����˫����δ�ܵ��˺�" << endl;
			cout << "//////////////////////////////////////////////////////////" << endl;
		}
		case 3:
		{
			//�򿪱�����ѡ�����
		}
		case 4:
		{
			//�򿪱�����ѡ������
			//��׽���� = ��Ѫ��-��ǰѪ��/��Ѫ�� * ��������ʱ���
		}
		case 5:
		{
			//���س���
		}
		break;
		}
	}
}

void Monster::M_Attack(Monster enemy)
{
	int damage;
	damage = this->Attack - enemy.Defense;
	int check = this->Check(enemy);//�ж�����������
	if (damage <= 0)//�Ե�������˺�
	{
		cout << this->Mname << "��" << enemy.Mname << "�����˹�������û�ܻ���" << enemy.Mname << "�ķ���������� 0 ���˺�" << endl;
	}
	else {
		switch (check)
		{
		case 0:
		{
			cout << this->Mname << "��" << enemy.Mname << "�����˹�������Ч��΢��������� " << damage / 2 << " ���˺�" << endl;
			enemy.CurValue -= damage / 2;
		}
		case 1:
		{
			cout << this->Mname << "��" << enemy.Mname << "�����˹���������� " << damage << " ���˺�" << endl;
			enemy.CurValue -= damage;
		}
		case 2:
		{
			cout << this->Mname << "��" << enemy.Mname << "�����˹�����Ч������������� " << damage * 2 << " ���˺�" << endl;
			enemy.CurValue -= damage * 2;
		}
		}
	}
	if (enemy.CurValue <= 0)
	{
		enemy.isAlive = false;
		cout << enemy.Mname << "������֧��������!" << endl;
		this->CurExper += enemy.Experience;
		if (this->CurExper >= this->MaxExper && this->CurLevel < this->MaxLevel)//�����㹻��δ����ߵȼ�
		{
			this->CurLevel += 1;
			this->CurExper = 0;
			this->MaxExper += 20;
			this->MaxValue += 5;
			this->Attack += 2;
			this->Defense += 2;
			this->Speed += 1;
			//�����Ժ������������
			this->CurValue = MaxValue;
			//�����Ժ�ָ�״̬
			cout << this->Mname << "������" << this->CurLevel << "�����������Ի��������" << endl;
		}
		else//δ��������������ʾ��ǰ����
		{
			cout << this->Mname << "�����" << enemy.Experience << "�㾭�飬��ǰ����" << this->CurExper << " / " << this->MaxExper << endl;
		}
	}
	cout << "//////////////////////////////////////////////////////////" << endl;

	//���س���***************************************************************************

}

void Monster::M_Attacked(Monster enemy)
{
	int damage;
	damage = enemy.Attack - this->Defense;
	int check = this->Check(enemy);//�ж�����������
	if (damage <= 0)//�յ������˺�
	{
		cout << enemy.Mname << "��" << this->Mname << "�����˹�������û�ܻ���" << this->Mname << "�ķ���������� 0 ���˺�" << endl;
	}
	else {
		switch (check)
		{
		case 0:
		{
			cout << enemy.Mname << "��" << this->Mname << "�����˹�������Ч��΢��������� " << damage / 2 << " ���˺�" << endl;
			this->CurValue -= damage / 2;
		}
		case 1:
		{
			cout << enemy.Mname << "��" << this->Mname << "�����˹���������� " << damage << " ���˺�" << endl;
			this->CurValue -= damage;
		}
		case 2:
		{
			cout << enemy.Mname << "��" << this->Mname << "�����˹�����Ч������������� " << damage * 2 << " ���˺�" << endl;
			this->CurValue -= damage * 2;
		}
		}
	}
	if (this->CurValue <= 0)
	{
		this->isAlive = false;
		cout << this->Mname << "������֧��������!" << endl;
	}
	cout << "//////////////////////////////////////////////////////////" << endl;
	//�Զ��л���������һֻ�����Σ�����û���򷵻س���*********************************************************************
}

int Monster::Check(Monster enemy)
{
	switch (this->Mnature)
	{
	case 0://һ������ʱ����һ���������ƣ���������������
	{
		if (enemy.Mnature == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	case 1://������ʱ���Ի�ˮ����ʯ�������ƣ��Բݡ��������������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 2 || enemy.Mnature == 9)
		{
			return 0;
		}
		else if (enemy.Mnature == 4 || enemy.Mnature == 5 || enemy.Mnature == 8)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 2://ˮ����ʱ����ˮ�����������ƣ��Ի���ʯ�������ƣ�����������
	{
		if (enemy.Mnature == 2 || enemy.Mnature == 4)
		{
			return 0;
		}
		else if (enemy.Mnature == 1 || enemy.Mnature == 9)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 3://������ʱ���Ե硢���������ƣ���ˮ�������������ƣ�����������
	{
		if (enemy.Mnature == 3 || enemy.Mnature == 4)
		{
			return 0;
		}
		else if (enemy.Mnature == 2 || enemy.Mnature == 6)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 4://������ʱ,�Ի𡢲ݡ��������С����������ƣ���ˮ����ʯ�������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 4 || enemy.Mnature == 6 || enemy.Mnature == 7 || enemy.Mnature == 8)
		{
			return 0;
		}
		else if (enemy.Mnature == 2 || enemy.Mnature == 9)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 5://������ʱ���Ի�ˮ�����������ƣ��Բݡ������������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 2 || enemy.Mnature == 5)
		{
			return 0;
		}
		else if (enemy.Mnature == 4 || enemy.Mnature == 6)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 6://��������ʱ���Ե硢��ʯ�������ƣ��Բݡ����������ƣ�����������
	{
		if (enemy.Mnature == 3 || enemy.Mnature == 9)
		{
			return 0;
		}
		else if (enemy.Mnature == 4 || enemy.Mnature == 8)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 7://������ʱ���Զ�����ʯ��������,�Բ��������ƣ�����������
	{
		if (enemy.Mnature == 7 || enemy.Mnature == 9)
		{
			return 0;
		}
		else if (enemy.Mnature == 4)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 8://������ʱ���Ի𡢶��������������ƣ��Բ��������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 6 || enemy.Mnature == 7)
		{
			return 0;
		}
		else if (enemy.Mnature == 4)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	case 9://��ʯ����ʱ���Ի𡢱������С����������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 5 || enemy.Mnature == 6 || enemy.Mnature == 8)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	break;
	}
}

bool Monster::IsAlive()
{
	return isAlive;
}

string Monster::Show_Name()
{
	return this->Mname;
}

void Monster::Show_Detail()
{
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "���ƣ�" << this->Mname << endl;
	cout << "����:";
	switch (this->Mnature)
	{
	case 0:cout << "һ��" << endl;
	case 1:cout << "��" << endl;
	case 2:cout << "ˮ" << endl;
	case 3:cout << "��" << endl;
	case 4:cout << "��" << endl;
	case 5:cout << "��" << endl;
	case 6:cout << "����" << endl;
	case 7:cout << "��" << endl;
	case 8:cout << "��" << endl;
	case 9:cout << "��ʯ" << endl;
		break;
	}
	cout << endl;
	cout << "HP��" << this->CurValue << " / " << this->MaxValue << endl;
	cout << "��������" << this->Attack << endl;
	cout << "��������" << this->Defense << endl;
	cout << "�ٶȣ�" << this->Speed << endl;
	cout << endl;
	cout << "�ȼ���" << this->CurLevel << " / 80" << endl;
	cout << "���飺" << this->CurExper << " / " << this->MaxExper << endl;
}