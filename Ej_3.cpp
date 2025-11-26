/* 3) Vector de 4 equipos de fútbol y sus puntajes.
Indicaciones:
- Cree dos vectores: equipos y puntajes.
- Llene los datos por teclado.
- Muestre qué equipo tuvo el puntaje más alto. */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string equipos[4];   
    int puntajes[4];     
    int maxPuntaje = -1; 
    int indiceMax = -1;  
    
    for(int i=0;i<4;i++){
		cout << "Ingrese el nombre del equipo: " << i + 1 << ": ";
		cin >> equipos[i];
		cout << "Ingrese el puntaje del equipo " << equipos[i] << ": ";
		cin >> puntajes[i];	
	}
	for(int i=0;i<4;i++){
		cout << equipos[i]<< " : ";
		cout << puntajes[i] << endl;
	}
	for (int i = 0; i < 4; i++) {
	    if (puntajes[i] > maxPuntaje) {
	        maxPuntaje = puntajes[i];
	        indiceMax = i;
	    }
	}
	
	  
	cout << "\nEl equipo con el puntaje más alto es: " << equipos[indiceMax] 
	<< " con un puntaje de " << maxPuntaje << "." << endl;
	return 0;
}

