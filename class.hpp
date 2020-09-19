#ifndef class_hpp
#define class_hpp
using namespace std;


class character{
	string name;
	int strength;
	int dexterity;
	int endurance;
	int intelligence;
	int charisma;
	int experience;
	public:
	character(string,int,int,int,int,int,int);
	void disp_char();
	void write();
	void leveling(int e);
	
	friend class mage;
	friend class warrior;
	friend class berserker;
	friend class thief;
	friend class monster;
	friend class battle;
};

class monster : public character{
public:
	void writemonster();
	string n;
	int s,d,e,i,c,ex;
	monster(string n,int str,int dex,int end,int inte,int cha,int exp) : character(n,str,dex,end,inte,cha,exp){
	character(n,str,dex,end,inte,cha,exp);
	disp_char();

	
}	friend class battle;
};

#endif
