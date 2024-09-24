#include <iostream>
using namespace std;
int main(){

cout<<"**************************************"<<endl;
cout<<"*Bienvenido al JUEGO de la adivinanza!*"<<endl;
cout<<"***************************************"<<endl;

const int numero_secreto = 42;
int adivina;
int intentos = 0;
double puntos = 1000.0; //guarda los puntos ganados

bool no_acerto = true;

while(no_acerto){
	intentos++;
	cout <<"Tentativa "<< intentos << endl;
	cout<< "¿cual es el numero? ";
	cin>>adivina;
	double puntos_perdidos = abs(adivina - numero_secreto)/2.0;
	puntos = puntos - puntos_perdidos;
	cout<< "El valor del numero es: " <<adivina<<endl;

	bool acerto = adivina == numero_secreto;
	bool mayor = adivina > numero_secreto;

	if(acerto){
		cout << "Felicitaciones!!!...adivino el numero secreto" << endl;
		no_acerto = false;
		}
	else if(mayor){
		cout<< "El numero ingresado es mayor que el numero secreto" << endl;
		}
	else{
		cout << "El numero ingresado es menor que el numero secreto" << endl;
		}

	}
cout<<"Finalizo el juego"<<endl;
cout << "Adivino el numero secreto en "<< intentos << " intentos." << endl;
cout << "Su puntuacion fue de "<< puntos << " puntos."<< endl;
}
