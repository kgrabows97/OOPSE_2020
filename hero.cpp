#include<iostream>
#include<fstream>
#include<fstream>
#include<sstream>
#include <stdlib.h> 
#include "class.hpp"
using namespace std;
int start();


class mage{
	public:
		void charmage(character& c){
			cout<<"Your character is a mage. Intelligence + 1"<<endl;
			c.intelligence=c.intelligence + 1;
		}
};

class warrior{
	public:
		void charwar(character& c){
			cout<<"Your character is a warrior. Endurance + 1"<<endl;
			c.endurance=c.endurance + 1;
		}
};

class berserker{
	public:
		void charber(character& c){
			cout<<"Your character is a berserker. Strength + 1"<<endl;
			c.strength=c.strength + 1;
		}
};

class thief{
	public:
		void charthief(character& c){
			cout<<"Your character is a thief. Dexterity + 1"<<endl;
			c.dexterity=c.dexterity + 1;
		}
};



character::character(string n,int str,int dex,int end,int inte,int cha,int exp){
	name=n;
	strength=str;
	dexterity=dex;
	endurance=end;
	intelligence=inte;
	charisma=cha;
	experience=exp;
};



void character::disp_char(){
	cout<<"Name:"<<name<<endl;
	cout<<"Strength:"<<strength<<endl;
	cout<<"Dexterity:"<<dexterity<<endl;
	cout<<"Endurance:"<<endurance<<endl;
	cout<<"Intelligence:"<<intelligence<<endl;
	cout<<"Charisma:"<<charisma<<endl;
	cout<<"Experience:"<<experience<<endl;
};

void character::write(){
	string filename=name + ".txt";
	ofstream o(filename.c_str());
	o<<name<<endl;
	o<<strength<<endl;
	o<<dexterity<<endl;
	o<<endurance<<endl;
	o<<intelligence<<endl;
	o<<charisma<<endl;
	o<<experience<<endl;
	start();
};

void character::leveling(int e){
	experience=experience+e;
	cout<<"Your exp improved by:"<<e<<endl;
	write();
	
}

