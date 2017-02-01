#!/usr/bin/env python3

#ARRIETA JIMENEZ DIANA LAURA
#EJERCICIO2
#Dado un entero n de dos digitos, imprime la suma de sus digitos
#10<=n<=99

#Se importa modulo para comparar expresiones regulares con cadenas
from re import match
#Se solicita que ingrese el numero
n=input("Ingresa un numero entre 10 y 99: ")

#Si el numero es validado por la expresion regular realizara la suma de los digitos
#Si no, mandara un mensaje de error
if (match('^[1-9][0-9]$',n)):
	#Se puede ingresar a los valores de una cadena mediante su posicion
	#Despues se realiza el casteo, primero para pasar esos valores a enteros
	#Despues para pasar el resultado a cadena y concatenarlo con el mensaje
	print('La suma de sus digitos es: '+ str(int(n[0])+int(n[1])))
else:
	print('El numero debe estar entra 10 y 99')

