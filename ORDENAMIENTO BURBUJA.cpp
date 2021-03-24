#include <iostream> 
using namespace std;
#include <cstdlib>

int const DIM = 10;
typedef float tArray[DIM];

void rellenarArray(tArray);
void ordenarArray(tArray);
void mostrarArray(const tArray);

int main(){
	tArray miArray;
	
	rellenarArray(miArray);
	ordenarArray(miArray);
	mostrarArray(miArray);
	
	system("PAUSE");
	return 0;
}

void rellenarArray(tArray miArray){
	cout << "Introduzca los 10 elementos del array" << endl;
	
	for (int i = 0; i < DIM; i++){ 
		cin >> miArray[i];
	}
}

void ordenarArray(tArray miArray){
	float temporal;
	
	for (int i = 0;i < DIM; i++){
		for (int j = 0; j< DIM-1; j++){
			if (miArray[j] < miArray[j+1]){ 
			temporal = miArray[j]; 
			miArray[j] = miArray[j+1]; 
			miArray[j+1] = temporal;
			}
		}
	}
}

void mostrarArray(const tArray miArray){
	cout << "Mostrando array ordenado..." << endl;
	
	for (int i = 0; i < DIM; i++) // Imprime las 10 posiciones
		cout << miArray[i] << endl;
}	