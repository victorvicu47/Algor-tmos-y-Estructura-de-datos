#include <iostream>
#define max 5

using namespace std;

class Ordenamiento
{
private:
    int datos[max];
public:
    void llenado();
    void mostrar(string);
    void insercion();
    Ordenamiento();
    ~Ordenamiento();
};
//Constructor
Ordenamiento::Ordenamiento()
{

}
//Destructor
Ordenamiento::~Ordenamiento()
{

}
void Ordenamiento::llenado()
{
    int i, dato;
    for (i=0;i<=max;i++)
    {
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}
void Ordenamiento::mostrar(string _estado)
{
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<max;i++)
    {
        cout<<datos[i]<<", ";
    }
    cout<<datos[max]<<"}"<<endl;
}
void Ordenamiento::insercion()
{
    int i,pos,aux;
    for (i=0;i<=max;i++)
    {
        pos=i;
        aux = datos[i];
        while((pos>0)&&(datos[pos-1]>aux))
        {
            datos[pos]=datos[pos-1];
            pos--;
        }
        datos[pos]=aux;
    }
}
int main()
{
    Ordenamiento objeto1;
    objeto1.llenado();
    objeto1.mostrar("desordenados");
    objeto1.insercion();
    objeto1.mostrar("ordenados");
    return 0;
}