#include <iostream>
#include <cstdlib>
 
using namespace std;
 
void pausa();
 
int main()
{
    bool bandera=false;
    char tecla;
    double b,h;
    do
    {
        cin.clear();
        cout << "Calcular area y perimetro" << endl;
        cout << "-----------" << endl << endl;
        cout << "\t1 .- Area" << endl;
        cout << "\t2 .- Perimetro" << endl;
        cout << "Elije una opcion: ";
 
        cin >> tecla;
 
		switch(tecla)
		{
			case '1':
				cout << "Calcular Area.\n";
                                 cout<<"Ingresa altura"<<endl;
                                 cin>>h;
                                 cout<<"Ingresa la base"<<endl;
                                 cin>>b;
                                 double area;
                                 area=b*h/2;
                                 cout<<area;
				break;
 
			case '2':
				cout << "Calcular perimetro.\n";
				cout<<"Ingresa la base"<<endl;
                                 cin>>b;
                                 double perimetro;
                                 perimetro=b+b+b;
                                 cout<<perimetro;
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
   