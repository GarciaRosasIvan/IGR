// Encontrar la media.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
    //Ejercicio 62
	//Encontrar la media de los siguientes 10 numeros 75, 88, 84, 70, 65, 99, 91, 76, 43, 69.
	//El programa los sumara y dividira  el resultado entre 10 para para obtener la media aritmetica 
	//o promedio de los numeros

	int M1 = 75, M2 = 88, M3 = 84, M4 = 70, M5 = 65, M6 = 99, M7 = 91, M8 = 76, M9 = 43, M10 = 69;
	double MediaF;

	MediaF = (M1 + M2 + M3 + M4 + M5 + M6 + M7 + M8 + M9 + M10)/10;



	cout << endl << "La media es: " << MediaF << endl;
	system("pause");
}


