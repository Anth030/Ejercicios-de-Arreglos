#include <iostream>
using namespace std;

int main(){
	int n, cont=0;
	int numeros[50],sumai=0,sumap=0;
	cout<<"Cantidad de numeros: ";
	cin>>n;
	cout<<"Ingrese los numeros: "<<endl;
	for(int i=0;i<n;i++){
		cin>>numeros[i];
		if(i==cont){
			sumap+=numeros[i];
		}
		if(i==cont+1){
			sumai+=numeros[i];
			cont+=2;
		}
	}
	cout<<"Empieza desde indice [0](se considera a 0 como par) "<<endl;
	cout<<"suma de impares "<<sumai<<", suma de pares "<<sumap;
	return 0;
}
