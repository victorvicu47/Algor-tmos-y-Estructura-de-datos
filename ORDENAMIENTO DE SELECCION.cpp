#include <iostream>
#include <iomanip>//para usar el setw
using std::setw;
using namespace std;
 
	//Prototipos de función
	void ordenarArreglo(int * const , const int );
	void intercambiar( int * const , int * const );
	void imprimirArreglo( const int * const , const int );
 
	int main()
	{
		//Se inicializa el arreglo
		const int tamanioArreglo = 4;
		int a[ tamanioArreglo ] = {54, 2 , 46 , 7};
 
 
		//operaciones para ordenamiento e impresión
		ordenarArreglo( a, tamanioArreglo );
		imprimirArreglo(a, tamanioArreglo);
 
		return 0;
	}
 

	void ordenarArreglo(int * const arreglo, const int tamanio)
	{
		int minimo; 
		for(int i = 0; i < tamanio; i++ )
		{
			minimo = i; 
			for( int j = i + 1; j < tamanio; j++)
			{
				if( arreglo[j] < arreglo[minimo])
				minimo = j; 
 
			intercambiar( &arreglo[i] , &arreglo[minimo] ); 
 
			}
		}
 
 
 
	}
 
	void intercambiar( int * const aPtr, int * const bPtr)
	{
 
		int aux = *aPtr;
		*aPtr = *bPtr;
		*bPtr = aux;
	}
 
	void imprimirArreglo( const int * const a, const int tamanioArreglo)
	{
		for(int i = 0; i < tamanioArreglo; i++ )
			cout<<setw(5)<<a[i];
	}