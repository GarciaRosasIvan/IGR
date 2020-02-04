// Valor absoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
    //Ejercicio 60
	//imprimir el valor absoluto de -6, 0, 25, -143, -42

	int V1=-6, V2 = 0, V3 = 25, V4 = -143, V5 = -42;
	int absoluto1, absoluto2, absoluto3, absoluto4, absoluto5;

	absoluto1 = abs(V1);
	absoluto2 = abs(V2);
	absoluto3 = abs(V3);
	absoluto4 = abs(V4);
	absoluto5 = abs(V5);

	cout << endl << "El valor absoluto de los siguientes valores -6, 0, 25, -143, -42 es:" << endl;

	cout << endl << "Valor 1: " << absoluto1 << endl;
	cout << endl << "Valor 2: " << absoluto2 << endl;
	cout << endl << "Valor 3: " << absoluto3 << endl;
	cout << endl << "Valor 4: " << absoluto4 << endl;
	cout << endl << "Valor 5: " << absoluto5 << endl;

	system("pause");
}

