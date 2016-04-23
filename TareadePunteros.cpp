//============================================================================
// Nombre      : Punteros.cpp
// Auhor       : Martín
// Carrera     :Ingenieria en Sistemas
// Universidad : Universidad Mariano Galvez de Guatemala
// Descripcion : Direccion de memoria de estructuras
//============================================================================

#include <iostream>
using namespace std;

struct Tarea{	//se declara la estructura
	int Puntaje;	//declaramos una variable de tipo entero
	string Nombre;	//Variable tipo string 
} T1, T2, *puntero; //aqui se declara las variables de tipo Tarea que vamos a usar y un puntero para averiguar la direccion de memoria de la estructura

int main() {
	cout<<"Bienvenido"<<endl<<endl;			//Se imprime en pantalla los mensajes que declaramos
	cout<<"Escriba el nombre de su tarea"<<endl;
	cin>>T1.Nombre;		//Capturamos el valor de la variable tipo Tarea que usa la variable "nombre" de tipo string
	cout<<"Escriba el puntaje que recibio por su tarea"<<endl;
	cin>>T2.Puntaje;		//Capturamos el valor de la variable tipo Tarea que usa la variable "puntaje" de tipo entero
	cout<<"El nombre de su tarea es: "<<T1.Nombre<<endl;	//imprimimos en pantalla la variable
	cout<<"El puntaje de su tarea es: "<<T2.Puntaje<<endl;
	
	puntero = &T1; //hacemos uso de el puntero, indicando que sera igual a la direccion de memoria de la variable
	cout<<"La direccion de memoria de su nombre es: "<<puntero<<endl; 	//Imprimimos en pantalla la direccion de memoria
	cout<<"El nombre de su tarea sigue siendo: "<<puntero->Nombre<<endl;
	puntero = &T2;
	cout<<"La direccion de memoria de su puntaje es: "<<puntero<<endl;
	cout<<"Su puntaje sigue siendo: "<<puntero->Puntaje<<endl;
	
	
	return 0;
}

