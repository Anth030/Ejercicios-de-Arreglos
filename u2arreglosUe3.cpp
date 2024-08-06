#include <iostream>
using namespace std;

int main(){
	char letra;
	int num=0;
	char palabra[100];
	cout<<"escriba una palabra o una frase "<<endl;
	for(int i=0;i<1;i++){
		gets(palabra);
	}
	cout<<"que letra quiere contar: ";
	cin>>letra;
	for(int i=0;i<100;i++){
		if(palabra[i]==letra){
			num++;
		}
	}
	cout<<"la cantidad de ("<<letra<<") en la frase o palabra es: "<<num;
	return 0;
}
