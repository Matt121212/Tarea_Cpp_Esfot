/* 2) Vector de materias con tamaño ingresado por el usuario.
Indicaciones:
- Solicite el tamaño del vector.
- Llene con 5 materias del tercer semestre (ESFOT).
- Imprima todas las materias. */
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cout << "Ingrese el tamanio del vector: ";
	cin >> n;
	string materias[n] = {"Programacion orientada a objetos", "Disenio de interfaces", "Gestion de proyectos de software", "Base de datos", "Analisis de datos"};
	for(int i=0;i<n;i++){
		cout << materias[i] << endl;
	}
	return 0;
}
