#include <iostream>
#define max 5

using namespace std;

class BusquedaOrdenada
{
private:
    int datos[max];
public:
    void secuencial(int);
    void llenado();
    void mostrar(string);
    void seccion();
    BusquedaOrdenada();
    ~BusquedaOrdenada();
};
//Constructor
BusquedaOrdenada::BusquedaOrdenada()
{

}
//Destructor
BusquedaOrdenada::~BusquedaOrdenada()
{

}

void BusquedaOrdenada::secuencial(int dato){
    int i;
    char flag = 'F';
    i = 0;
    while ((flag=='F')&&(i<5)){
        if (datos[i]==dato) flag='V';
        i++;
    }
    if (flag=='F') cout<<"El dato: "<<dato<<" no existe en el arreglo";
    else cout<<"El dato: "<<dato<<" se encuentra en la posicion ["<<i-1<<"] del arreglo";
}

void BusquedaOrdenada::llenado(){
    int i, dato;
    for (i=0;i<max;i++){
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}

void BusquedaOrdenada::mostrar(string _estado){
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son: {";
    for(i=0;i<max-1;i++){
        cout<<datos[i]<<", ";
    }
    cout<<datos[max-1]<<"}"<<endl;
}

void BusquedaOrdenada::seccion(){
    int min, aux;
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

int main()
{
    BusquedaOrdenada objeto1;
    int numero, op=0;
    objeto1.llenado();
    while(op!=3){
        cout<<"\n\nIngrese \n 1.- Si quiere buscar un valor en el arreglo desordenado\n 2.- Si quiere buscar un valor en el arreglo ordenado \n 3.- Para salir\n";
        cin>>op;

        switch (op)
        {
        case 1:
            objeto1.mostrar("Desordenados");
            cout<<"Â¿Que dato deseas buscar?\n";
            cin>>numero;
            objeto1.secuencial(numero);
        break;
        
        case 2:
            objeto1.seccion();
            objeto1.mostrar("Ordenados");
            cout<<"Â¿Que dato deseas buscar?\n";
            cin>>numero;
            objeto1.secuencial(numero);
        break;

        default: if(op==3) cout<<"HASTA A LA PRÓXIMA\n";
                else cout<<"La opcion introducida no es valida, vuelve a intentarlo\n";
            break;
        }
    }
    
    return 0;
}
