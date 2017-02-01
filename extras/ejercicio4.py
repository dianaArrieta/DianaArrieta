#!/usr/bin/python

#ARRIETA JIMENEZ DIANA LAURA
#EJERCICIO4
#Dado un entero n, imprimir el entero maximo posible que contenga dicha cantidad de digitos
#Restricciones: 1<=n<=8
#Ejemplo: input:3 output:999

#Se pide el numero y se guarda en una variable
num1=input("Ingresa un numero entre  1 y 8:  ")
#se declara una variable vacia para ir concatenando el numero de 9 que debe tener el numero mas grande
mayor = ' '
#verificar el nummero este entre 1 y 8
if(num1<=8 and num1>=1 ):
	#con un for se ira concatenando 9 a la variable mayor 
	for n in range(num1):
		mayor = mayor + '9'
	#se imprime el numero
	print("El numero mas grande posible es " + mayor )
else:
	print("El numero debe estar entre 1 y 8")
