//Miguel Angel Padilla Arroyo
#include <iostream>
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<time.h>
#include <iomanip>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;

};
int valorRaiz,salto;
Nodo *arbol =NULL;
void menu();
int p1,p2,p3,p4,p5;
Nodo *crearNodo(int);
int posicion=0;
int maxx,minimo;
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *, int,int);
void mostrarArbol2(Nodo *, int);

void niveles(Nodo *,int);
int n=100, az=0,bz=0,cz=0,dz=0,ez=0,fz=0;
int main()
{   
    cout<<"\n\t\tExamen 2do parcial \n";
    fflush(stdin);
    int variable;
    int numero;
    cout<<"\t\tVolados de unas modena, el aguila representa el numero 1 y sol el numero 0\n";
    srand(time (NULL));

    insertarNodo(arbol,100 );
    fflush(stdin);
    for (int i=1; i<=100; i++)
    {
        numero=0+rand()%2;
        cout<<numero<<"  ";
        if (numero== 0)
        {
            az++;

        }
        else if (numero == 1)
        {
            bz++;
        }

    }
    if(az>bz)
    {
        maxx=az;
        minimo=bz;
        az=0;
        bz=0;
    }
    else if(bz>az)
    {
        maxx=bz;
        minimo=az;
        az=0;
        bz=0;
    }
    valorRaiz= 50;
    insertarNodo(arbol,minimo);
    valorRaiz= 50;
    insertarNodo(arbol,maxx);
    cout<<"\n\n";
    int maxx2=maxx;
    system("pause");
    p1=minimo;
    p2=maxx;
    fflush(stdin);
    for (int i=1; i<=minimo; i++)
    {
        numero=0+rand()%2;
        cout<<numero<<"  ";
        if (numero== 0)
        {
            az++;

        }
        else if (numero == 1)
        {
            bz++;
        }

    }

    if(az>bz)
    {
        maxx=az;
        minimo=bz;
        az=0;
        bz=0;
    }
    else if(bz>az)
    {
        maxx=bz;
        minimo=az;
        az=0;
        bz=0;
    }
    p1=minimo;
    p2=maxx;
    valorRaiz= 25;
    insertarNodo(arbol,minimo);
    valorRaiz= 25;
    insertarNodo(arbol,maxx);
    cout<<"\n\n";
    system("pause");
    fflush(stdin);
    for (int i=1; i<=maxx2; i++)
    {
        numero=0+rand()%2;
        cout<<numero<<"  ";
        if (numero== 0)
        {
            az++;

        }
        else if (numero == 1)
        {
            bz++;
        }

    }
    if(az>bz)
    {
        maxx=az;
        minimo=bz;
        az=0;
        bz=0;
    }
    else if(bz>az)
    {
        maxx=bz;
        minimo=az;
        az=0;
        bz=0;
    }
    p3=maxx;
    p4=minimo;
    valorRaiz= 25;
    insertarNodo(arbol,minimo);
    valorRaiz= 25;
    insertarNodo(arbol,maxx);
    cout<<"\n\n";
    system("pause");

    fflush(stdin);
    for (int i=1; i<=p1; i++)
    {
        numero=0+rand()%2;
        cout<<numero<<"  ";
        if (numero== 0)
        {
            az++;

        }
        else if (numero == 1)
        {
            bz++;
        }

    }
    fflush(stdin);
    if(az>bz)
    {
        maxx=az;
        minimo=bz;
        az=0;
        bz=0;
    }
    else if(bz>az)
    {
        maxx=bz;
        minimo=az;
        az=0;
        bz=0;
    }
    valorRaiz= 13;
    insertarNodo(arbol,minimo);
    valorRaiz= 13;
    insertarNodo(arbol,maxx);
    cout<<"\n\n";
    system("pause");
    for (int i=1; i<=p2; i++)
    {
        numero=0+rand()%2;
        cout<<numero<<"  ";
        if (numero== 0)
        {
            az++;

        }
        else if (numero == 1)
        {
            bz++;
        }

    }
    fflush(stdin);
    if(az>bz)
    {
        maxx=az;
        minimo=bz;
        az=0;
        bz=0;
    }
    else if(bz>az)
    {
        maxx=bz;
        minimo=az;
        az=0;
        bz=0;
    }
    valorRaiz= 13;
    insertarNodo(arbol,minimo);
    valorRaiz= 13;
    insertarNodo(arbol,maxx);
    cout<<"\n\n";
    system("pause");
    fflush(stdin);
    for (int i=1; i<=p3; i++)
    {
        numero=0+rand()%2;
        cout<<numero<<"  ";
        if (numero== 0)
        {
            az++;

        }
        else if (numero == 1)
        {
            bz++;
        }

    }
    fflush(stdin);
    if(az>bz)
    {
        maxx=az;
        minimo=bz;
        az=0;
        bz=0;
    }
    else if(bz>az)
    {
        maxx=bz;
        minimo=az;
        az=0;
        bz=0;
    }
    valorRaiz= 13;
    insertarNodo(arbol,minimo);
    valorRaiz= 13;
    insertarNodo(arbol,maxx);
    cout<<"\n\n";
    system("pause");
    fflush(stdin);
    for (int i=1; i<=p4; i++)
    {
        numero=0+rand()%2;
        cout<<numero<<"  ";
        if (numero== 0)
        {
            az++;

        }
        else if (numero == 1)
        {
            bz++;
        }

    }
    fflush(stdin);
    if(az>bz)
    {
        maxx=az;
        minimo=bz;
        az=0;
        bz=0;
    }
    else if(bz>az)
    {
        maxx=bz;
        minimo=az;
        az=0;
        bz=0;
    }
    valorRaiz= 13;
    insertarNodo(arbol,minimo);
    valorRaiz= 13;
    insertarNodo(arbol,maxx);
    cout<<"\n\n";
    system("pause");
    fflush(stdin);
    menu();
    getch();
    return 0;
}
Nodo *crearNodo(int n)
{

    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;

}

void insertarNodo(Nodo *&arbol, int n)
{
    fflush(stdin);
    if(arbol==NULL)
    {
        Nodo *nuevo_nodo =crearNodo(n);
        arbol=nuevo_nodo;
    }
    else
    {

        if(n< valorRaiz)
        {
            insertarNodo(arbol->izq,n);
        }
        else
        {
            insertarNodo(arbol->der,n);
        }


    }


}

void niveles(Nodo *arbol, int cont)
{
    if(arbol==NULL)
    {
        return;
    }
    else
    {
        niveles(arbol->der, cont+1);
        if(posicion<cont)
        {
            posicion=cont;
        }
        niveles(arbol->izq, cont+1);
    }
}

void menu()
{
    int  opcion, contador=1;
    int masdatos,dato;
    do
    {
        cout<<"\tMenu"<<endl;
        cout<<"\n Mostrar arbol [opcion 1]\n Salir opcion 2, digite la opcion"<<endl;
        cin>>opcion;
        switch(opcion)
        {

        case 1:
system("cls");
fflush(stdin);
            cout << "\nArbol de lanzaminetos:\n\n";
            niveles(arbol,contador);

            for(int i=1; i<posicion+1; i++)
            {
                mostrarArbol(arbol,contador, i);

                if(i==1 ||i==2||i==4 )
                {
                    cout << " total 100 ";
                    cout << endl;
                }



            }
            cout << " >total 100 ";
            cout << endl;

            break;



        }
        cout<<"\n\n\n\n";
        system("pause");
        system("cls");
    }
    while (opcion !=2);

}


void mostrarArbol(Nodo *arbol, int cont, int posicionactual)
{
    if(arbol==NULL)
    {
        return;
    }
    else
    {
        mostrarArbol(arbol->izq, cont+1, posicionactual);
        if(cont==posicionactual)
        {
            fflush(stdin);
            if (arbol->izq)
            {
                cout<<"A";
            }
            else if (arbol->der)
            {
                cout<<"S";
            }


            cout << arbol->dato;
        }
        else
        {
            cout << "°°";
        }
        mostrarArbol(arbol->der, cont+1, posicionactual);
    }
}


