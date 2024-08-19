/*En un almacén se hace un 20% de descuento a los clientes cuya compra supere los
S/.1000 ¿Cuál será la cantidad que pagara una persona por su compra?*/

#include <iostream>
#include <windows.h>
using namespace std; 

void descuento(float compra){
	float descuento;
	if(compra>1000.00){
		cout<<"Felicidades usted es acreedor de un descuento del 20%"<<endl;
		descuento= compra - ((compra*20)/100);
		cout<<"Ahora su compra tiene el valor de: S/."<<descuento<<endl;
	}else{
		cout<<"Su compra no alcanza el valor establecido para ser beneficiario de un descuento, su compra tiene el valor de: S/."<<compra<<endl;
	}
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	char opcion;
	float compra;
	
	cout<<"\tAlmacén xxxxx\t"<<endl;
	
	do{
		cout<<"Ingrese la cantidad en soles consumida: S/.";
		cin>>compra;
		descuento(compra);
		cout<<"¿Desea ingresar otra compra?"<<endl;
		cout<<" 1) Si"<<endl;
		cout<<" 2) No"<<endl;
		cout<<"Opción: ";
		cin>>opcion;
		cout<<endl;
	}while(opcion=='1');
	return 0;
}