#include <iostream>
using namespace std;

string* mistrcpy(string s1[50], string s2[50], int lim){
	for(int i=0;i<lim;i++){
		s2[i]=s1[i];
	}
	return s2;
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
	cout<<"Copiando str1 y pasandolo a str2"<<endl;
	for(int i=0;i<n;i++){
		mistrcpy(str1,str2,n);
		cout<<str2[i]<<" ";
	}
return 0;
}
