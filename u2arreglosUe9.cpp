#include <iostream>
using namespace std;
int main(){
	int n, rot;
	int vec[50], inte[50];
	cout<<"¿Cuantos numeros pondra en el vector? ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	cout<<"¿rotar? si(1)";
	cin>>rot;
	for(int i=0;i<n;i++){
		inte[0]=vec[n-1];
		if(rot==1){
			inte[i+1]=vec[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<inte[i];
	}
	return 0;
}
