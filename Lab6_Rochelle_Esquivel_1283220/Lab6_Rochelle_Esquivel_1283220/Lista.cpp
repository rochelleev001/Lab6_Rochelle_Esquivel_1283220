#include "Lista.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

int^ Lista::obtener_ID() {
	srand(time(NULL));
	ID = rand()%1000;
	return ID;
}

String^ Lista::obtener_Poligono() {
	return tipo;
}

int^ Lista::obtener_Area() {
	return area;
}
int^ Lista::obtener_Perimetro() {
	return perimetro;
}
String^ Lista::obtener_Color() {
	return color;
}
void Lista::insertarLista(Nodo*& lista, int n) {
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	Nodo* aux1 = lista;
	Nodo* aux2;
	while ((aux1 != NULL) && (aux1->dato < n)) {
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	if (lista == aux1) {
		lista = nuevo_nodo;
	}
	else {
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
}