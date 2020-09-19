#include<iostream>
#include<fstream>
#include<fstream>
#include<sstream>
using namespace std;
string line;
int amunt;
int tab[5];
int i;
string lines[5];
string nazwa;
int choice;
int howmuch;
int doo();
int end(){
	return 0;
};
class beverage {
	string name;
	int amount;

	public:
		

	int bev_param(string nm,int am){
		name=nm;
		amount=am;

	}
	void disp_bev();
};
void beverage::disp_bev(){
	cout<<name<<"	"<< amount <<"pcs	"<<endl;
};



void read(){
fstream file;
file.open("oopse6.txt",ios::in);
if (file.is_open()){
	i=0;
		while(file>>line){
			stringstream value(line);
			if (value>>amunt){
				tab[i]=amunt;
				i++;}
				else {
				lines[i]=line;
				
				}
				
				if (line=="pepsires"){
					tab[0]=10;
}				else if (line=="cokeres"){
					tab[1]=10;	
}				
				else if (line=="juiceres"){
					tab[2]=10;
				}
				else if (line=="fantares"){
					tab[3]=10;
				}
				else if (line=="spriteres"){
					tab[4]=10;
				}
				else {

				}
				
			}
		}
		
	
	file.close();


	
	
}
int review(){
	cout<<"What do you want to buy? (Choose 1-5)"<<endl;
	cin>>choice;
	if (choice>0 && choice <6){
		cout<<tab[choice-1]<<endl;
		cout<<"How much do you want to buy?"<<endl;
		cin>>howmuch;
			if (tab[choice-1]>=howmuch){
				tab[choice-1]=tab[choice-1]-howmuch;
				doo();
			}
			else{
			
			cout<<"Too much!! Try again"<<endl;
			review();
}}
	else if(choice==99){
		end();
	}
	else{
	cout<<"Wrong input!! Try again"<<endl;
	review();
	}
}

int list(){

	cout<< "NAME	AMOUNT"<<endl;
	beverage cola, pepsi, fanta, sprite, juice;
	//cout<<" What do you want to buy? "<< endl;

		cola.bev_param(lines[0],tab[0]);
		pepsi.bev_param(lines[1],tab[1]);
		fanta.bev_param(lines[2],tab[2]);
		sprite.bev_param(lines[3],tab[3]);
		juice.bev_param(lines[4],tab[4]);

	cola.disp_bev();
	pepsi.disp_bev();
	fanta.disp_bev();
	sprite.disp_bev();
	juice.disp_bev();
 	review();
}

doo(){
	fstream file;
	file.open("oopse6.txt", ios::trunc | ios::out);
	if(file.is_open()){
		for (i=0; i<5 ;i++){
			file<<lines[i] <<"   ";
			file<<tab[i] << endl;
			
	}
		if (tab[0]==0){
			file << "pepsires" << endl;
		}
		if (tab[1]==0){
			file << "cokeres" <<endl;
		}
		if (tab[2]==0){
			file << "juiceres"<< endl;
		}
		if (tab[3]==0){
			file << "fantares" << endl;
		}
		if (tab[4]==0){
			file << "spriteres" <<endl;
		}
		

	
	
	file.close();
	list();
}}




int main(){
	read();
	list();
	

	return 0;
};





