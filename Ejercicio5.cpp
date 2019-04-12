// ConsoleApplication35.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int puntajeSueldo(int sueldo) {
	int puntosSueldo = (sueldo < 1500) * 6 + (sueldo >= 1500 && sueldo <= 6000) * 12 + (sueldo > 6000) * 18;
	return puntosSueldo;
}

int puntajeVivienda(char tipoVivienda) {
	int puntosVivienda = (tipoVivienda == 'P') * 2 + (tipoVivienda == 'A') * 5 + (tipoVivienda == 'M') * 10;
	return puntosVivienda;
}

int puntajeTarjeta(char tarjeta) {
	int puntosTarjeta = (tarjeta == 'N') * 0 + (tarjeta == 'S') * 6;
	return puntosTarjeta;
}

int puntajeCFamiliar(char cargaFamiliar) {
	int puntosCFamiliar = (cargaFamiliar == 'S') * 6 + (cargaFamiliar == 'N') * 3;
	return puntosCFamiliar;
}

int main()
{
	//Entrada
	int sueldo;
	char tipoVivienda, tarjeta, cargaFamiliar;
	int puntosSueldo, puntosVivienda, puntosTarjeta, puntosCFamiliar;
	bool prestamo;
	int puntajeTotal;

	//Logica
	cout << "Ingrese su sueldo: ";
	cin >> sueldo;

	cout << "Ingrese su tipo de vivienda(P: Pariente, A: Alquilada, M: Propia): ";
	cin >> tipoVivienda;

	cout << "Tiene tarjeta de credito(S: Si tiene, N: No tiene): ";
	cin >> tarjeta;

	cout << "Tienes carga familiar(S: Si tiene, N: No tiene): ";
	cin >> cargaFamiliar;

	puntosSueldo = puntajeSueldo(sueldo);
	puntosVivienda = puntajeVivienda(tipoVivienda);
	puntosTarjeta = puntajeTarjeta(tarjeta);
	puntosCFamiliar = puntajeCFamiliar(cargaFamiliar);

	puntajeTotal = puntosSueldo + puntosVivienda + puntosTarjeta + puntosCFamiliar;
	prestamo = (puntajeTotal > 20);

	cout << "Puntaje obtenido: " << puntajeTotal << endl;
	cout << "Se le otorga el prestamo (0: No, Si: i): " << prestamo << endl;

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
