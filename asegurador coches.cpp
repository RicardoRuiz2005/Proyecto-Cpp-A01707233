/* En este codigo tiene la funcion de facilitar a las agencias de coches a vender y saber las caracteristicas de estos, como se
realizara el pago por ejemplo el enganche, ademas de saber el tipo de seguro que este tendra, esto con el fin de hacer este complejo metodo
en algo sencillo de usar */

#include<iostream>
#include<string>
#include"aseguradora.h"
using namespace std;

int main(){
	
	//Clase coche
	Coche auto1("Ferrari", 1.4);
	Coche auto2("Porsche", 2);
	Coche auto3("Mercedes Benz", .5);
	
	//Clase pago
	Pago tipo1("si", 9);
	Pago tipo2("No", 0);
	Pago tipo3("si", 12);
	
	//Class Seguro
	Seguro ase1(1, 145.3, 5);
	Seguro ase2(0, 0, 0);
	Seguro ase3(1, 200, 12);
	
	//Metodos coche
	cout<<"Metodos de coche"<<endl;
	auto1.datos();
	auto2.datos();
	auto3.datos();
	
	//Metodos pago
	cout<<endl<<"Metodos de pago"<<endl;
	tipo1.gasto();
	tipo2.gasto();
	tipo3.gasto();
	
	//Metodos seguro
	cout<<endl<<"Metodos de seguro"<<endl;
	ase1.t_seguro();
	ase2.t_seguro();
	ase3.t_seguro();
	
	return 0;
}
