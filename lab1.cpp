#include <iostream>
using namespace std;
int pepsi=10, coke=15, juice=20, sprite=25, fanta=30;
string wyb;
int a;
int main();

int end(){
	return 0;
};
int calc(){
	
	cout << "How much do you want?" << endl;
	cin >> a;
		if (wyb=="pepsi"){
			if(a > pepsi){
				cout <<"Too much!!" << endl;
			}
			else{
			
			pepsi=pepsi-a;
			}
		}
		if (wyb=="coke"){
			if(a > coke){
				cout <<"Too much!!" << endl;
			}
			else{
			
			coke=coke-a;
			}
		}
				if (wyb=="juice"){
			if(a > juice){
				cout <<"Too much!!" << endl;
			}
			else{
			
			juice=juice-a;
			}
		}
				if (wyb=="sprite"){
			if(a > sprite){
				cout <<"Too much!!" << endl;
			}
			else{
			
			sprite=sprite-a;
			}
		}
				if (wyb=="fanta"){
			if(a > fanta){
				cout <<"Too much!!" << endl;
			}
			else{
			
			fanta=fanta-a;
			}
		}
		main();
}


string choice(){
	cout <<"What do you want to buy??" << endl;
	cin >> wyb ;
	if (wyb=="end"){
		end();
	}
	else if (wyb=="pepsi"){
	
	calc();
    }
	else if (wyb=="coke"){
	
	calc();
    }
    else if (wyb=="juice"){
	
	calc();
    }
    else if (wyb=="sprite"){
	
	calc();
    }
	else if (wyb=="fanta"){
	
	calc();
    }
    else if (wyb=="Kasia"){
    	cout << " <3 <3 <3 <3" << endl;
	}
    else{
    	cout << "Please input a correct product name !!!" << endl;
    	main();
	}
	
	
	}

int main(){
	cout<<"pepsi  "<< pepsi << endl;
	cout<<"coke  " << coke  << endl;
	cout<<"juice  "<< juice << endl;
	cout<<"sprite  "<< sprite <<endl;
	cout<<"fanta  "<< fanta << endl;
	
	choice();
	
	return 0;
}

