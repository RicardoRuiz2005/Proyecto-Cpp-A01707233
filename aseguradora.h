/* En este codigo tiene la funcion de facilitar a las agencias de coches a vender y saber las caracteristicas de estos, como se
realizara el pago por ejemplo el enganche, ademas de saber el tipo de seguro que este tendra, esto con el fin de hacer este complejo metodo
en algo sencillo de usar */

#include <iostream>
#include <string>
using namespace std;

class Coche{	
private:
	string marca;
	float costo;	
	
public:
	Coche(string marca, float costo) : marca(marca), costo(costo) {}
	
	string getMarca()const{
		return marca;
	}
	
	float getCosto()const{
		return costo;
	}
	
	void setMarca(string marca){
		marca = marca;
	}
	
	void setCosto(float costo){
		costo = costo;
	}
	
	void datos(){
		cout<<"El costo del coche "<<marca<<" es de "<<costo<<" millones de pesos"<<endl;
	}
};

class Pago{
private:
	string enganche;
	int meses;
	
public:
	Pago(string enganche, int meses) : enganche(enganche), meses(meses){}
	
	string getEnganche(){
		return enganche;
	}
	
	int getMeses(){
		return meses;
	}
	
	void setEnganche(string enganche){
		enganche = enganche;
	}
	
	void setMeses(int meses){
		meses = meses;
	}
	
	void gasto(){
		if (enganche == "si"){
			cout<<"El coche "<<enganche<<" tendria enganche a "<<meses<<endl;
		}
		
		else{
			cout<<"El coche no tendra enganche"<<endl;
		}
	}
};

class Seguro{
	private:
		int asegurado, tiempo;
		float precio;
	
	public:
		Seguro(int asegurado, float precio, int tiempo) : asegurado(asegurado), precio(precio), tiempo(tiempo){}
		
	int getAsegurado(){
		return asegurado;	
	}
	
	float getPrecio(){
		return precio;
	}
	
	int getTiempo(){
		return tiempo;
	}
	
	void setAsegurado(int asegurado){
		asegurado = asegurado;
	}
	
	void setPrecio(float precio){
		precio = precio;
	}
	
	void setTiempo(int tiempo){
		tiempo = tiempo;
	}
	
	void t_seguro(){
		if (asegurado == 1){
			cout<<"El seguro dura "<<tiempo<<" meses"<<endl;
		}
		else{
			cout<<"El coche no esta asegurado"<<endl;
		}
	}
};
