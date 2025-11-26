/* 4) Cree una función para llenar 5 países.
- Cree otra función para registrar precios de vuelos a esos países.
- Cree una función autorPrograma() que muestre su nombre.
- Llame todas las funciones desde main(). */

#include <iostream>
#include <string>
using namespace std;
void llenar_paises(string paises[]){
	for(int i=0;i<4;i++){
		cout << "Ingrese el " << i + 1 << " pais:";
		cin >> paises[i];
	}
	cout << "Los paises ingresados son: " << endl;
	for(int i=0;i<4;i++){
		cout << paises[i] << endl;
	}
	
}
void registrar_precios(string paises[], float precios[]){
	for(int i=0;i<4;i++){
		cout << "Ingrese el precio de vuelo para: " << paises[i] << ":";
		cin >> precios[i];
	}
	cout << "Los precios de vuelo son: " << endl;
	for(int i=0;i<4;i++){
		cout << paises[i] << ": $" << precios[i] << endl;
	}
}
void autorPrograma(){
	cout << "-------- MATEO RODRIGUEZ --------";
}
int main(){
	string paises[5];
	float precios[5];
	llenar_paises(paises);
	registrar_precios(paises, precios);
	autorPrograma();
	return 0;
}



