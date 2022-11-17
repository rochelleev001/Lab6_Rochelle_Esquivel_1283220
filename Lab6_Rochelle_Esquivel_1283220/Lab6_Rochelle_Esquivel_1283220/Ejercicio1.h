#pragma once
#include "MyForm.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

ref class Ejercicio1
{

private:
	int^ tam_Arreglo = 0;
public:
	int^ obtener_Tamaño();
	void Ejercicio1::ordenar_Num(int Mat[], int inicio, int final);
	void Ejercicio1::mostrar_Num(int Mat[], int tam_Arreglo, int i);
	void Ejercicio1::bus_Binaria(int Mat[], int dato, char band);
};