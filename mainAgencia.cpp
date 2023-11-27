/* En este codigo tiene la funcion de facilitar a las agencias de coches a vender y saber las caracteristicas de estos, como se
realizara el pago por ejemplo el enganche, ademas de saber el tipo de seguro que este tendra, esto con el fin de hacer este complejo metodo
en algo sencillo de usar */

//Bibliotecas del codigo para c in y c out, ademas de la biblioteca para poner strings
#include<iostream>
#include<string>
#include <sstream>

//Los archivos que contienen las clases
#include"Personal.h"
#include"Coche.h"
#include"Seguro.h"
#include"Agen.h"

using namespace std;

//Main del codigo
int main(){
	bool ciclo = true;
	int opc;
	
	while(ciclo == true){
		
		//Se crean las diferentes clases de coches que hay en general, las agencias dependera si hay una clase de coche o no
		
		//Gama alta 
		Alta *auto1 = new Alta("Ferrari", 1.4, "Roma", 250, 20, false, "tapetes de piel");
		Alta *auto2 = new Alta("Lamborghini", 4.5, "Limited Series", 350, 40, true, "un anio de seguro gratis");
		Alta *auto3 = new Alta("Audi", 2.1, "Audi RS", 305, 30, true, "llantas de repuesto");
		
		//Gama media
		Media *aut1 = new Media("Mazda", .5, "Mazda 3", 200, 30, false);
		Media *aut2 = new Media("Nissan", .4, "Sentra 2023", 200, 30, false);
		Media *aut3 = new Media("Subaru", .7, "Crosstrek", 190, 40, true);
		
		//Gama baja
		Baja *co1 = new Baja("Renault", .23, "Renault KWID", 130, "medio año de seguro");
		Baja *co2 = new Baja("Fiat", .25, "Fiat MOBI", 160, "una llanta de repuesto");
		Baja *co3 = new Baja("Suzuki", .29, "Suzuki Ignis", 180, "servicio de revisión mensual gratis por medio años");
		
		//Agencias de coches disponibles
		Agencia a1("Deluxe Autos", "5 de Febrero");
		Agencia a2("Good Coches", "Av Sombrerete");
		
		//Los diferentes seguros son
		Seguro ase1("Escencial", 200.5, 4);
		Seguro ase2("Basico", 150, 3);
		Seguro ase3("Amplio", 100, 1);
		
		//-------------------------------------------------------------------------
		cout<<"Esta es una pagina para conocer las diferentes agencias de coches y saber datos sobre estas"<<endl;
		cout<<"Que le gustaria revisar? \n1- Agencia de Coches \n2- Modelos de coches \n3- Salir del programa \nIntroduzca su opcion: ";
		cin>>opc;
		cout<<"\n";
		
		//Esta opcion te permite ver diferentes agencias y ver tanto el personal como los coches que tienen en estas
		if(opc == 1){
			int opcion3, info1;
			bool ciclo3 = true;
			while (ciclo3 == true){
				cout<<"Escoge que agencia te interesa: \n1- Deluxe Autos \n2- Good Coches \n3- Salir de la seccion de agencias"<<endl;
				cin>>opcion3;
				cout<<"\n";
				if(opcion3 == 1){
					a1.infoLugar();
					cout<<endl<<"Te interesa conocer: \n1- Personal \n2- Modelos de coches en tienda \n3- No me interesa mas informacion por el momento \nEscoger una opcion:";
					cin>>info1;
					cout<<"\n";
					if(info1 == 1){
						cout<<"El personal de alto rango en "<<a1.getNomb()<<" es: \n"<<endl;
						a1.agregaPersonal("Jacob", 1244, "vendedor principal", 0);
						a1.agregaPersonal("Joaquin", 2561, "vendedor sustituto", 1);
						a1.agregaPersonal("Benjamin", 1111, "jefe", 2);
						cout << a1.info_personal()<<endl;
					}
					
					else if(info1 == 2){
						int seg;
						bool ultciclo = true;
						cout<<"Los coches y sus caracteristicas que hay en esta agencia son: "<< endl;
						auto1->datos();
						auto2->datos();
						aut1->datos();
						
						while(ultciclo == true){
							cout<<"Puedes ver los seguros en caso de comprar un coche"<<endl;
							cout<<"Te interesa ver los seguros?: \n1- Si \n2- No"<<endl;
							cin>>seg;
							if(seg ==1){
								cout<<"Los seguros son los siguientes: "<<endl;
								ase2.datosSeguro();
								ase3.datosSeguro();
								cout<<"\n";
							}
							else{
								cout<<"Estas saliendo de la pestana de seguros \n"<<endl;
								ultciclo = false;
							}
						}	
					}
				}
				
				else if(opcion3 == 2){
					a2.infoLugar();
					cout<<endl<<"Te interesa conocer: \n1- Personal \n2- Modelos de coches en tienda \n3- No me interesa mas informacion por el momento \nEscoger una opcion:";
					cin>>info1;
					cout<<"\n";
					if(info1 == 1){
						cout<<"El personal de alto rango en "<<a2.getNomb()<<" es: \n"<<endl;
						a2.agregaPersonal("Jose", 2451, "empleado recientemente contratado", 0);
						a2.agregaPersonal("Erick", 4001, "vendedor", 1);
						a2.agregaPersonal("Momoz", 145, "jefe", 2);
						cout << a2.info_personal()<<endl;
					}
					
					else if(info1 == 2){
						int seg;
						bool ultciclo = true;						
						cout<<"Los coches y sus caracteristicas que hay en esta agencia son: "<<endl;
						auto3->datos();
						aut1->datos();
						aut2->datos();
						co1->datos();
						co3->datos();
						
						while(ultciclo == true){
							cout<<"Puedes ver los seguros en caso de comprar un coche"<<endl;
							cout<<"Te interesa ver los seguros?: \n1- Si \n2- No"<<endl;
							cin>>seg;
							if(seg ==1){
								cout<<"Los seguros son los siguientes: "<<endl;
								ase1.datosSeguro();
								ase2.datosSeguro();
								cout<<"\n";
							}
							else{
								cout<<"Estas saliendo de la pestana de seguros \n"<<endl;
								ultciclo = false;
							}
						}	
					}
				}
				else if(opcion3 == 3){
					cout<<"Estas saliendo de la seccion de agencias"<<endl;
					ciclo3 = false;
					cout<<"\n";
				}
				
			}
			
		}
		
		//Esta opcion te enseña todos los coches por su tipo de gama
		else if(opc == 2){
			int opcion2;
			bool ciclo2 = true;
			while(ciclo2 == true){
				cout<<"Que tipo de coche te interesa ver?: \n1- Coche gama baja \n2- Coche gama media \n3- Coche gama alta \n4- Salir de ver coches \nEsocge una opcion: ";
				cin>>opcion2;
				cout<<endl;
				
				if(opcion2 == 1){
					cout<<"Los coches de gama baja son los siguientes \n"<<endl;
					co1->importante();
					co2->importante();
					co3->importante();
					cout<<endl;
				}
				
				else if(opcion2 == 2){
					cout<<"Los coches de gama media son los siguientes \n"<<endl;
					aut1->importante();
					aut2->importante();
					aut3->importante();
					cout<<endl;
				}
				
				else if(opcion2 == 3){
					cout<<"Los coches de gama alta son los siguientes \n"<<endl;
					auto1->importante();
					auto2->importante();
					auto3->importante();
					cout<<endl;
				}
				
				else if(opcion2 == 4){
					cout<<"Cerrando la seccion de coches";
					ciclo2 = false;
				}
				
			}
		}
		 
		//Esta opcion te permite salir del programa
		else if (opc == 3){
			cout<<"Estas saliendo del programa"<<endl;
			ciclo = false;
		}
		
	}
	
	return 0;
}
