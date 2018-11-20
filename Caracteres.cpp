#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
//estructura
struct Nodo{
	char dato;
	Nodo *izquierda,*derecha;
};
//fin de estructura

//funciones
Nodo *crear_nodo(char);
void insertarNodo(Nodo *&,char);
Nodo *raiz=NULL;
void mostrarArbol(Nodo *,int);
void menu();
//fin de funciones 
//
int main(int argc, char * const argv[]){
	//codigo del programa
    menu();
	
	//fin
	return 0;
}
//
void menu(){
	int opcion,cont=0;
	char dato;
	do{
		
		cout<<"\n 1.-Insertar datos\n";
		cout<<"\n 2.-Mostrar datos\n";
		cout<<"\n 3.-Salir\n";
		cin>>opcion;
		switch(opcion){
			case 1:{
				cout<<"inserte el dato\n";
				cin>>dato;
				insertarNodo(raiz,dato);
				system("pause");
				break;
			    }
				case 2:{
				cout<<"mostrando arbol completo \n\n";
				mostrarArbol(raiz,cont);
				system("pause");
				break;
				}
		}
		system("cls");
	}while(opcion !=3);
}

Nodo *crear_nodo(char n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->izquierda=NULL;
	nuevo_nodo->derecha=NULL;
	
	return nuevo_nodo;
}

void insertarNodo(Nodo *&raiz,char n){
	if(raiz==NULL){
		Nodo *nuevo_nodo=crear_nodo(n);
		raiz=nuevo_nodo;
	}else{
		char valorRaiz=raiz->dato;
		if(n==valorRaiz){
			cout<<"el elemento ya existe"<<endl;
		}
		else if(n<valorRaiz){
			insertarNodo(raiz->izquierda,n);
		}else{
			insertarNodo(raiz->derecha,n);
		}
	}
	
}
void mostrarArbol(Nodo *raiz,int cont){
	if(raiz==NULL){
		return;
	}else{
		mostrarArbol(raiz->derecha,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<raiz->dato<<endl;
		mostrarArbol(raiz->izquierda,cont+1);
	}
	
}
