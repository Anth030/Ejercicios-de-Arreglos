#include <iostream>
using namespace std;
int valoracion(double Pmensual, double entrada){
	int valor;
	if(entrada<(Pmensual*40)/100){
		valor=1;
	}
	if(entrada>=(Pmensual*40)/100&&entrada<=(Pmensual*75)/100){
		valor=2;
	}
	if(entrada>(Pmensual*75)/100){
		valor=3;
	}
	return valor;
}
	
int main(){
	double ingresos[12];
	double suma, promMensual, porcent[12];
	int val[12];
	string meses[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	cout<<"Ponga los ingresos mensuales: "<<endl;
	for(int i=0;i<12;i++){
		cout<<meses[i]<<" ";
		cin>>ingresos[i];
	}
	for(int i=0;i<12;i++){
		suma+=ingresos[i];
		promMensual=suma/12;
	}
	for(int i=0;i<12;i++){
		porcent[i]=(ingresos[i]*100)/suma;
	}
	for(int i=0;i<12;i++){
		val[i]=valoracion(promMensual,ingresos[i]);
	}
	cout<<"PROMEDIO MENSUAL: "<<promMensual<<endl;
	for(int i=0;i<12;i++){
		cout<<meses[i]<<" ";
		cout<<ingresos[i]<<" ";
		cout<<"("<<porcent[i]<<"%) ";
		if(val[i]==1){
			cout<<"MINIMO";
		}
		if(val[i]==2){
			cout<<"REGULAR";
		}
		if(val[i]==3){
			cout<<"EXCELENTE";
		}
	}
	cout<<"Meses EXCELENTES: ";
	for(int i=0;i<12;i++){
		if(val[i]==3){
			cout<<meses[i]<<" ";
		}
	}
	return 0;
}
