// Calcular promedio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
    //Ejercicio 61
	//Calcular el promedio de las siguientes calificaciones 95, 68, 92 y 88
	int C1=95, C2=68, C3=92, C4=88;

	long double Prom = (C1 + C2 + C3 + C4)/4;
	cout << endl << "El promedio de nancy es: " << Prom << endl;
	system("pause");
	
}

