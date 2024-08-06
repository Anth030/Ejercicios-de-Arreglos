#include <iostream>
using namespace std;

string* mistrcat(string s1[50], string s2[50], int lim){
	for(int i=0;i<lim*2;i++){
		s1[i+lim]=s2[i];
	}
	return s1;
}
	int main(){
		string str1[50];
		string str2[50];
		int n;
		cout<<"Cuantos elementos colocara: ";
		cin>>n;
		cout<<"Escriba palabras para str1:  ";
		for(int i=0;i<n;i++){
			cin>>str1[i];
		}
		cout<<"Escriba palabras para str2: ";
		for(int i=0;i<n;i++){
			cin>>str2[i];
		}
		cout<<"Pasando str2 al final de str1: "<<endl;
		for(int i=0;i<n*2;i++){
			mistrcat(str1,str2,n);
			cout<<str1[i]<<" ";
		}
		return 0;
	}
