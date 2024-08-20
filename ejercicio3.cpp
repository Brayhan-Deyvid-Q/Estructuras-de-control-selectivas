/*Calcular el total a pagar por la compra de camisas. Si se compran tres camisas o más se
aplica un descuento del 20% sobre el total de la compra y si son menos de tres camisas un
descuento del 10%*/

#include<iostream>
#include<windows.h>
using namespace std;

void descuento(double camisas, double suma){
	double descuento;
	if(camisas>=3){
		descuento = suma - ((suma*20)/100);
		cout<<"Felicidades la cantidad de camisas de su compra es beneficiaria de un descuento del 20%"<<endl;
		cout<<"Su nuevo monto a pagar es de: S/."<<descuento<<endl;	
	}else{
		descuento = suma - ((suma*10)/100);
		cout<<"Felicidades por la cantidad de camisas adquirida es benficiario de un decuento del 10%"<<endl;
		cout<<"Su monto a pagar es de: S/."<<descuento<<endl;
	}
}

int main(){
	
	int cantcami;
	double cami;
	double sc=0;
	int opcion;
	SetConsoleOutputCP(CP_UTF8);
	
	cout<<"\tPrograma de descuentos de la empresa XXXX\t"<<endl;
	do {
		cout<<"Ingrese la cantidad de camisas que a adquirido: ";
		cin>>cantcami;
		cout<<endl;
		for (int i=0; i<cantcami; i++){
			cout<<"Ingrese el precio de la camisa "<<i+1<<": S/.";
			cin>>cami;
			sc=sc+cami;
		}
		descuento(cantcami, sc);
		cout<<"¿Desea continuar ingresando otra compra?"<<endl;
		cout<<" 1) Si"<<endl;
		cout<<" 2) No"<<endl;
		cout<<"Ingrese una opción: ";
		cin>>opcion;
		cout<<endl<<endl;
	}while(opcion == 1);
	return 0;
}