#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	float suma, media;
	float sumam, mediana, moda;
	int arreglo[30];
	int aleat;
	for(int i=0;i<30;i++){
		aleat=(rand()%900+99);
		arreglo[i]=aleat;
	}
	for(int i=0;i<30;i++){
		cout<<arreglo[i]<<" ";
	}
	for(int i=0;i<30;i++){
		if(arreglo[0]==arreglo[i]){
			moda++;
		}else{
			moda=0;
		}
	}
	for(int i=0;i<30;i++){
		suma+=arreglo[i];
		media=suma/30;
		sumam=arreglo[14]+arreglo[15];
		mediana=sumam/2;
	}
	if(moda!=0){
		cout<<"La moda es: "<<moda<<endl;
	}else{
		cout<<"no hay moda"<<endl;
	}
	cout<<"La media es: "<<media<<endl;
	cout<<"La mediana es "<<mediana;
	return 0;
}
