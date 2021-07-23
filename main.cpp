#include <iostream>
#include <math.h>
using namespace std;
int menu();
void ejercicio1();
void ejercicio2();
int main(int argc, char** argv) {
	int op = menu();
	while(op != 3){
		switch(op){
			case 1:{
				ejercicio1();
				break;
			}
							
			case 2:{
				ejercicio2();
				break;
			}
			
			default: {
				cout<<"Opcion invalida"<< endl;
				menu();
				break;
			}
		}
		op = menu();
	}
	return 0;
}
int menu(){
	int opcion = 0;
	cout<<"********** Menu **********"<<endl;
	cout<<"* 1. Ejercicio 1         *"<<endl;
	cout<<"* 2. Ejercicio 2         *"<<endl;
	cout<<"* 3. Salir               *"<<endl;
	cout<<"**************************"<<endl;
	cout<<"Elija una opcion: "<<endl;
	cin>> opcion;
	return opcion;
}
void ejercicio1(){
	int n = 0;
	double total = 0;
	cout<<"Ingrese n: "<<endl;
	cin>>n;
	while(n < 1){
		cout<<"Ingrese n: "<<endl;
		cin>>n;
	}
	for(int i = 1; i <= n; i++){
		double	nom = 2.0 * i - 1.0;
		double	denom = i * (i + 1.0);
		total += nom/denom;
	}
	cout<<"Resultado = "<< total<<endl;
}
void ejercicio2(){
	int x = 0;
	cout<<"Ingrese x: "<<endl;
	cin>>x;
	double total = 1.0 / (1 + exp(x));
	cout<<"Resultado = "<< total<<endl;	
}