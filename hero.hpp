#include<iostream>
#include<fstream>
#include<fstream>
#include<sstream>
#include <stdlib.h> 

#pragma once

#include "monster.hpp"


int create();
int load();
int startup;
string namec;
int strc;
int dexc;
int endc;
int intec;
int chac;
string heroname;
int amount;
int tab[5];
int i;
int clas;
int r1,r2,r3,r4,r5;

class mage;
class warrior;
class berserker;
class thief;
class monster;
string nazwamonsters;

class character{
	string name;
	int strength;
	int dexterity;
	int endurance;
	int intelligence;
	int charisma;
	public:
	character(string,int,int,int,int,int);
	virtual void disp_char();
	virtual void write();
	
	friend class mage;
	friend class warrior;
	friend class berserker;
	friend class thief;
	friend class monster;
};

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



character::character(string n,int str,int dex,int end,int inte,int cha){
	name=n;
	strength=str;
	dexterity=dex;
	endurance=end;
	intelligence=inte;
	charisma=cha;
};



void character::disp_char(){
	cout<<"Name:"<<name<<endl;
	cout<<"Strength:"<<strength<<endl;
	cout<<"Dexterity:"<<dexterity<<endl;
	cout<<"Endurance:"<<endurance<<endl;
	cout<<"Intelligence:"<<intelligence<<endl;
	cout<<"Charisma:"<<charisma<<endl;
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
};
