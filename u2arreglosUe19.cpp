#include <iostream>
using namespace std;

string sinEspNiPunt(string fr){//quita tildes, espacios y puntuaciones
	string sinEsp;
	for(int i=0;i<fr.length();i++){
		switch(fr[i]){
		case 'á':
			fr[i]='a';
			break;
		case 'é':
			fr[i]='e';
			break;
		case 'í':
			fr[i]='i';
			break;
		case 'ó':
			fr[i]='o';
			break;
		case 'ú':
			fr[i]='u';
			break;
		}
	}
	for(int i=0;i<fr.length();i++){
		if(fr[i]!=' '&&fr[i]!=','&&fr[i]!=';'&&fr[i]!=':'&&fr[i]!='.'){
			sinEsp+=fr[i];
		}
	}
	return sinEsp;
}
	
bool esPalindromo(string fr){
	int a=0;
	int b=fr.length()-1;
	for(int i=0;i<fr.length();i++){
		if(tolower(fr[a])==tolower(fr[b])){
			a++;
			b--;
		}else{
			return false;
		}
	}
	return true;
}

int main(){
	string frase, SEPfrase;
	cout<<"Ingrese la frase o palabra"<<endl;
	getline(cin,frase);
	SEPfrase=sinEspNiPunt(frase);
	if(esPalindromo(SEPfrase)){
		cout<<"la palabra/frase es un palindromo"<<endl;
	}else{
		cout<<"la palabra/frase no es un palindromo"<<endl;
	}
	return 0;
}
