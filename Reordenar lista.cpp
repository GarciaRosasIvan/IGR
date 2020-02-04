// Reordenar lista.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	//Ejercicio 63
    //Reordenar una lista de 20 enteros intercambiando los primeros 10 con los ultimos 10

	int vector[20];
	int tam, i, j, aux;

	cout << "Ingrese el tamano del vector: ";
	cin >> tam;

	for (i = 0; i < tam; i++) 
	{
		cout << "X[" << (i + 1) << "]= ";
		cin >> vector[i];
	}

	for (i = 0; i < tam; i++) 
	{
		for(j=i+1;j<tam;j++)
		{
			//Esto es para ordenar de mayor a menos
			//En caso de querer lo conrario se cambia el signo < por >
			if (vector[i] < vector[j]) 
			{
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;

		   }
		}
	}

	cout << "\nVector ordenado de mayor a menor: ";

	for (i = 0; i < tam; i++) 
	{
		cout << vector[i] << ",";
	}

	system("pause");
	 
}

