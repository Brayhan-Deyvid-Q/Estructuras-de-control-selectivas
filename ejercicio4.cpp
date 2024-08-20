/*En un supermercado se hace una promoción, mediante la cual el cliente obtiene un
descuento dependiendo de un número que se escoge al azar. Si el numero escogido es
menor que 74 el descuento es del 15% sobre el total de la compra, si es mayor o igual a 74
el descuento es del 20%. Obtener cuánto dinero se le descuenta.*/

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std; 

void descuento(int num, double monto){
	double descuento, preciofinal;
	if (num>=30){
		descuento = (monto*20)/100;
		preciofinal = monto - descuento;
		cout<<"Usted es beneficiario de un desceunto del 20%"<<endl; 
		cout<<"Su nuevo monto a pagar es de: S/."<<preciofinal<<endl;
		cout<<"Su descuento fue de: S/."<<descuento<<endl;
		cout<<endl;
	}else{
		descuento = (monto*10)/100;
		preciofinal = monto - descuento;
		cout<<"Usted es beneficiario de un descuento del 10%"<<endl;
		cout<<"Su nuevo monto a pagar es de: S/."<<preciofinal<<endl;
		cout<<"Su descuento fue de: S/."<<descuento<<endl;
		cout<<endl;
	}
}

void numeroAzar(int &num){
	num = (rand() % 100+1);
	cout<<"El número aleatorio es: "<<num<<endl; 
}

int main(){
	int opcion;
	int num;
	double monto;
	srand(time(NULL));
	SetConsoleOutputCP(CP_UTF8);
	
	cout<<"\tBienvenido al programa de los descuentos\t"<<endl;
	
	do{	
		cout<<"Ingrese el monto total a pagar de su compra: S/.";
		cin>>monto;
		cout<<endl;
		numeroAzar(num);
		descuento(num, monto);
		cout<<"¿Desea ingresar un nuevo monto?"<<endl;
		cout<<"1) Si"<<endl;
		cout<<"2) No"<<endl;
		cin>>opcion;
		cout<<endl<<endl;
		num=0;
	}while(opcion == 1);
	return 0; 
}