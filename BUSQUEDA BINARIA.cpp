#include <iostream>
#define max 5

using namespace std;

class BusquedaBinaria{
    private: 
        int datos[max];
    public:
        void binaria(int);
        void llenado();
        void mostrar();
        void seccion();
        BusquedaBinaria();
        ~BusquedaBinaria();
};
//Constructor
BusquedaBinaria::BusquedaBinaria()
{

}
//Destructor
BusquedaBinaria::~BusquedaBinaria()
{

}
void BusquedaBinaria::binaria(int dato){
    int inf=0, sup=max, mitad;
    char flag= 'F';
    while(inf<=sup){
        mitad=(inf+sup)/2;
        if(datos[mitad]==dato){
            flag='V';
            break;
        }
        if(datos[mitad]>dato){
            sup=mitad;
            mitad=(inf+sup)/2;
        }
        if(datos[mitad]<dato){
            inf=mitad;
            mitad=(inf+sup)/2;
        }
    }
    if (flag=='F'){
        cout<<"El dato: "<<dato<<" no existe en el arreglo";
    }
    else{
        cout<<"El dato: "<<dato<<" se encuentra en la posicion ["<<mitad<<"] del arreglo";
    }
}

void BusquedaBinaria::llenado(){
    int i, dato;
    for(i=0;i<max;i++){
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}

void BusquedaBinaria::mostrar(){
    int i;
    cout<<"Los valores del arreglo son: {";
    for(i=0;i<max-1;i++){
        cout<<datos[i]<<", ";
    }
    cout<<datos[max-1]<<"}\n";
}

void BusquedaBinaria::seccion(){
    int min, aux;
    cout<<"El arreglo primero sera ordenado para poder buscar el dato...\n";
    for(int i=0;i<max;i++){
        min=i;
        for(int j=i+1;j<5;j++){
            if(datos[j]<datos[min]) min=j;
        }
        aux=datos[i];
        datos[i]=datos[min];
        datos[min]=aux;
    }
}

int main(){
    BusquedaBinaria objeto1;
    int numero;
    objeto1.llenado();
    objeto1.mostrar();
    objeto1.seccion();
    objeto1.mostrar();
    cout<<"Â¿Que dato deseas buscar?\n";
    cin>>numero;
    objeto1.binaria(numero);
    return 0;
}

