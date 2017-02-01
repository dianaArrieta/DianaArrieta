#!/usr/bin/python3
#ARRIETA JIMENEZ DIANA LAURA
#EJERCICIO1
#Crea un programa que calcule n + m por linea de comandos
#Validar que solo funcione con enteros

#Modulo que se utiliza para comparar expresiones regulares
from re import match

#Se piden dos numeros de teclado
num1=input("Ingresa primer numero:  ");
num2=input("Ingresa segundo numero: ");

#Se hace un if para verificar que las entradas solo contengan numeros enteros
#Si ambas condiciones se cumplen hara la suma
if(match('^[0-9]+$',num1) and match('^[0-9]+$',num2)):
	#Como se esta concatenando cadenas, se tiene que hacer casteos
	#primero casteo de cadena a enteros para que realice la suma
	#Y luego casteo de enteros a cadena para hacer la concatenacion
	print("El resultado de la suma es: " + str(int(num1)+int(num2)))
else:
	print("Alguno o ambos numeros no son enteros")



