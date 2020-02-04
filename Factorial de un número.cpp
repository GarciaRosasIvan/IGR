// Factorial de un número.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	//Ejercicio numero 64
	int n, i;
	long double factorial; // se declara long double para poder representar números grandes
	cout << "Introduce un numero entero entre el 1 y el 7: ";
	cin >> n;
	factorial = 1;
	for (i = 1; i <= n; i++)
		factorial = factorial * i;
	cout << endl << "Factorial de " << n << " -> " << factorial << endl;
	system("pause");
}

