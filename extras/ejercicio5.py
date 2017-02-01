#!/usr/bin/env python3
#ARRIETA JIMENEZ DIANA LAURA
#Ejercicio5

#Ejemplo de jecutar: ./ejercicio5.py -k 1 -m hola -e 0

#Este modulo nos ayuda a pasar parametros cuando se ejecuta el programa
from  optparse import OptionParser

#Esta variable contendra todas las letras del abecedario
alfabeto = 'abcdefghijklmnñopqrstuvwxyz'

#Se declara la variable que contendra los parametros 
parser = OptionParser(usage="%prog[options]")
#La sintaxis tiene dos formas  de poner un parametro, y en help ponemos una descripcion de lo que debe llevar
#tambien se puede asignar un valor por default en caso de no poner parametro 
#El default de la llave en caso de que no se ponga es 3 
parser.add_option('-k','--key', dest='k',help='indicar la llave de cifrado/descifrado', \
	metavar='KEY', default=3,type = 'int')
#El default del mensaje en caso de que no se ponga es hola
parser.add_option('-m','--message', dest='m',help='Escriba el texto ', \
	metavar='MESSAGE', default='hola',type = 'string')
#Por default cifrara, en caso de que no se especifique                
parser.add_option('-e','--e', dest='e', help='0 para cifrar, 1 para descifrar', \
	metavar='E', default=0,type = 'int')

(option, args) = parser.parse_args()

#Esta variable irá concatenando las letras que se cifren
texto = ''

#En caso de que el mensaje venga en mayusculas se pasará todo a minusculas
option.m=option.m.lower()
#Si la opcion es 0 cifrara
if option.e==0:
	#Con un for se recorrerán los caracteres del mensaje 
	for i in range(len(option.m)):
		#alfabeto.index nos regresa la posicion de la letra que le pasemos(la del mensaje)
		#mas el modulo de la llave por si se pasa de 27,de esa suma tambien obtenemos el modulo
		#esto por si el numero es mayor que la longitud de la variable que guarda las letras del abecedario
		#el resultado sera la posicion de la letra que queremos obtener
		texto = texto + alfabeto[(alfabeto.index(option.m[i])+option.k%27)%27]
	print ("El texto cifrado es : " + texto)
#Si la opcion es 1 descifrara
elif option.e==1:
	for i in range(len(option.m)):
		#Se hace lo mismo que en cifrado pero en vez de una suma es una resta
		texto = texto + alfabeto[(alfabeto.index(option.m[i])-option.k%27)%27]
	print("El texto descifrado es : " + texto)
#Si no es ninguna de las opciones anteriores mandara un mensaje y no hará nada
else:
	print("Parametro no valido: 0 para cifrar, 1 para descifrar")

