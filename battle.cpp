#include<iostream>
#include<fstream>
#include<fstream>
#include<sstream>
#include <stdlib.h> 
#include<time.h>
using namespace std;

int battle();
int dmg1;
int dmg2;

int hit1[10];
int hit2[10];
int ifhit1;
int ifhit2;

int hp1;
int hp2;





int stats(){
hp1=50;
hp2=50;
if (dex1==0){
	cout<<"Load a hero"<<endl;
	start();
}
else if (dex2==0){
cout<<"Create monster list"<<endl;
start();
}else{


	int i=0;
	srand(time(NULL));
for(i=0;i<dex1;i++){
	hit1[i]=1;
	
} for (i=i;i<10;i++){
	hit1[i]=0;
}

for(i=0;i<dex2;i++){
	hit2[i]=1;
	
} for (i=i;i<10;i++){
	hit2[i]=0;
}

battle();
}}
int battle(){

character hero(namec,str1,dex1,end1,int1,cha1,exp);

if (hp1>0 && hp2>0){
	int ra1 = rand() % 10;

	if (hit1[ra1]==1){
		cout<<"Congrats you hit the monster for: "<<str1<< " dmg"<<endl;
		hp2=hp2-str1;
		cout<<"Monsters Hp:"<<hp2<<endl;
	}
	else{
		cout<<"You missed :("<<endl;
	}
		if(hp2>0){
		
	int ra2 = rand() % 10;

	if (hit2[ra2]==1){
		cout<<"The monster hit you for: "<<str2<<" dmg"<<endl;
		hp1=hp1-str2;
		cout<<"Your Hp:"<<hp1<<endl;
	}
	else{
		cout<<"The monster missed"<<endl;
		
		
	}}
	

battle();
	}
	
else if (hp1<=0){
	cout<<"End of battle, You lost"<<endl;
	exp1=-exp1;
	hero.leveling(exp1);
	hero.write();
}else if(hp2<=0){
	cout<<"End of battle, You won"<<endl;
	hero.leveling(exp1);
	hero.write();
}

}



