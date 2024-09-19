#include <iostream>
using namespace std;
int main(){

cout<<"**************************************"<<endl;

cout<<"*Bienvenido al JUEGO de la adivinanza!*"<<endl;
cout<<"***************************************"<<endl;

int numero_secreto = 42;
cout<<"el numero secreto es..."<<numero_secreto<<". No lo digas a nadie!"<<endl;

int adivina;
cin>>adivina;
cout<<"El valor de su numero es: "<<adivina<<endl;

if(adivina == numero_secreto){
	cout << "Felicitaciones!!...adivinó el numero secreto" <<endl;
	}
else if(adivina > numero_secreto){
	cout<< "El numero ingresado es mayor que el numero secreto"<<endl;
	}
else{
	cout<<"El numero ingresado es menor que el numero secreto"<<endl;
	}

}
