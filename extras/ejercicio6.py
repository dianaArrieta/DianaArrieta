#!/usr/bin/env python3
#ARRIETA JIMENEZ DIANA LAURA
#Ejercicio 6

#Se solicita ingresar un numero dentro del rango establecido
n=int(input("Ingresa un numero par entre 4 y 20:  "))

#Se verifica que el numero este dentro del rango y que sea par, si el numero no es par
#no tendra su correspondiente opuesto
if(n>=4 and n<=20 and n%2==0):
	#Se pide ingresar el numero del cual se quiere saber el opuesto
	m=int(input("Ingresa un numero entre 0 y " + str(n) + ":  "))
	#Se calcula el opuesto mediante una formula
	print("El opuesto es : " + str(int((m+n/2)%n))if m>=0 and m<n else "Numero fuera de rango")
else:
	print("Numero no valido (fuera de rango o impar)")
