// ConsoleApplication34.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Entrada
	string codigo;
	string numero, codigoASCII1, codigoASCII2, diaVenc, mesVenc, anioVenc;
	string paisProc1;
	string paisProc2;
	char fragil;
	char vencido;
	string fechaHoy;
	string diaHoy, mesHoy, anioHoy;

	//Logica
	cout << "Ingrese el codigo: ";
	getline(cin, codigo);

	cout << "Ingrese la fecha de hoy: ";
	getline(cin, fechaHoy);

	numero = codigo.substr(0, 3);
	fragil = codigo.substr(3, 1) == "0";
	codigoASCII1 = codigo.substr(4, 2);
	codigoASCII2 = codigo.substr(6, 2);
	diaVenc = codigo.substr(8, 2);
	mesVenc = codigo.substr(10, 2);
	anioVenc = codigo.substr(12, 4);

	diaHoy = codigo.substr(0, 2);
	mesHoy = codigo.substr(2, 2);
	anioHoy = codigo.substr(4, 4);

	paisProc1 = char(stoi(codigoASCII1));
	paisProc2 = char(stoi(codigoASCII2));

	fragil = (fragil == 0)*'S' + (fragil != 0)*'N';

	diaHoy = codigo.substr(0, 2);
	mesHoy = codigo.substr(2, 2);
	anioHoy = codigo.substr(4, 4);

	vencido = (anioHoy > anioVenc) * 'S' + (anioHoy == anioVenc && mesHoy > mesVenc) * 'S' + (anioHoy == anioVenc && mesHoy == mesVenc && diaHoy > diaVenc) * 'S';
	vencido = (anioHoy < anioVenc) * 'N' + (anioHoy == anioVenc && mesHoy < mesVenc) * 'N' + (anioHoy == anioVenc && mesHoy = mesVenc && diaHoy < diaVenc) * 'N';

	//Salida
	cout << "Numero unico: " << numero << endl;
	cout << "Fragil (N:No, S:Si): " << fragil << endl;
	cout << "Pais de procedencia: " << paisProc1 << paisProc2 << endl;
	cout << "Dia, mes y año de vencimiento: " << diaVenc << "-" << mesVenc << "-" << anioVenc << endl;
	cout << "Bien se encuentra vencido al dia de hoy (N:No, S:Si): " << vencido << endl;

	system("pause");
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
