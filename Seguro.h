/* En este codigo tiene la funcion de facilitar a las agencias de coches a vender y saber las caracteristicas de estos, como se
realizara el pago por ejemplo el enganche, ademas de saber el tipo de seguro que este tendra, esto con el fin de hacer este complejo metodo
en algo sencillo de usar */

#include <iostream>
#include <string>
using namespace std;


//Crea la clase seguro para la agencia
class Seguro{
	private:
		string tipo;
		int tiempo;
		float precio;
	
	public:
		//Seguro(){};
		Seguro(string tip, float pre, int tiem) : tipo(tip), precio(pre), tiempo(tiem){}
  
	string getTipo(){
		return tipo;	
	}
	
	float getPrecio(){
		return precio;
	}
	
	int getTiempo(){
		return tiempo;
	}
	
	void setTipo(string tip){
		tipo = tip;
	}
	
	void setPrecio(float pre){
		precio = pre;
	}
	
	void setTiempo(int tiem){
		tiempo = tiem;
	}
	
	void datosSeguro(){
		cout<<"El tipo de seguro es: "<<tipo<<", este seguro dura "<<tiempo<<" anios con un costo de '"<<precio<<"' dolares"<<endl;
	}
};
