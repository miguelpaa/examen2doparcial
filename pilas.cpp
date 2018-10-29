#include <iostream>
#include<conio.h>
using namespace std;

struct Nodo{
int dato;
Nodo *siguiente;
};

//prototipo de funcion
void agregarpila(Nodo *&, int);
void sacarpila(Nodo *&, int &);

int main(){
    Nodo *pila=NULL;
    int dato;
    do{
        cout << "dame un numero(si quieres dejar de introducir numeros escribe -1): ";
        cin >> dato;
        if(dato!=-1)
        {
            agregarpila(pila,dato);
        }
    }while(dato!=-1);
    cout << "\nSacando todos los elementos de pila: ";
    while(pila != NULL)
    {
        sacarpila(pila,dato);
        if(pila!=NULL){
            cout << dato << " , ";
        }
        else{
            cout << dato << ".";
        }
    }
    cout << "\n(El -1 no se imprime pues no es un elelemto de la pila)";

return 0;
};

void agregarpila(Nodo *&pila, int n)
{
    Nodo *nuevonodo=new Nodo();
    nuevonodo->dato=n;
    nuevonodo->siguiente=pila;
    pila=nuevonodo;
    cout << "\tElemento " << n << " agregado correctamente" << endl;
}

void sacarpila(Nodo *&pila, int &n){
    Nodo *aux=pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
