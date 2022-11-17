#include "Ejercicio1.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int^ Ejercicio1::obtener_Tamaño() {
    return tam_Arreglo;
}
void Ejercicio1::mostrar_Num(int Mat[],int tam_Arreglo, int i) {
	for (i = 0; i < tam_Arreglo; i++)
	{
		Mat[i] = 1 + rand() % tam_Arreglo;
		cout << Mat[i] << "";
		cout << endl;
	}
}
//obtenido de: https://codemyn.blogspot.com/2019/08/metodos-de-ordenamiento-quicksort-en-c.html
void Ejercicio1::ordenar_Num(int Mat[], int inicio, int final) {
    int medio, i, j;
    double pivote;
    medio = (inicio + final) / 2;
    pivote = Mat[medio];
    i = inicio;
    j = inicio;
    do
    {
        while (Mat[i] < pivote) i++;
        while (Mat[j] > pivote) j--;
        if (i <= j)
        {
            double temp;
            temp = Mat[i];
            Mat[i] = Mat[j]; 
            Mat[j] = temp;
            i++;
            j--;
        }
    }

    while (i <= j);
    if (inicio < j)
        ordenar_Num(Mat, inicio, j); 
    if (i < final)
        ordenar_Num(Mat, i, final); 
}
void Ejercicio1::bus_Binaria(int Mat[], int dato, char band) {
    int inf = 0;
    int sup = 10;
    ordenar_Num(Mat, 0, 10 - 1);
    mostrar_Num(Mat, 10);
}