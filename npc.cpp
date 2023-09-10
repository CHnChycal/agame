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
		NpcName = "铁旋";
		NpcId = 0;
		NpcDesc = "紫堇市道馆馆主,性格开朗、十分乐观,喜欢豪爽的大笑，掌管徽章电力徽章。";
		//通用对话
		TalkDialog.push_back("铁旋:“哈哈哈哈，欢迎来到紫堇市道馆，这里是电系宝可梦修炼的天堂，你有携带电系宝可梦来吗？如果有的话，我相信它一定不会后悔来到这里！”");
		TalkDialog.push_back(":“我相信我的宝可梦们会爱上这个地方的！”");
		//挑战对话
		ChallengeDialog.push_back("铁旋:“听到闪电在空气中爆裂的声音了吗，哈哈哈哈，让我们来痛痛快快的对战一场吧！”");
		ChallengeDialog.push_back("铁旋:“我们又要给我们的电池充电了。等我们充好电，我们会很高兴接受你的挑战。所以，有时间的话再来吧，好吗？”");
		isdefeated = 0;
		gymBossMonsters = { Monster(5,10),Monster(23,15),Monster(27,15) };
		//奖励
		reward.push_back(2000);
		reward.push_back(0);
		reward.push_back(1);

		break;
	case 1:
		NpcName = "亚莎";
		NpcId = 1;
		NpcDesc = "斧炎镇斧炎道馆馆主,活泼、热血，是一位富有激情的女性，当热衷于一件事情后常常会忘记其他事情,掌管徽章烈焰徽章。";
		//通用对话
		TalkDialog.push_back("亚莎:“你好，请问我们见过吗，你的脸给我一种熟悉的感觉，就好像一位故人......(陷入沉思)额，我刚才和你说过话吗?”");
		TalkDialog.push_back("(转移话题):“斧炎镇真是一座热闹的城镇呢，亚莎小姐想必也非常善于炒热气氛吧！”");
		TalkDialog.push_back("亚莎:“哈哈哈哈，那是当然了，斧炎镇可是一座非常热情的城市，我们所有人都欢迎新人来到这座城市！”");
		TalkDialog.push_back(":“这样啊，那我可真得在这好好待一阵子了”");
		//挑战对话
		ChallengeDialog.push_back("亚莎:“火焰在我的血液里燃烧！我已经等不及要和你痛痛快快的打一架了！让我们用炙热的招式开战吧！”");
		ChallengeDialog.push_back("亚莎:“你的强大让我想起了一个人……和不同的人战斗，就能学到不同的人的优点！”");
		isdefeated = 0;
		gymBossMonsters = { Monster(41,15),Monster(33,20),Monster(29,20) };
		//奖励
		reward.push_back(2000);
		reward.push_back(1);
		reward.push_back(1);
		break;
	case 2:
		NpcName = "千里";
		NpcId = 2;
		NpcDesc = "橙华市橙华道馆的道馆馆主。精通一般属性宝可梦，掌管天秤徽章，主角之父。";
		//通用对话
		TalkDialog.push_back("千里:“欢迎来到橙华市，孩子(你疑惑的打量着一旁的假树以及一头趴在树上午休的熊)，你是在看我的圈圈熊对吧，在树上休息是圈圈熊的习惯之一哦”");
		TalkDialog.push_back(":“原来如此，真是学到了(记录在学习笔记上)，感谢父亲的指点！”");
		TalkDialog.push_back("千里:“孩子，作为一名训练师，要保持对未知的好奇，好奇是推动一切进步的根源”");
		TalkDialog.push_back(":(你看着父亲，眼神充满了崇拜)");
		//挑战对话
		ChallengeDialog.push_back("千里:“嗯……看来，你已经赢得两枚徽章了。我真高兴能和自己的孩子来一场真真正正的战斗。但是，战斗就是战斗！身为道馆馆主，我会尽我所能赢取胜利”");
		ChallengeDialog.push_back("千里:“我的梦想是什么？我的梦想……哈哈哈……已经实现了。”");
		isdefeated = 0;
		gymBossMonsters = { Monster(32,25),Monster(36,20),Monster(12,25) };
		//奖励
		reward.push_back(2000);
		reward.push_back(2);
		reward.push_back(1);
		break;
	case 3:
		NpcName = "米可莉";
		NpcId = 3;
		NpcDesc = "琉璃岛琉璃道馆馆主,冷静、处事直截了当，责任感和正义感浓重，温柔、随和而不失稳重,掌管雨滴徽章。";
		//通用对话
		TalkDialog.push_back("米克莉:“琉璃岛就和它的名字一般，脆弱但是美丽，希望你能和我一起守护这番景色。”");
		TalkDialog.push_back(":“那是当然，如此美景，我辈义不容辞！”");
		TalkDialog.push_back("(窗外下起了小雨)\n米克莉:“欣赏吧，来自大自然的温柔”");
		TalkDialog.push_back(":(美景确实让人沉醉，远处的大海与近处的花草在雨雾中融为一处，你不禁陷入自己的思绪当中)");
		//挑战对话
		ChallengeDialog.push_back("米克莉:“请容我正式介绍我自己。我是米可莉，琉璃道馆的道馆馆主。现在，展示给我看吧，你和你宝可梦之间的羁绊！”");
		ChallengeDialog.push_back("米克莉:“呜，你确实很强。现在，请接受我的祝福，带着它走上冠军之路吧！”");
		isdefeated = 0;
		gymBossMonsters = { Monster(24,35),Monster(30,35),Monster(39,40) };
		//奖励
		reward.push_back(2000);
		reward.push_back(3);
		reward.push_back(1);
		break;
	case 4:
		NpcName = "小刚";//城市1
		NpcId = 4;
		NpcDesc = "小刚是深灰市附近少有的严肃专业的宝可梦训练家,精通岩石属性。";
		//通用对话
		TalkDialog.push_back("小刚:“下午好啊，说来也巧，这是我来到这座城镇的第一天，就碰上你了！”");
		TalkDialog.push_back(":“下午好啊！”");
		//挑战对话
		ChallengeDialog.push_back("小刚:“居然不是逃跑而是向我走过来了吗，那就掏出你的宝可梦接招吧！”");
		ChallengeDialog.push_back("小刚:“可恶，即便强大如我，也会拜倒在他人的强大之下吗！”");
		isdefeated = 0;
		gymBossMonsters = { Monster(14,15),Monster(22,20),Monster(44,20) };
		//奖励
		reward.push_back(500);
		break;
	case 5:
		NpcName = "小霞";//城市1
		NpcId = 5;
		NpcDesc = "小霞性格很活泼。身为一名游泳健将，她经常去双子岛修炼,精通冰属性。";
		//通用对话
		TalkDialog.push_back("小霞:“你好！请问你叫什么名字？家住哪里？几岁了？成年了吗？喜欢游泳吗？有兴趣做我的男朋友吗？”");
		TalkDialog.push_back(":“(感觉到气氛不对，赶紧逃开了)”");
		//挑战对话
		ChallengeDialog.push_back("小霞:“呼呼！真是让人吃惊，输了可要答应做我的男朋友哦！”");
		ChallengeDialog.push_back("小霞:“真是何其强大的宝可梦操控力，打败了我，就要接受我的爱意哦！(吐舌)”");
		isdefeated = 0;
		gymBossMonsters = { Monster(46,15),Monster(47,20),Monster(25,20) };
		//奖励
		reward.push_back(500);
		break;
	case 6:
		NpcName = "模仿少女";//城市2 
		NpcId = 6;
		NpcDesc = "模仿少女的家中有许多布偶,精通普通属性，作为一名社恐分子，她对待布偶们的态度往往胜过对待他人的态度。";
		//通用对话
		TalkDialog.push_back("少女:“小布也觉得那个人很怪对吧，啊！(小声)晚...晚上好，我在和我的布偶说话，抱歉吓到你了。”");
		TalkDialog.push_back(":“(连忙摆手)没有的事”");
		//挑战对话
		ChallengeDialog.push_back("少女:“(小声)啊，这...这是要挑战我吗，我的宝可梦可能会让你失望呢。”");
		ChallengeDialog.push_back("少女:“(小声)失...失败了，小布对不起，但是输给大哥哥也是理所应当的吧”");
		isdefeated = 0;
		gymBossMonsters = { Monster(35,25),Monster(36,25),Monster(49,29) };
		//奖励
		reward.push_back(500);
		break;
	case 7:
		NpcName = "老人";//城市2
		NpcId = 7;
		NpcDesc = "老人是一名收服教学人,精通毒属性。";
		//通用对话
		TalkDialog.push_back("老人:“老夫恰巧路过此地，恰巧遇见了你，怎么，有没有兴趣听我讲个故事呢？”");
		TalkDialog.push_back(":“这个...那个...我还有急事，老先生，容我告退！”");
		TalkDialog.push_back("老人:“哎呀，现在的年轻人！”");
		//挑战对话
		ChallengeDialog.push_back("老人:“终于有兴趣来听听我的故事了吗？什么，是来对战的，看我不教训你这个不尊老的臭小子！”");
		ChallengeDialog.push_back("老人:“哎呀，我这把老骨头真是一年不如一年了！(原地躺下，准备碰瓷)什么！警官，何时来的，是了，我也爱你(被拷走)”");
		isdefeated = 0;
		gymBossMonsters = { Monster(40,30),Monster(34,30),Monster(20,25) };
		//奖励
		reward.push_back(500);
		break;
	case 8:
		NpcName = "正辉";//城市3
		NpcId = 8;
		NpcDesc = "是宝可梦寄放系统的一名开发员，管理著关都地区和城都地区的寄放系统,精通飞行属性。";
		//通用对话
		TalkDialog.push_back("正辉:“(哼歌)我是一只小小小小鸟~~，什么！你听到了吗？怪不好意思的。”");
		TalkDialog.push_back(":“不，我完全没听到，小鸟什么的。”");
		TalkDialog.push_back("正辉:“(拉过你)听我说，我正在研发寄存宝可梦的邮箱，它能够以数据的形式存储宝可梦，像数码宝贝什么的，不好，我是不是说了什么奇怪的话！(快步离开)”");
		TalkDialog.push_back(":“(你感受到一阵奇特的波动，随着正辉的离去，波动缓缓的消失了，你感觉自己好像失去了什么)”");
		//挑战对话
		ChallengeDialog.push_back("正辉:“(检测到世界观异常，人物数据初始化，正在调用宝可梦数据，战斗开始)”");
		ChallengeDialog.push_back("正辉:“(宝可梦数据初始化，正在初始化目标世界观)你好，我叫正辉，我们之前见过吗？”");
		isdefeated = 0;
		gymBossMonsters = { Monster(42,20),Monster(45,20),Monster(9,25) };
		//奖励
		reward.push_back(500);
		break;
	case 9:
		NpcName = "阿桔";//城市3
		NpcId = 9;
		NpcDesc = "是石英联盟的现任四天王之一，精通虫属性宝可梦，忍者。";
		//通用对话
		TalkDialog.push_back("阿桔:“虫属性宝可梦的修炼与忍道有着其共同之处，阁下不觉得吗”");
		TalkDialog.push_back(":“(看向正在阿桔手臂上缓缓爬行的蜘蛛，一阵反胃)”");
		TalkDialog.push_back("阿桔:“虫炼毒，而吾则擅使毒，吾与虫系宝可梦的搭配可谓天下一绝！”");
		TalkDialog.push_back(":“(你意识到这会是一位强敌)”");
		//挑战对话
		ChallengeDialog.push_back("阿桔:“在下与阁下都只能朝著更高的目标继续修行！”");
		ChallengeDialog.push_back("阿桔:“那么……现在开始在下要训练女儿了。”");
		isdefeated = 0;
		gymBossMonsters = { Monster(48,35),Monster(49,30),Monster(3,40) };
		//奖励
		reward.push_back(500);
		break;
	case 10:
		NpcName = "奈奈美";//城市4
		NpcId = 10;
		NpcDesc = "大木奈奈美,是青绿的姊姊，也是大木博士的孙女,精通电属性。";
		//通用对话
		TalkDialog.push_back("奈奈美:“皮皮不要乱跑，会撞到别人的！”");
		TalkDialog.push_back(":“(正好被撞到)”");
		TalkDialog.push_back("奈奈美:“抱歉抱歉，皮皮通常不这样的，没有伤到哪里吧！需要我给你按摩吗？我时常给宝可梦按摩所以手艺还不错！”");
		TalkDialog.push_back(":“没事没事，按摩的事，以后再说吧。”");
		//挑战对话
		ChallengeDialog.push_back("奈奈美:“在我悠闲地喝茶的时候，你已经变得非常强了呢。”");
		ChallengeDialog.push_back("奈奈美:“今后也请光顾我的宝可梦按摩店哦！”");
		isdefeated = 0;
		gymBossMonsters = { Monster(37,20),Monster(38,25),Monster(31,20) };
		//奖励
		reward.push_back(500);
		break;
	case 11:
		NpcName = "大木博士";//城市4
		NpcId = 11;
		NpcDesc = "大木雪成博士,是关都地区的宝可梦博士,精通草属性。";
		//通用对话
		TalkDialog.push_back("大木博士:“你好啊，新手训练师”");
		TalkDialog.push_back(":“你是...出现在我梦里的那个人！”");
		TalkDialog.push_back("大木博士:“哈哈哈被你认出来了，但是你梦里的并不是我，而是另有其【宝可梦】哦！”");
		TalkDialog.push_back(":“(你越发感到迷惑，难道这一切，竟然来自一个宝可梦？)”");
		//挑战对话
		ChallengeDialog.push_back("大木博士:“什么时候，你也成长到这种地步了啊，来吧，让我看看你真实的实力究竟几何吧！”");
		ChallengeDialog.push_back("大木博士:“很好，看来你已经足够强大，能够去完成你的目标了！”");
		isdefeated = 0;
		gymBossMonsters = { Monster(16,40),Monster(10,40),Monster(28,40) };
		//奖励
		reward.push_back(500);
		break;
	case 12:
		NpcName = "青绿";//城市4
		NpcId = 12;
		NpcDesc = "青绿是大木博士的孙子，有个姐姐叫奈奈美,精通草属性。";
		//通用对话
		TalkDialog.push_back("青绿:“啊啊，你就是爷爷说过的那个训练师！很荣幸见到你！”");
		TalkDialog.push_back(":“你一定就是大木博士的孙子吧！挺强的嘛！”");
		TalkDialog.push_back("青绿:“那可是，我一直在认真地修炼我的草系宝可梦哦！”");
		TalkDialog.push_back(":“(面前的孩子身上散发出和大木博士类似的气场，是个高手)”");
		//挑战对话
		ChallengeDialog.push_back("青绿:“(一个熟悉的旋律响起)像你这样的大师，对战一定很厉害！请多多指教！”");
		ChallengeDialog.push_back("青绿:“好强啊，不愧是爷爷看好的训练师！”");
		isdefeated = 0;
		gymBossMonsters = { Monster(0,40),Monster(10,35),Monster(16,35) };
		//奖励
		reward.push_back(500);
		break;
	default:
		break;
	}
	//设置npc宝可梦不可抓捕
	gymBossMonsters[0].Caught();
	gymBossMonsters[1].Caught();
	gymBossMonsters[2].Caught();
}

void Npc::npctalk(Player pl) //正常交谈
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
void Npc::npcFight()//战斗交谈
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
		//开始战斗
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << NpcName << "掏出了" << gymBossMonsters[0].Show_Name() << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		//while (mbp->Find() != nullptr) 
		//{
			mbp->Find()->Fight(&gymBossMonsters[0]);
			//cout << "不可以逃跑哦！" << endl;
			//system("pause");
		//}
		
		if (mbp->Find() == nullptr|| mbp->Find() != nullptr && gymBossMonsters[0].CURValue() > 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			cout << "///////////////////////////////////////////////////////////////" << endl;
			cout << "挑战失败了，请改日再战吧！" << endl;
			cout << "///////////////////////////////////////////////////////////////" << endl;
			system("pause");
			Recover();
			return;
		}
		system("cls");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << NpcName << "掏出了" << gymBossMonsters[1].Show_Name() << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		mbp->Find()->Fight(&gymBossMonsters[1]);
		if (mbp->Find() == nullptr || mbp->Find() != nullptr && gymBossMonsters[1].CURValue() > 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			cout << "///////////////////////////////////////////////////////////////" << endl;
			cout << "挑战失败了，请改日再战吧！" << endl;
			cout << "///////////////////////////////////////////////////////////////" << endl;
			system("pause");
			Recover();
			return;
		}
		system("cls");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << NpcName << "掏出了" << gymBossMonsters[2].Show_Name() << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		mbp->Find()->Fight(&gymBossMonsters[2]);
		
		if (mbp->Find() == nullptr ||  mbp->Find() != nullptr && gymBossMonsters[2].CURValue() > 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
			cout << "///////////////////////////////////////////////////////////////" << endl;
			cout << "挑战失败了，请改日再战吧！" << endl;
			cout << "///////////////////////////////////////////////////////////////" << endl;
			system("pause");
			Recover();
			return;
		}
		//战斗胜利
		system("cls");
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << "战斗胜利！"<< endl;
		cout << ChallengeDialog[1] << endl;
		cout << "///////////////////////////////////////////////////////////////" << endl;
		system("pause");
		cout << "///////////////////////////////////////////////////////////////" << endl;
		cout << "每只宝可梦都获取了经验" <<reward[0]<< endl;
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
			cout << "获取了道馆徽章！" << endl;
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
		if (NpcId > 3)cout << "(该NPC已被击败，无力再战)" << endl;
		else cout << "(该道馆已被挑战过，无法再次挑战)" << endl;
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
