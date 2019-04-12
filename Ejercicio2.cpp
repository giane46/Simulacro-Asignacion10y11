// ConsoleApplication29.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Entrada
	string codBarras;
	string dia, mes, anio, codigoASCII;
	char tipoProducto;
	bool perecible;

	//Logica
	cout << "Ingrese codigo de barras: ";
	cin >> codBarras;

	dia = codBarras.substr(0, 2);
	mes = codBarras.substr(2, 2);
	anio = codBarras.substr(4, 4);
	codigoASCII = codBarras.substr(8, 2);

	tipoProducto = char(stoi(codigoASCII));
	perecible = (codBarras.substr(10, 2) == "00");

	//Salida
	cout << "Día de vencimiento: " << dia << endl;
	cout << "Mes de vencimiento: " << mes << endl;
	cout << "Año de vencimiento: " << anio << endl;
	cout << "El tipo de producto es: " << tipoProducto << endl;
	cout << "Producto perecible(0: No; 1: Si): " << perecible << endl;

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
