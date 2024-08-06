#include <iostream>
using namespace std;
int main(){
	char frase[20];
	int num,n;
	int entero;
	cout<<"tamaño del char frase: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>frase[i];
	}
	for(int i=0;i<n;i++){
		num=isdigit(frase[i]);
		if(num==1){
		entero=atoi(frase);
		}
	}
	entero=entero+2;
	cout<<entero;
	return 0;
}
