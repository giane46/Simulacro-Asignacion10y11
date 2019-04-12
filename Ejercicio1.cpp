// ConsoleApplication30.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*Test1
Años de experiencia = 3
Lugar de nacimiento = F
Sueldo Total = 1112.40

Test2
Años de experiencia = 6
Lugar de nacimiento = L
Sueldo Total = 1264.80
*/
int main()
{
    //Entrada
	int aniosExp;
	char nacimiento;
	float sueldoBase;
	float sueldoTotal;
	
	cout << "Ingrese años de experiencia: ";
	cin >> aniosExp;

	cout << "Ingrese lugar de nacimiento: ";
	cin >> nacimiento;

	//Logica
	sueldoBase = '0';
	sueldoBase = (aniosExp <= 5 && aniosExp >= 1) ? (900.00 + (aniosExp / 100.00) * 900.00) : sueldoBase;
	sueldoBase =  (aniosExp > 5) ? (1000.00 + (aniosExp / 100.00) * 900.00) : sueldoBase;
	
	sueldoTotal = '0';
	sueldoTotal = (nacimiento = 'L') ? sueldoBase + 0.15*sueldoBase : sueldoTotal;
	sueldoTotal = (nacimiento = 'F') ? sueldoBase + 0.20*sueldoBase : sueldoTotal;

	//Salida
	cout << "El sueldo correspondiente es: " << sueldoTotal << endl;

	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
