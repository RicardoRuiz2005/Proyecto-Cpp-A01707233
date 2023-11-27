/* En este codigo tiene la funcion de facilitar a las agencias de coches a vender y saber las caracteristicas de estos, como se
realizara el pago por ejemplo el enganche, ademas de saber el tipo de seguro que este tendra, esto con el fin de hacer este complejo metodo
en algo sencillo de usar */

#ifndef Personales_H_
#define Personales_H_

#include <iostream>
#include <string>
#include <sstream>
using namespace std;


//Crea la clase personal de la agencia de coches
class Personal{
private:
	string nombre;
	int id;
	string rango;
	
public:
	Personal(){};
	Personal(string nom, int _id, string rang) : nombre(nom), id(_id), rango(rang) {}
	string to_string();
	
	string getNombre(){
		return nombre;
	}
	
	int getId(){
		return id;
	}
	
	string getRango(){
		return rango;
	}
	
	void setNombre(string nom){
		nombre = nom;
	}
	
	void setId(int _id){
		id = _id;
	}
	
	void setRango(string rang){
		rango = rang;
	}
	
	void datosPersonal(){
		cout<<"El nombre del "<<rango<<" es "<<nombre<<" su ID: "<<id<<endl;
	}
};

string Personal::to_string(){
	stringstream aux;
	aux << nombre <<" y tiene el rango de "<<rango<<endl;
	aux <<"si se desea contactar busque el siguiente ID: "<<id<<endl;
	return aux.str();	
}

#endif
