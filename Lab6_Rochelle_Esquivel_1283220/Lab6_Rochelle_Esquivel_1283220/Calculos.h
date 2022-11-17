#pragma once
#include <iostream>
#include"Cuadrado.h"
#include"Triangulo.h"
#include"Rectangulo.h"
using namespace std;
struct figuras
{
	double lados, altura, base;

	double AreaTriangulo(double base, double altura)
	{
		return ((base * altura) / 2);
	}
	double PerimetroTriangulo(double lados)
	{
		return lados * 3;
	}
	double AreaRectangulo(double base, double altura)
	{
		return base * altura;
	}
	double PerimetroRectangulo(double lados)
	{
		return lados * 4;
	}
	double AreaCuadrado(double base, double altura)
	{
		return base * altura;
	}
	double PerimetroCuadrado(double lados)
	{
		return lados * 4;
	}
};

