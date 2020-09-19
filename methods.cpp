#include<iostream>
#include<fstream>
#include<fstream>
#include<sstream>
#include <stdlib.h> 
#include "class.hpp"
#include<time.h>
int create();
int load();
int stats();
int startup;
string namec;
int strc;
int dexc;
int endc;
int dex1=0;
int str1=0;
int end1=0;
int exp;
int cha1=0;
int int1=0;
int intec;
int chac;
string heroname;
int amount;
int tab[6];
	int a;
int clas;
int start(){
	cout<<"[1]Create a character"<<endl;
	cout<<"[2]Load a character"<<endl;
	cout<<"[3]Create a list of monsters"<<endl;
	cout<<"[4]Battle!"<<endl;
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
	else if(startup==4){
		stats();
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

	int expc=0;
	character hero(namec,strc,dexc,endc,intec,chac,expc);
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
		str1=strc;
		dex1=dexc;
		end1=endc;
		int1=intec;		
		cha1=chac;	
		hero.disp_char();
		hero.write();


};

int load(){
	cout<<"Loading a Hero"<<endl;
	cout<<"Which Hero Do You want to load?"<<endl;
	cin>>namec;
	string filename=namec + ".txt";
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
		cout<<"Experience:"<<tab[5]<<endl;
		str1=tab[0];
		dex1=tab[1];
		end1=tab[2];
		int1=tab[3];
		cha1=tab[4];
		exp=tab[5];
		character hero(namec,tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
		start();
}
else{
	cout<<"Wrong Name!!"<<endl;
	load();
}
};











