#include <iostream>
using namespace std;

int mistrcmp(string s1[50], string s2[50], int lim, int cont){
	for(int i=0;i<lim;i++){
	if(s1[i]==s2[i]){
		cont=0;
	}
	if(s1[i]>s2[i]){
		cont=1;
		break;
	}
	else if(s1[i]<s2[i]){
		cont=-1;
		break;
		}
	}
	//un extra para indicar si son iguales o no
	if(cont==1||cont==-1){
		cout<<"no son iguales"<<endl;
	}else{
		cout<<"son iguales"<<endl;
	}//-------------
	
	return cont;
}

	
	
	int main(){
		string str1[50];
		string str2[50];
		int n;
		int contar=0;
		cout<<"Cuantos elementos colocara: ";
		cin>>n;
		cout<<"Escriba palabras para str1: ";
		for(int i=0;i<n;i++){
			cin>>str1[i];
		}
		cout<<"Escriba palabras para str2: ";
		for(int i=0;i<n;i++){
			cin>>str2[i];
		}
		cout<<"Comparando str1 con str2: "<<endl;
		contar=mistrcmp(str1,str2,n,contar);
		cout<<contar;
		return 0;
	}
