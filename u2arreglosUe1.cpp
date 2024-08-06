#include <iostream>
using namespace std;

string mayus(string palabras){
	int n=0;
	for(int i=0;i<sizeof(palabras);i++){
		palabras[0]=toupper(palabras[0]);
		if(palabras[i]==' '){
			n=i;
		}
		if(n!=0){
		palabras[n+1]=toupper(palabras[n+1]);
		}
	}
	return palabras;
}
	
int main(){
	string frase;
	cout<<"Escriba una palabra o frase: "<<endl;
	getline(cin, frase);
	cout<<mayus(frase);
	return 0;
}
