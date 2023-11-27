/* En este codigo tiene la funcion de facilitar a las agencias de coches a vender y saber las caracteristicas de estos, como se
realizara el pago por ejemplo el enganche, ademas de saber el tipo de seguro que este tendra, esto con el fin de hacer este complejo metodo
en algo sencillo de usar */

#ifndef _Agencias_h_
#define _Agencias_h_

#include <iostream>
#include <string>
#include "Personal.h"
#include <sstream>

using namespace std;

class Agencia{
private:
	Personal Personales[100];
	string nomb, ubicacion;
	
public:
	Agencia(){};
	Agencia(string name, string ubi) : nomb(name), ubicacion(ubi) {}
	void agregaPersonal(string, int, string, int);
	string info_personal();
	
	string getNomb(){
		return nomb;
	}	
	
	string getUbicacion(){
		return ubicacion;
	}
	
	void setNomb(string name){
		nomb = name;
	}
	
	void setUbicacion(string ubi){
		ubicacion = ubi;
	}
	
	void infoLugar(){
		cout<<"La agencia "<<nomb<<" se ubica en "<<ubicacion<<endl;
	}
	
};

void Agencia::agregaPersonal(string nombre1, int _id1, string rango1, int posicion1){
	Personales[posicion1] = Personal(nombre1, _id1, rango1);
}

string Agencia::info_personal(){
	stringstream aux;
    for(int i = 0 ; i <3; i++){
      aux <<"El nombre del Personal "<<i+1<<" es "<<Personales[i].to_string()<< endl;
    }
    return aux.str();
}

#endif
