/*1) Vector de 5 ciudades (datos quemados). Mostrar la ciudad del tercer registro.
Indicaciones:
- Cree un vector tipo string de tamaño 5.
- Asigne manualmente los nombres.
- Muestre el elemento índice 2.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	string ciudades[5] = {"Guayaquil", "Cuenca", "Quito", "Ambato", "Loja"};
	cout << ciudades[2];
	return 0;
}
