/* En este codigo tiene la funcion de facilitar a las agencias de coches a vender y saber las caracteristicas de estos, como se
realizara el pago por ejemplo el enganche, ademas de saber el tipo de seguro que este tendra, esto con el fin de hacer este complejo metodo
en algo sencillo de usar */

#include <iostream>
#include <string>
//#include "Seguro.h"
using namespace std;


//Clase padre de coches
class Coche{	
protected:
	string tipoCoche;
	string marca;
	float costo;	
	int velocidad;
	//Seguro seg[1];
	
public:
	//Coche(){};
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
	
	void importante(){
		cout<<tipoCoche<<" de la marca "<<marca<<endl;
	}
	
	void datos(){
		cout<<"El costo del coche "<<tipoCoche<<" de la marca "<<marca<<" es de "<<costo<<" millones de pesos"<<" con velocidad de "<<velocidad<<" Km/h \n"<<endl;
	}
};


//Clase baja del coche
class Baja : public Coche{
	private:
		string cortesia;
	public:
		Baja(string mar, float cost, string tip, int vel, string cortes) : Coche(mar, cost, tip, vel){
			cortesia = cortes;
		}
	
	string getCortesia(){
		return cortesia;
	}
	
	virtual void datos(){
		cout<<"El costo del coche "<<tipoCoche<<" de la marca "<<marca<<" es de "<<costo<<" millones de pesos"<<" con velocidad de "<<velocidad<<" Km/h "<<endl;
		cout<<"Este coche contiene una cortesia de: "<<cortesia<<"\n"<<endl;
	}
};


//Clase media de un coche
class Media : public Coche{
	private:
		int gasolina;
		bool parabrisas;
	public:
		Media(string mar, float cost, string tip, int vel, int gas, bool para) : Coche(mar, cost, tip, vel){
			gasolina = gas;
			parabrisas = para;
		}
	
	int getGasolina(){
		return gasolina;
	}
	
	bool getParabrisas(){
		return parabrisas;	
	}
	
	virtual void datos(){
		cout<<"El costo del coche "<<tipoCoche<<" de la marca "<<marca<<" es de "<<costo<<" millones de pesos"<<" con velocidad de "<<velocidad<<" Km/h "<<endl;
		if(parabrisas == true){
			cout<<"El coche contiene un lindo parabrisas extra en caso de algun danio, ademas contiene "<<gasolina<<"L de gasolina en el tanque \n"<<endl;
		}
		else{
			cout<<"El coche contiene "<<gasolina<<"L de gasolina en el tanque \n"<<endl;
		}
	}
};


//Clase alta del coche
class Alta : public Coche{
	private:
		int gasolina;
		bool parabrisas;
		string cortesia;
	public:
		Alta(string mar, float cost, string tip, int vel, int gas, bool para, string cortes) : Coche(mar, cost, tip, vel){
			gasolina = gas;
			parabrisas = para;
			cortesia = cortes;
		}
	
	int getGasolina(){
		return gasolina;
	}
	
	bool getParabrisas(){
		return parabrisas;	
	}
	
	string getCortesia(){
		return cortesia;
	}
	
	virtual void datos(){
		cout<<"El costo del coche "<<tipoCoche<<" de la marca "<<marca<<" es de "<<costo<<" millones de pesos"<<" con velocidad de "<<velocidad<<" Km/h "<<endl;
		if(parabrisas == true){
			cout<<"El coche contiene un lindo parabrisas extra en caso de algun danio, ademas contiene "<<gasolina<<"L de gasolina en el tanque "<<endl;
		}
		else{
			cout<<"El coche contiene "<<gasolina<<"L de gasolina en el tanque "<<endl;
		}
		cout<<"Este coche contiene una cortesia de: "<<cortesia<<"\n"<<endl;
	}
	
	void probar(){
		float nv = velocidad / 2;
		cout<<"El coche "<<tipoCoche<<"avanza a "<<nv<<"km/h durante un largo periodo"<<endl;
		if(nv >= 60){
			cout<<"El coche es de buena calidad"<<endl;
		}
		else{
			cout<<"Es mas recomendable comprar otro modelo"<<endl;
		}
	}

};
