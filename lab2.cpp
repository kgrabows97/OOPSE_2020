#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

fstream file;
string line;
int amount;
int tab[5];
string lines[10];
int i=0;
string choice;
int am;
int starte();
int main();
int od();
int ob();
int doo();
int end();
end(){
	
}

od(){
	for (i=0;i<5;i++){
	cout<< lines[i] << "   " ;
	cout<<tab[i]<<" Pcs"<<endl;

}
	ob();
}

starte(){

		i=0;
	file.open("file.txt", ios::in | ios::out);
	if (file.is_open()){
		while(file>>line){
			stringstream value(line);
			if (value>>amount){
				tab[i]=amount;
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


od();
}



ob(){
	cout<<" What do you choose?" <<endl;
	cin >> choice;
			if (choice=="end"){
			end();
	}
			else{
			
	cout<< " How much do you want?" << endl;
	cin >> am;
	
	
		if (choice=="pepsi"){
		if (tab[0]>=am){
			tab[0]=tab[0]-am;}
			else 
			{
				cout<<"Too much!!"<<endl;
			}
	}
		else if (choice=="coke"){
		if (tab[1]>=am){
			tab[1]=tab[1]-am;}
			else 
			{
				cout<<"Too much!!"<<endl;
			}
	}
		else if (choice=="juice"){
		if (tab[2]>=am){
			tab[2]=tab[2]-am;}
			else 
			{
				cout<<"Too much!!"<<endl;
			}
	}
		else if (choice=="fanta"){
		if (tab[3]>=am){
			tab[3]=tab[3]-am;}
			else 
			{
				cout<<"Too much!!"<<endl;
			}
	}
		else if (choice=="sprite"){
		if (tab[4]>=am){
			tab[4]=tab[4]-am;}
			else
			{
				cout<<"Too much!!"<<endl;
			}
		}
		else{
			cout << "Choose a proper product name!!" <<endl;
		}

	
	doo();
}
}
doo(){
	file.open("file.txt", ios::trunc | ios::out);
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
	od();
}
}
main(){
starte();


return 0;
}

