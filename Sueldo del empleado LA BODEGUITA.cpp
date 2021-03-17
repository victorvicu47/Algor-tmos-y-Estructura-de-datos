#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cmath>

using namespace std;

class Salario {
private:
	float ventas;
	float sueldobase;
public:
	void obtener() ;
	float sueldototal () ;
	float sueldomensual();
	Salario ();
	~Salario();
};
Salario :: Salario () {
	
	
}

Salario :: ~Salario () {
	
	
	
}
void Salario :: obtener () {
	cout<<"Dame la suma total de las ventas"<<endl;
	cin>>ventas;
	cout<<"Dame el sueldo base"<<endl;
	cin>>sueldobase;
}
float Salario :: sueldototal() {
	float s;
	float b;
	float v;
	float y;
	float g;
	b = sueldobase * .04;
	v = ventas * b;
	y = sueldobase + v;
	g = y * .16;
	b = y - g;
	return s;
}
float Salario :: sueldomensual() {
	int dias;
	float res;
	cout<<"Ingrese los dias que tiene el mes en curso"<<endl;
	cin>>dias;
	res = dias * sueldototal();
	return res;
}
int main () {
	Salario per1;
	per1.obtener();
	cout<<"Este es el salario total de un dia:  "<<per1.sueldototal()<<endl;
	cout<<"Este es el salario mensual:  "<<per1.sueldomensual()<<endl;
	return 0;
}