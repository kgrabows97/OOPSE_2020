#include<iostream>
#include<fstream>
#include<fstream>
#include<sstream>
using namespace std;
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

class character{
	string name;
	int strength;
	int dexterity;
	int endurance;
	int intelligence;
	int charisma;
	public:
		character(string,int,int,int,int,int);
	void disp_char();
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
}
int start(){
	cout<<"[1]Create a character"<<endl;
	cout<<"[2]Load a character"<<endl;
	cin>>startup;
	if (startup==1){
		create();
	}
	else if (startup==2){
		load();
	}
	else{
		cout<<"Please Try Again"<<endl;
		start();
	};
	
}

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
	
	hero.disp_char();
	
	string filename=namec + ".txt";
	ofstream o(filename.c_str());
	o<<namec<<endl;
	o<<strc<<endl;
	o<<dexc<<endl;
	o<<endc<<endl;
	o<<intec<<endl;
	o<<chac<<endl;
	
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
main(){
	start();
return 0;	
};
