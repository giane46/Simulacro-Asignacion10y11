Algoritmo Ejercicio3
	Escribir "Ingrese el peso"
	Leer peso
	Escribir "Ingrese la altura"
	Leer altura
	IMC<-peso/(altura^2)
	Si IMC<15 Entonces
		Escribir "Criterio de ingreso en hospital"
	SiNo
		Si IMC>15 & IMC<=20 Entonces
			Escribir "Bajo peso"
		SiNo
			Si IMC>20 & IMC<=30 Entonces
				Escribir "Peso normal (saludable)"
			SiNo
				Si IMC>30 & IMC<=40 Entonces
					Escribir "Sobrepeso (obesidad de grado I)"
				SiNo
					Escribir "Sobrepeso (obesidad de grado II)"
				Fin Si
			Fin Si
		Fin Si
	Fin Si
FinAlgoritmo
