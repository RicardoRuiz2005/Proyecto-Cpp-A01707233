/* En este codigo tiene la funcion de facilitar a las agencias de coches a vender y saber las caracteristicas de estos, como se
realizara el pago por ejemplo el enganche, ademas de saber el tipo de seguro que este tendra, esto con el fin de hacer este complejo metodo
en algo sencillo de usar */

#include <iostream>
#include <string>
using namespace std;

class Coche{	
private:
	string tipoCoche;
	string marca;
	float costo;	
	int velocidad;
	
public:
	Coche(string mar, float cost, string tip, int vel) : marca(mar), costo(cost), tipoCoche(tip), velocidad(vel) {}
	
	string getMarca()const{
		return marca;
	}
	
	float getCosto()const{
		return costo;
	}
	string getTipoCoche(){
		return tipoCoche;
	}
	int getVelocidad(){
		return velocidad;	
	}
	void setMarca(string mar){
		marca = mar;
	}
	void setCosto(float cost){
		costo = cost;
	}
	void setTipoCoche(string tip){
		tipoCoche = tip;
	}
	void setVelocidad(int vel){
		velocidad = vel;
	}
	
	void datos(){
		cout<<"El costo del coche "<<tipoCoche<<" de la marca "<<marca<<" es de "<<costo<<" millones de pesos"<<" con velocidad de "<<velocidad<<" Km/h "<<endl;
	}
};

class Personal{
private:
	string nombre;
	int id;
	string rango;
	
public:
	Personal(string nom, int _id, string rang) : nombre(nom), id(_id), rango(rang) {}
	
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

class Seguro{
	private:
		string tipo;
		int tiempo;
		float precio;
	
	public:
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
		cout<<"El tipo de seguro es: "<<tipo<<", este seguro dura "<<tiempo<<" anios con un costo de '"<<precio<<"'"<<endl;
	}
};
