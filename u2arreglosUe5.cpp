#include <iostream>
using namespace std;
int main(){
	int sec[50];
	int n;
	int menor;
	int mayor=0, repm=0, rep=0;
	cout<<"¿cuantos numeros ingresara?: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>sec[i];
		if(sec[i]>mayor){
			mayor=sec[i];
		}
		if(sec[i]<menor){
			menor=sec[i];
		}
	}
	for(int i=0;i<n;i++){
		if(mayor==sec[i]){
			repm++;
		}
		if(menor==sec[i]){
			rep++;
		}
	}
	cout<<"el mayor es "<<mayor<<" se repite "<<repm<<" vez/veces"<<endl;
	cout<<"el menor es "<<menor<<" se repite "<<rep<<" vez/veces";
	return 0;
}
