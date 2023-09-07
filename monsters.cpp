#pragma once

#include"monsters.h"
#include"monsterbag.h"

Monster::Monster(int num,int level) 
{
	switch (num) 
	{
	case 0: //��
	{
		Mname = "��������";
		Mnature = 4;
		id = 0;
		BasValue = 65;
		BasAttack = 49;
		BasDefense = 34;
		BasSpeed = 45;
		break;
	}
	case 1: //��
	{
		Mname = "С����";
		Mnature = 1;
		id = 1;
		BasValue = 59;
		BasAttack = 52;
		BasDefense = 37;
		BasSpeed = 65;
		break;
	}
	case 2://ˮ
	{
		Mname = "�����";
		Mnature = 2;
		id = 2;
		BasValue = 64;
		BasAttack = 48;
		BasDefense = 38;
		BasSpeed = 43;
		break;
	}
	case 3://��
	{
		Mname = "��ë��";
		Mnature = 8;
		id = 3;
		BasValue = 55;
		BasAttack = 45;
		BasDefense = 30;
		BasSpeed = 45;
		break;
	}
	case 4://��
	{
		Mname = "������";
		Mnature = 7;
		id = 4;
		BasValue = 45;
		BasAttack = 50;
		BasDefense = 33;
		BasSpeed = 55;
		break;
	}
	case 5://��
	{
		Mname = "Ƥ����";
		Mnature = 3;
		id = 5;
		BasValue = 63;
		BasAttack = 70;
		BasDefense = 48;
		BasSpeed = 90;
		break;
	}
	case 6://��ʯ
	{
		Mname = "��ɽ��";
		Mnature = 9;
		id = 6;
		BasValue = 58;
		BasAttack = 48;
		BasDefense = 50;
		BasSpeed = 40;
		break;
	}
	case 7://����
	{
		Mname = "ƤƤ";
		Mnature = 6;
		id = 7;
		BasValue = 50;
		BasAttack = 40;
		BasDefense = 32;
		BasSpeed = 44;
		break;
	}
	case 8://һ��
	{
		Mname = "�ֶ�";
		Mnature = 0;
		id = 8;
		BasValue = 60;
		BasAttack = 38;
		BasDefense = 48;
		BasSpeed = 38;
		break;
	}
	case 9://����
	{
		Mname = "������";
		Mnature = 6;
		id = 9;
		BasValue = 56;
		BasAttack = 51;
		BasDefense = 30;
		BasSpeed = 49;
		break;
	}
	case 10://��
	{
		Mname = "��·��";
		Mnature = 4;
		id = 10;
		BasValue = 52;
		BasAttack = 38;
		BasDefense = 38;
		BasSpeed = 40;
		break;
	}
	case 11://��ʯ
	{
		Mname = "����";
		Mnature = 9;
		id = 11;
		BasValue = 44;
		BasAttack = 42;
		BasDefense = 25;
		BasSpeed = 78;
		break;
	}
	case 12://һ��
	{
		Mname = "����";
		Mnature = 6;
		id = 12;
		BasValue = 46;
		BasAttack = 51;
		BasDefense = 25;
		BasSpeed = 62;
		break;
	}
	case 13://ˮ
	{
		Mname = "�ɴ�Ѽ";
		Mnature = 2;
		id = 13;
		BasValue = 53;
		BasAttack = 39;
		BasDefense = 36;
		BasSpeed = 39;
		break;
	}
	case 14://��ʯ
	{
		Mname = "���ٹ�";
		Mnature = 9;
		id = 14;
		BasValue = 50;
		BasAttack = 46;
		BasDefense = 45;
		BasSpeed = 40;
		break;
	}
	case 15://ˮ
	{
		Mname = "�������";
		Mnature = 2;
		id = 15;
		BasValue = 39;
		BasAttack = 36;
		BasDefense = 36;
		BasSpeed = 40;
		break;
	}
	case 16://��
	{
		Mname = "����ѿ";
		Mnature = 4;
		id = 16;
		BasValue = 52;
		BasAttack = 34;
		BasDefense = 38;
		BasSpeed = 36;
		break;
	}
	case 17://��
	{
		Mname = "����ˮĸ";
		Mnature = 7;
		id = 17;
		BasValue = 46;
		BasAttack = 48;
		BasDefense = 39;
		BasSpeed = 37;
		break;
	}
	case 18://��
	{
		Mname = "С����";
		Mnature = 1;
		id = 18;
		BasValue = 50;
		BasAttack = 52;
		BasDefense = 39;
		BasSpeed = 53;
		break;
	}
	case 19://ˮ
	{
		Mname = "������";
		Mnature = 2;
		id = 19;
		BasValue = 64;
		BasAttack = 54;
		BasDefense = 42;
		BasSpeed = 30;
		break;
	}
	case 20://��
	{
		Mname = "������";
		Mnature = 7;
		id = 20;
		BasValue = 68;
		BasAttack = 36;
		BasDefense = 47;
		BasSpeed = 28;
		break;
	}
	case 21://ˮ
	{
		Mname = "С��ʨ";
		Mnature = 2;
		id = 21;
		BasValue = 54;
		BasAttack = 47;
		BasDefense = 42;
		BasSpeed = 44;
		break;
	}
	case 22://��ʯ
	{
		Mname = "������";
		Mnature = 9;
		id = 22;
		BasValue = 72;
		BasAttack = 56;
		BasDefense = 40;
		BasSpeed = 60;
		break;
	}
	case 23://��
	{
		Mname = "�׵���";
		Mnature = 3;
		id = 23;
		BasValue = 52;
		BasAttack = 47;
		BasDefense = 35;
		BasSpeed = 66;
		break;
	}
	case 24://ˮ
	{
		Mname = "��ʯ����";
		Mnature = 2;
		id = 24;
		BasValue = 65;
		BasAttack = 41;
		BasDefense = 50;
		BasSpeed = 39;
		break;
	}
	case 25://��
	{
		Mname = "������";
		Mnature = 5;
		id = 25;
		BasValue = 54;
		BasAttack = 52;
		BasDefense = 41;
		BasSpeed = 66;
		break;
	}
	case 26://��
	{
		Mname = "������";
		Mnature = 1;
		id = 26;
		BasValue = 54;
		BasAttack = 52;
		BasDefense = 41;
		BasSpeed = 66;
		break;
	}
	case 27://��
	{
		Mname = "������";
		Mnature = 3;
		id = 27;
		BasValue = 54;
		BasAttack = 52;
		BasDefense = 41;
		BasSpeed = 66;
		break;
	}
	case 28://��
	{
		Mname = "�¹�Ҷ";
		Mnature = 4;
		id = 28;
		BasValue = 60;
		BasAttack = 41;
		BasDefense = 43;
		BasSpeed = 45;
		break;
	}
	case 29://��
	{
		Mname = "������";
		Mnature = 1;
		id = 29;
		BasValue = 65;
		BasAttack = 55;
		BasDefense = 45;
		BasSpeed = 55;
		break;
	}
	case 30://ˮ
	{
		Mname = "ˮ����";
		Mnature = 2;
		id = 30;
		BasValue = 65;
		BasAttack = 55;
		BasDefense = 45;
		BasSpeed = 55;
		break;
	}
	case 31://��
	{
		Mname = "������";
		Mnature = 3;
		id = 31;
		BasValue = 65;
		BasAttack = 55;
		BasDefense = 45;
		BasSpeed = 55;
		break;
	}
	case 32://һ��
	{
		Mname = "ȦȦ��";
		Mnature = 0;
		id = 32;
		BasValue = 60;
		BasAttack = 50;
		BasDefense = 48;
		BasSpeed = 37;
		break;
	}
	case 33://��
	{
		Mname = "���ҳ�";
		Mnature = 1;
		id = 33;
		BasValue = 48;
		BasAttack = 62;
		BasDefense = 42;
		BasSpeed = 39;
		break;
	}
	case 34://��
	{
		Mname = "���۵�";
		Mnature = 7;
		id = 34;
		BasValue = 46;
		BasAttack = 61;
		BasDefense = 37;
		BasSpeed = 53;
		break;
	}
	case 35://����
	{
		Mname = "����Ÿ";
		Mnature = 6;
		id = 35;
		BasValue = 52;
		BasAttack = 47;
		BasDefense = 36;
		BasSpeed = 67;
		break;
	}
	case 36://һ��
	{
		Mname = "����è";
		Mnature = 0;
		id = 36;
		BasValue = 56;
		BasAttack = 52;
		BasDefense = 42;
		BasSpeed = 60;
		break;
	}
	case 37://��
	{
		Mname = "��������";
		Mnature = 3;
		id = 37;
		BasValue = 60;
		BasAttack = 50;
		BasDefense = 40;
		BasSpeed = 50;
		break;
	}
	case 38://��
	{
		Mname = "��������";
		Mnature = 3;
		id = 38;
		BasValue = 60;
		BasAttack = 40;
		BasDefense = 50;
		BasSpeed = 50;
		break;
	}
	case 39://ˮ
	{
		Mname = "������";
		Mnature = 2;
		id = 39;
		BasValue = 64;
		BasAttack = 65;
		BasDefense = 40;
		BasSpeed = 60;
		break;
	}
	case 40://��
	{
		Mname = "��ʳ��";
		Mnature = 7;
		id = 40;
		BasValue = 55;
		BasAttack = 55;
		BasDefense = 55;
		BasSpeed = 55;
		break;
	}
	case 41://��
	{
		Mname = "�����";
		Mnature = 1;
		id = 41;
		BasValue = 68;
		BasAttack = 60;
		BasDefense = 45;
		BasSpeed = 40;
		break;
	}
	case 42://����
	{
		Mname = "��Ϧ����";
		Mnature = 6;
		id = 42;
		BasValue = 55;
		BasAttack = 50;
		BasDefense = 55;
		BasSpeed = 60;
		break;
	}
	case 43://��ʯ
	{
		Mname = "��ʯ";
		Mnature = 9;
		id = 43;
		BasValue = 60;
		BasAttack = 50;
		BasDefense = 50;
		BasSpeed = 80;
		break;
	}
	case 44://��ʯ
	{
		Mname = "̫����";
		Mnature = 9;
		id = 44;
		BasValue = 60;
		BasAttack = 65;
		BasDefense = 55;
		BasSpeed = 50;
		break;
	}
	case 45://����
	{
		Mname = "ɳĮ����";
		Mnature = 6;
		id = 45;
		BasValue = 57;
		BasAttack = 47;
		BasDefense = 47;
		BasSpeed = 72;
		break;
	}
	case 46://��
	{
		Mname = "ѩͯ��";
		Mnature = 5;
		id = 46;
		BasValue = 59;
		BasAttack = 49;
		BasDefense = 43;
		BasSpeed = 44;
		break;
	}
	case 47://��
	{
		Mname = "������";
		Mnature = 5;
		id = 47;
		BasValue = 65;
		BasAttack = 48;
		BasDefense = 46;
		BasSpeed = 38;
		break;
	}
	case 48://��
	{
		Mname = "���۷�";
		Mnature = 8;
		id = 48;
		BasValue = 60;
		BasAttack = 53;
		BasDefense = 37;
		BasSpeed = 66;
		break;
	}
	case 49://��
	{
		Mname = "�������";
		Mnature = 8;
		id = 49;
		BasValue = 58;
		BasAttack = 52;
		BasDefense = 43;
		BasSpeed = 70;
		break;
	}
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

void Monster::SetExper(int curexper)
{
	this->CurExper = curexper;
}

void Monster::SetValue(int curvalue)
{
	this->CurValue = curvalue;
}
void Monster::Recover()
{
	this->isAlive = true;
	this->CurValue = MaxValue;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ս��ҳ��
void Monster::Fight(Monster enemy)
{
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << this->Mname << "(lv." << this->CurLevel << ")" << "��" << enemy.Mname << "lv.(" << enemy.CurLevel << ")��ʼ��ս����" << endl;
	cout << "//////////////////////////////////////////////////////////" << endl;
	int n;
	int turn = 1;
	while(this->isAlive && enemy.isAlive && !enemy.hasCaught)//��˫����δ����ʱѡ�����
	{
		cout << "//////////////////////////////////////////////////////////" << endl;
		cout << "��ǰΪ��" << turn << "�غ�";
		cout << "��ǰ" << this->Mname << "��״̬Ϊ: " << this->MaxValue << " / " << this->CurValue << endl;
		cout << enemy.Mname << "��״̬Ϊ: " << enemy.MaxValue << " / " << enemy.CurValue << endl;
		cout << "//////////////////////////////////////////////////////////" << endl;
		cout << "��ѡ����Ĳ�����" << endl;
		cout << "1: ����" << endl;
		cout << "2: ����" << endl;
		cout << "3: �ظ�����" << endl;
		cout << "4: ��׽����" << endl;
		cout << "5: ����" << endl;//���س���****************************************************************************
		cout << "//////////////////////////////////////////////////////////" << endl;
		while (true)
		{
			cout << ":";
			cin >> n;
			if (cin.fail() || n < 1 || n > 5)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "//////////////////////////////////////////////////////////" << endl;
				cout << "///                                                    ///" << endl;
				cout << "///   ��ѡ������ 1~5 ֮���һ������                    ///" << endl;
				cout << "///                                                    ///" << endl;
				cout << "//////////////////////////////////////////////////////////" << endl;
			}
			else break;
		}
		system("cls");
		
		switch (n)
		{
		case 1:
		{
			if (this->Speed >= enemy.Speed)
			{
				M_Attack(enemy);
				if (enemy.isAlive)
				{
					M_Attacked(enemy);
					break;
				}
				else break;
			}
			else
			{
				M_Attacked(enemy);
				if (this->isAlive)
				{
					M_Attack(enemy);
					break;
				}
				else
				{
					MonsterBag* bag = MonsterBag::Getinstance();
					bag->Find()->Fight(enemy);//�Զ��л���������һֻ���ŵı����ν���ս��
					break;
				}
			}
		}
		case 2:
		{
			cout << this->Mname << "�����˷�����˫����δ�ܵ��˺�" << endl;
			cout << "//////////////////////////////////////////////////////////" << endl;
			break;
		}
		case 3:
		{
			//�򿪱�����ѡ�����
			cout << "//////////////////////////////////////////////////////////" << endl;
		}
		case 4:
		{
			//�򿪱�����ѡ������
			//��׽���� = ��Ѫ��-��ǰѪ��/��Ѫ�� * ��������ʱ���
		}
		case 5:
		{
			enemy.isAlive = false;
		}
		break;
		}
		turn++;
	}
}

void Monster::UsePotion()
{
	Bag* bp = Bag::Getinstance();
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "��ı�������" << bp->showGoodNum(4) << "ƿ����ҩˮ���Ƿ�Ҫ��" << this->Mname << " (" << this->MaxValue << " / " << this->CurValue << ") ʹ�ã�" << endl;
	cout << "1. ʹ��" << endl;
	cout << "2. ����" << endl;
	int choice;
	while (true)
	{
		cout << ":";
		cin >> choice;
		if (cin.fail() || choice < 1 || choice>2)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "(�����˴������ţ�����������)" << endl;
		}
		else break;
	}
	switch (choice)
	{
	case 1:
	{
		if (bp->showGoodNum(4) <= 0)
		{
			cout << "ʹ��ʧ�ܣ�ʣ������ҩˮ���㣡" << endl;
			system("pause");
			break;
		}
		else
		{
			bp->editGoodNum(4, -1);
			this->CurValue += this->MaxValue / 5;
			if (this->CurValue > this->MaxValue)
			{
				this->CurValue = this->MaxValue;
			}
			cout << "ʹ�óɹ�����ǰ" << this->Mname << "��Ѫ��Ϊ��" << this->MaxValue << " / " << this->CurValue;
			system("pause");
			break;
		}
	}
	case 2:
		break;
	default:
		cout << "����ʧ�ܣ���������ȷ���֣�" << endl;
		this->UsePotion();
		system("pause");
		break;
	}
}

void Monster::UseBall(Monster enemy)
{
	Bag* bp = Bag::Getinstance();
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "��ı������У�\n" << bp->showGoodNum(5) << " ����ͨ������" << endl;
	cout << bp->showGoodNum(6) << " ����ʦ������" << endl;
	cout << "��ѡ����Ĳ�����" << endl;
	cout << "1. ʹ����ͨ������" << endl;
	cout << "2. ʹ�ô�ʦ������" << endl;
	cout << "3. ����" << endl;
	int choice;
	while (true)
	{
		cout << ":";
		cin >> choice;
		if (cin.fail() || choice < 0 || choice>1)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "(�����˴������ţ�����������)" << endl;
		}
		else break;
	}
	switch (choice)
	{
	case 1:
	{
		if (bp->showGoodNum(5) <= 0)
		{
			cout << "ʹ��ʧ�ܣ�ʣ����ͨ�������㣡" << endl;
			system("pause");
			break;
		}
		else
		{
			bp->editGoodNum(5, -1);
			int possible = (enemy.MaxValue - enemy.CurValue) / enemy.MaxValue * 100;
			int n = rand() % 100;
			if (n <= possible)
			{
				MonsterBag::Getinstance()->Add(enemy);
			}
			else
			{
				cout << "��׽ʧ�ܣ�" << endl;
			}
			system("pause");
			break;
		}
		break;
	}
	case 2:
	{
		if (bp->showGoodNum(6) <= 0)
		{
			cout << "ʹ��ʧ�ܣ�ʣ���ʦ�������㣡" << endl;
			system("pause");
			break;
		}
		else
		{
			bp->editGoodNum(6, -1);
			int possible = (enemy.MaxValue - enemy.CurValue) / enemy.MaxValue * 100 * 2;
			int n = rand() % 100;
			if (n <= possible)
			{
				MonsterBag::Getinstance()->Add(enemy);
			}
			else
			{
				cout << "��׽ʧ�ܣ�" << endl;
			}
			system("pause");
			break;
		}
		break;
	}
	case 3:
	{
		break;
	}
	default:
	{
		cout << "����ʧ�ܣ���������ȷ���֣�" << endl;
		this->UseBall(enemy);
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
			break;
		}
		case 1:
		{
			cout << this->Mname << "��" << enemy.Mname << "�����˹���������� " << damage << " ���˺�" << endl;
			enemy.CurValue -= damage;
			break;
		}
		case 2:
		{
			cout << this->Mname << "��" << enemy.Mname << "�����˹�����Ч������������� " << damage * 2 << " ���˺�" << endl;
			enemy.CurValue -= damage * 2;
			break;
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
			break;
		}
		case 1:
		{
			cout << enemy.Mname << "��" << this->Mname << "�����˹���������� " << damage << " ���˺�" << endl;
			this->CurValue -= damage;
			break;
		}
		case 2:
		{
			cout << enemy.Mname << "��" << this->Mname << "�����˹�����Ч������������� " << damage * 2 << " ���˺�" << endl;
			this->CurValue -= damage * 2;
			break;
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

void Monster::Caught()
{
	this->hasCaught = true;
}

bool Monster::HasCaught()
{
	return this->hasCaught;
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
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
	case 1://������ʱ���Ի�ˮ����ʯ�������ƣ��Բݡ��������������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 2 || enemy.Mnature == 9)
		{
			return 0;
			break;
		}
		else if (enemy.Mnature == 4 || enemy.Mnature == 5 || enemy.Mnature == 8)
		{
			return 2;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
	case 2://ˮ����ʱ����ˮ�����������ƣ��Ի���ʯ�������ƣ�����������
	{
		if (enemy.Mnature == 2 || enemy.Mnature == 4)
		{
			return 0;
			break;
		}
		else if (enemy.Mnature == 1 || enemy.Mnature == 9)
		{
			return 2;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
	case 3://������ʱ���Ե硢���������ƣ���ˮ�������������ƣ�����������
	{
		if (enemy.Mnature == 3 || enemy.Mnature == 4)
		{
			return 0;
			break;
		}
		else if (enemy.Mnature == 2 || enemy.Mnature == 6)
		{
			return 2;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
	case 4://������ʱ,�Ի𡢲ݡ��������С����������ƣ���ˮ����ʯ�������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 4 || enemy.Mnature == 6 || enemy.Mnature == 7 || enemy.Mnature == 8)
		{
			return 0;
			break;
		}
		else if (enemy.Mnature == 2 || enemy.Mnature == 9)
		{
			return 2;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
	case 5://������ʱ���Ի�ˮ�����������ƣ��Բݡ������������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 2 || enemy.Mnature == 5)
		{
			return 0;
			break;
		}
		else if (enemy.Mnature == 4 || enemy.Mnature == 6)
		{
			return 2;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
	case 6://��������ʱ���Ե硢��ʯ�������ƣ��Բݡ����������ƣ�����������
	{
		if (enemy.Mnature == 3 || enemy.Mnature == 9)
		{
			return 0;
			break;
		}
		else if (enemy.Mnature == 4 || enemy.Mnature == 8)
		{
			return 2;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
	case 7://������ʱ���Զ�����ʯ��������,�Բ��������ƣ�����������
	{
		if (enemy.Mnature == 7 || enemy.Mnature == 9)
		{
			return 0;
			break;
		}
		else if (enemy.Mnature == 4)
		{
			return 2;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
	case 8://������ʱ���Ի𡢶��������������ƣ��Բ��������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 6 || enemy.Mnature == 7)
		{
			return 0;
			break;
		}
		else if (enemy.Mnature == 4)
		{
			return 2;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
	case 9://��ʯ����ʱ���Ի𡢱������С����������ƣ�����������
	{
		if (enemy.Mnature == 1 || enemy.Mnature == 5 || enemy.Mnature == 6 || enemy.Mnature == 8)
		{
			return 2;
			break;
		}
		else
		{
			return 1;
			break;
		}
	}
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

int Monster::Id()
{
	return id;
}

int Monster::CURValue()
{
	return CurValue;
}

int Monster::CURLevel()
{
	return CurLevel;
}

int Monster::CURExper()
{
	return CurExper;
}

void Monster::Show_Detail()
{
	cout << "//////////////////////////////////////////////////////////" << endl;
	cout << "���ƣ�" << this->Mname << endl;
	cout << "����:";
	switch (this->Mnature)
	{
	case 0:
	{
		cout << "һ��" << endl;
		break;
	}
	case 1:
	{
		cout << "��" << endl;
		break;
	}
	case 2:
	{
		cout << "ˮ" << endl;
		break;
	}
	case 3:
	{
		cout << "��" << endl;
		break;
	}
	case 4:
	{
		cout << "��" << endl;
		break;
	}
	case 5:
	{
		cout << "��" << endl;
		break;
	}
	case 6:
	{
		cout << "����" << endl;
		break;
	}
	case 7:
	{
		cout << "��" << endl;
		break;
	}
	case 8:
	{
		cout << "��" << endl;
		break;
	}
	case 9:
	{
		cout << "��ʯ" << endl;
		break;
	}
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