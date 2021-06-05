#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

class CDatoEQ{
public:
    int dato;
    int NumDatos;
    CDatoEQ *derecha;
    CDatoEQ *izquierda;
    CDatoEQ *PrimerDato;
public:
    CDatoEQ (int e);
    void ImprimirDatos();
    void EliminarDatos();
    void InsertarDatos();
    void InsertarDatoF(int e);
    void EliminarDatoInicio();
    void EliminarDatofinal();
    void ImprimirIzqDer();
    void ImprimirDerIzq();
    CDatoEQ(); 
    ~CDatoEQ();
};

CDatoEQ::CDatoEQ(){
    dato=0;
    NumDatos=0;
    derecha=NULL;
    izquierda=NULL;
    PrimerDato=NULL;
 };
CDatoEQ::~CDatoEQ(){
    
 };
 CDatoEQ::CDatoEQ(int e){
    dato=e;
    derecha=NULL;
    izquierda=NULL;
    };
void CDatoEQ::ImprimirDatos(){
    cout<<dato<<"-";
};
void CDatoEQ::EliminarDatos(){
    delete this;
};

void CDatoEQ::InsertarDatos(){
    int opc = 1;
    int e;
    while (opc == 1){
        cout<<"De el dato a insertar a la lista: ";
        cin>>e;
        InsertarDatoF(e);
        cout<<"Quieres insertar otro dato? Si=1 ";
        cin>>opc;
        }
};


void CDatoEQ::InsertarDatoF(int e){
    CDatoEQ *temp = PrimerDato;
    CDatoEQ *nuevo= new CDatoEQ(e);
    if(PrimerDato==NULL){
        PrimerDato=nuevo;
        NumDatos=1;
        } else{
        while(temp->derecha!=NULL){
            temp=temp->derecha;
            }
        temp->derecha=nuevo;
        nuevo->izquierda=temp;
        NumDatos=NumDatos +1;
         }
};
void CDatoEQ::EliminarDatoInicio(){
    if(PrimerDato){
       CDatoEQ *temp=PrimerDato;
       CDatoEQ *tempaux=temp->derecha;
        if((temp->derecha==NULL)&&(temp->izquierda==NULL)){
            cout<<"Elemento eliminado: ";
            PrimerDato->ImprimirDatos();
            PrimerDato=NULL;
            NumDatos=0;
        }
        else{
        cout<<"Elemento eliminado: ";
            PrimerDato->ImprimirDatos();
            PrimerDato->EliminarDatos();
            PrimerDato=tempaux;
            PrimerDato->izquierda=NULL;
            NumDatos--;
        }
    }else{
        cout<<"No hay elementos en la lista"<<endl;
    }
};
    void CDatoEQ::EliminarDatofinal(){
        CDatoEQ *actual= new CDatoEQ();
        CDatoEQ *anterior= new CDatoEQ();
        actual=PrimerDato;
        anterior=actual;
        if(PrimerDato==NULL){
            cout<<"No hay nodos en la lista"<<endl;
            } else {
            while(actual->derecha!=NULL){
                anterior=actual;
                actual=actual->derecha;
            }
            cout<<"Elemento eliminado: ";
            actual->ImprimirDatos();
            anterior->derecha=NULL;
            actual->EliminarDatos();
            NumDatos--;

            if(NumDatos==0){
            cout<<"Elemento eliminado: ";
            PrimerDato->ImprimirDatos();
            PrimerDato=NULL;
            }
        }
};
    void CDatoEQ::ImprimirIzqDer(){
        CDatoEQ *temp=PrimerDato;
        if(PrimerDato==NULL){
            cout<<"No hay datos en la lista"<<endl;
        } else {
            cout<<"Los datos de la lista, de izquierda a derecha son: "<<endl;
            while(temp->derecha!=NULL){
                temp->ImprimirDatos();
                temp=temp->derecha;
            }
            temp->ImprimirDatos();
        }

}
    void CDatoEQ::ImprimirDerIzq(){
    CDatoEQ *temp=PrimerDato;
    if(PrimerDato==NULL){
        cout<<"No hay datos en la lista"<<endl;
    }else{
        while(temp->derecha!=NULL){
            temp=temp->derecha;
        }
            cout<<"Los datos de la lista, de derecha a izquierda son: "<<endl;
            while(temp->izquierda!=NULL){
                temp->ImprimirDatos();
                temp=temp->izquierda;
            }
            temp->ImprimirDatos();
        }

};
  
int main(int argc, char** argv) {
CDatoEQ obj1;
int oper=0;
int e;
cout<<"Bienvenido al programa de lista doblemente enlazada"<<endl;
do{
    cout<<"\nQue desea hacer?"<<endl;
    cout<<"Para insertar uno o varios elementos, presione..............................1"<<endl;
    cout<<"Para eliminar el elemento al inicio, presione...............................2"<<endl;
    cout<<"Para eliminar el elemento al final, presione................................3"<<endl;
    cout<<"Para imprimir los datos de izquierda a derecha, presione....................4"<<endl;
    cout<<"Para imprimir los datos de derecha a izquierda, presione....................5"<<endl;
    cout<<"Para salir del menu, presione...............................................6"<<endl;
    cin>>oper;

    switch(oper){
case 1:
    obj1.InsertarDatos();
    break;
case 2:
    obj1.EliminarDatoInicio();
    break;
case 3:
    obj1.EliminarDatofinal();
    break;
case 4:
    obj1.ImprimirIzqDer();
    break;
case 5:
    obj1.ImprimirDerIzq();
    break;
default:
    break;
};
}while(oper!=6);
return 0;
}
