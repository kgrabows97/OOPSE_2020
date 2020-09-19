#include<iostream>
#include<fstream>
#include<fstream>
#include<sstream>
#include <stdlib.h> 
#pragma once
#include "hero.hpp"
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

int start(){
	std::cout<<"[1]Create a character"<<std::endl;
	cout<<"[2]Load a character"<<endl;
	cout<<"[3]Create a list of monsters"<<endl;
	cin>>startup;
	if (startup==1){
		create();
	}
	else if (startup==2){
		load();
	}
	else if(startup==3){
		generatemonsters();
		
	}
	else{
		cout<<"Please Try Again"<<endl;
		start();
	};
	
};





int create(){
	cout<<"Creating a Hero"<<endl;
	cout<<"Name your Hero"<<endl;
	cin>>namec;
	cout<<"Strength:"<<endl;
	cin>>strc;
	cout<<"Dexterity:"<<endl;
	cin>>dexc;
	cout<<"Endurance:"<<endl;
	cin>>endc;
	cout<<"Intelligence:"<<endl;
	cin>>intec;
	cout<<"Charisma:"<<endl;
	cin>>chac;
	character hero(namec,strc,dexc,endc,intec,chac);
	cout<<"Choose a class: [1]Mage [2]Warrior [3]Berserker [4]Thief "<<endl;
	cin>>clas;
	if (clas==1){
		mage m;
		m.charmage(hero);
	}
	
	else if (clas==2){
		warrior w;
		w.charwar(hero);
	}
	else if (clas==3){
		berserker b;
		b.charber(hero);
	}
	
	else if (clas==4){
		thief t;
		t.charthief(hero);
	}
	else{
		cout<<"Wrong number!! Try again";
		create();
	};
	
	

	hero.disp_char();
	hero.write();

	
};

int load(){
	cout<<"Loading a Hero"<<endl;
	cout<<"Which Hero Do You want to load?"<<endl;
	cin>>heroname;
	string filename=heroname + ".txt";
	ifstream o(filename.c_str());
	string line;
if (o.is_open()){
	i=0;
		while(o>>line){
			stringstream value(line);
			if (value>>amount){
				tab[i]=amount;
				i++;}
				else {
				
				
				}
				
				
			}
			
			
		

		cout<<"Strength:"<<tab[0]<<endl;
		cout<<"Dexterity:"<<tab[1]<<endl;
		cout<<"Endurance:"<<tab[2]<<endl;
		cout<<"Intelligence:"<<tab[3]<<endl;
		cout<<"Charisma:"<<tab[4]<<endl;
}
else{
	cout<<"Wrong Name!!"<<endl;
	load();
}
};
