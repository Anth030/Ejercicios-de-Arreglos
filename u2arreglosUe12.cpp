#include <iostream>
using namespace std;

void verificar(int vec[50], int lim){
	int c, m=0;
	for(int i=0;i<lim;i++){
		cin>>vec[i];
		c=vec[0];
	}
	for(int i=0;i<lim;i++){
		if(vec[i]==c){
			c++;
			m++;
		}
	}
	if(m==lim){
		cout<<"El vector esta ordenado "; 
	}else{
		cout<<"El vector no esta ordenado ";
	}
}
	
int main(){
	int vector[50];
	int n;
	cout<<"¿Cuantos numeros escribira? ";
	cin>>n;
	verificar(vector,n);
	return 0;
}
