// 3 números enteros positivos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
   //Ehercicio 65
   //Escribir un programa que acepte 3 numeros enteros positivos X, Y y Z como datos  y calcular el numero
   //X! + Y! + Z!

	int N1, N2, N3;
	int i,j,k, factorialx=1, factorialy=1, factorialz=1, FactorialF;

	cout << "Ingresa el primer numero: ";
	cin >> N1;

	cout << "Ingresa el segundo numero: ";
	cin >> N2;

	cout << "Ingresa el tercer numero: ";
	cin >> N3;

	if (N1&&N2&&N3 >= 1 && N1&&N2&&N3 <= 20)
	{
		for (i = 1; i <= N1; i++)
			factorialx = factorialx * i;

		for (j = 1; j <= N2; j++)
			factorialy = factorialy * j;

		for (k = 1; k <= N3; k++)
			factorialz = factorialz * k;

		FactorialF = factorialx + factorialy + factorialz;

		cout << endl << "La suma factorial de los 3 numeros es: " << FactorialF << endl;

	}
	else 
	{
		printf("Por favor, escriba un numero entero positivo");
	}

	system("pause");
}

