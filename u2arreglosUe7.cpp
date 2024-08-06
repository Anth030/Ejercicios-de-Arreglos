#include <iostream>
using namespace std;

int main(){
	int n;
	int vec[50], inv[50];
	cout<<"Cantidad de numeros: ";
	cin>>n;
	cout<<"Ingrese los numeros: "<<endl;
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	for(int i=0;i<n;i++){
		inv[i]=vec[n-1-i];
	}
	cout<<"vector invertido: ";
	for(int i=0;i<n;i++){
	cout<<inv[i];
	}
	return 0;
}
