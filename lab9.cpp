#include<iostream>
#include<fstream>
#include<fstream>
#include<sstream>
#include <stdlib.h> 

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
	void disp_char();
	void write();
	
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

class monster : public character{
public:
	void writemonster();
	string n;
	int s,d,e,i,c;
	monster(string n,int str,int dex,int end,int inte,int cha) : character(n,str,dex,end,inte,cha){
	character(n,str,dex,end,inte,cha);
	disp_char();
	
}
};

void monster::writemonster(){
	string filename=nazwamonsters + ".txt";
	ofstream o(filename.c_str(),ofstream::out | ofstream::app);
	o<<name<<endl;
	o<<strength<<endl;
	o<<dexterity<<endl;
	o<<endurance<<endl;
	o<<intelligence<<endl;
	o<<charisma<<endl;
};
void generatemonsters(){
		int yn;
		cout<<"Do you want to save the list? [1]Yes [Anything else]No";
	cin>>yn;
	if(yn==1){
		cout<<"What do You want to name the file?"<<endl;
		cin>>nazwamonsters;
	}
	
	i=0;
	for(i==0;i<5;i++){
		r1=rand() % 10+1;
		r2=rand() % 10+1;
		r3=rand() % 10+1;
		r4=rand() % 10+1;
		r5=rand() % 10+1;
		string monstername;
		string result;
		string on="monster";
		std::stringstream sstm;
		sstm << on << i;
		monstername = sstm.str();
		
		monster mon(monstername,r1,r2,r3,r4,r5);
		mon.writemonster();
		}
	
		
		


	
	
	
};


int start(){
	cout<<"[1]Create a character"<<endl;
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
main(){
	start();
return 0;	
};
