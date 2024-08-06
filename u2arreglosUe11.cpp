#include <iostream>
using namespace std;
int main(){
	int numeros[50];
	int n;
	int posit=0, negat=0;
	cout<<"¿Cuantos numeros pondra? ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>numeros[i];
	}
	for(int i=0;i<n;i++){
		if(numeros[i]<0){
			negat+=numeros[i];
		}
		if(numeros[i]>=0){
			posit+=numeros[i];
		}
	}
	cout<<"La suma de los positivos es: "<<posit<<endl;
	cout<<"La suma de los negativos es: "<<negat;
	return 0;
}
