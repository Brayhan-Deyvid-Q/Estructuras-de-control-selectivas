/*Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su
promedio de tres calificaciones es mayor o igual a 70; reprueba en caso contrario*/

#include <iostream>
#include <windows.h>
using namespace std; 

void promCali(double a, double b, double c){
	double prom;
	prom=(a+b+c)/3;
	if(prom>=70){
		cout<<"Su promedio es de: "<<prom<<endl;
		cout<<"Felicidades usted aprueba el curso"<<endl;
	}else{
		cout<<"Su promedio es de: "<<prom<<endl;
		cout<<"Lamentamos que desapruebe el curso"<<endl;
	}
}

void validCali(double &c){
	if(c<0 || c>100){
		cout<<"Entrada no válida"<<endl;
		cout<<"Ingrese una calificación real por favor: ";
		cin>>c;
	}
}

int main(){
	double cali1, cali2, cali3;
	SetConsoleOutputCP(CP_UTF8);

	cout<<"Este programa te ayudará a conocer tu promedio y si aprobaste o no la asignatura en cuestión"<<endl;
	cout<<"Ingresa tu primera calificación: ";
	cin>>cali1;
	validCali(cali1);
	cout<<"Ingresa tu segunda calificación: ";
	cin>>cali2;
	validCali(cali2);
	cout<<"Ingresa tu tercera calificación: ";
	cin>>cali3;
	validCali(cali3);
	promCali(cali1, cali2, cali3);
	return 0; 
}