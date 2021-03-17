#include <iostream>
#include <cstdlib>
#include <math.h>
 
using namespace std;
 
void pausa();
 
int main()
{
    bool bandera=false;
    char tecla;
    double co,ca,hip,h;
    do
    {
        cin.clear();
        cout << "Calcular Área,Perímetro e Hipotenusa" << endl;
        cout << "-----------" << endl << endl;
        cout << "\t1 .- Area" << endl;
        cout << "\t2 .- Perimetro" << endl;
        cout << "\t3 .- Hipotenusa" << endl;
        cout << "Elije una opcion: ";
 
        cin >> tecla;
 
		switch(tecla)
		{
			case '1':
				cout << "Calcular Area.\n";
                                 cout<<"Ingresa altura"<<endl;
                                 cin>>h;
                                 cout<<"Ingresa el valor del cateto opuesto"<<endl;
                                 cin>>co;
                                 double area;
                                 area=co*h/2;
                                 cout<<area;
				break;
 
			case '2':
				cout << "Calcular perimetro.\n";
				cout<<"Ingresa el cateto opuesto"<<endl;
                                 cin>>co;
                                 cout<<"Ingresa el cateto adyacente"<<endl;
                                 cin>>ca;
                                 cout<<"Ingresa la hipotenusa"<<endl;
                                 cin>>hip;
                                 double perimetro;
                                 perimetro=co+ca+hip;
                                 cout<<perimetro;
				break;
                        case '3':
				cout << "Calcular hipotenusa.\n";
				cout<<"Ingresa el cateto opuesto"<<endl;
                                 cin>>co;
                                 cout<<"Ingresa el cateto adyacente"<<endl;
                                 cin>>ca;
                                 double hipotenusa;
                                 pow(co, 2);
                                 pow(ca, 2);
                                 hipotenusa = co+ca;
                                 ca=sqrt(co);
                                 co=sqrt(ca);
                                 cout<<hipotenusa;
				break;
		}
    }while(bandera!=true);
 
    return 0;
}
 
void pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}
   