#include <iostream>
using namespace std;
int main(){
	int verf;
	int num[9];
	cout<<"Ingrese el numero(una cifra a la vez): ";
	for(int i=0;i<10;i++){
		cin>>num[i];
	}
	for(int i=0;i<5;i++){
		if(num[i]!=num[9-i]){
			verf++;
		}else{
			verf=0;
		}
	}
	if(verf==0){
		cout<<"el numero es capicua";
	}else{
		cout<<"el numero no es capicua";
	}
	return 0;
}
