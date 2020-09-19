#include<iostream>
#include<fstream>
#include<fstream>
#include<sstream>
#include <stdlib.h> 





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
