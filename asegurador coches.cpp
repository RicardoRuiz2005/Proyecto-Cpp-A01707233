/* En este codigo tiene la funcion de facilitar a las agencias de coches a vender y saber las caracteristicas de estos, como se
realizara el pago por ejemplo el enganche, ademas de saber el tipo de seguro que este tendra, esto con el fin de hacer este complejo metodo
en algo sencillo de usar */

#include<iostream>
#include<string>
#include"Personal.h"
#include"Coche.h"
#include"Seguro.h"

using namespace std;

int main(){
	
	//Clase coche
	Alta *auto1 = new Alta("Ferrari", 1.4, "Roma", 200, 60, false, "un anio de seguro gratis");
	Media *auto2 = new Media("Porsche", 2, "918", 150, 90, true);
	Baja *auto3 = new Baja("Mercedes Benz", .5, "Classic", 100, "un par de llantas gratis");
	
	//Clase personal
	Personal p1("Jacob", 1244, "empleado");
	Personal p2("Benjamin", 277, "Jefe");
	Personal p3("Paolo", 6781, "empleado");
	
	//Class Seguro
	Seguro ase1("Escencial", 200.5, 4);
	Seguro ase2("Basico", 150, 3);
	Seguro ase3("Amplio", 100, 1);
	
	//Metodos coche
	cout<<"-----Metodos de coche----- \n"<<endl;
	auto1->datos();
	auto1->probar();
	
	auto2->datos();
	
	auto3->datos();
	
	//Metodos personal
	cout<<endl<<"-----Metodos de personal----- \n"<<endl;
	p1.datosPersonal();
	p2.datosPersonal();
	p3.datosPersonal();
	
	//Metodos seguro
	cout<<endl<<"-----Metodos de seguro----- \n"<<endl;
	ase1.datosSeguro();
	ase2.datosSeguro();
	ase3.datosSeguro();
	
	return 0;
}
