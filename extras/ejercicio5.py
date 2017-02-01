#!/usr/bin/env python3
#ARRIETA JIMENEZ DIANA LAURA
#Ejercicio5


from  optparse import OptionParser

alfabeto = 'abcdefghijklmnñopqrstuvwxyz'

parser = OptionParser(usage="%prog[options]")
parser.add_option('-k','--key', dest='k',help='indicar la llave de cifrado/descifrado', \
	metavar='KEY', default=3,type = 'int')

parser.add_option('-m','--message', dest='m',help='Escriba el texto ', \
	metavar='MESSAGE', default='hola',type = 'string')
                
parser.add_option('-e','--e', dest='e', help='0 para cifrar, 1 para descifrar', \
	metavar='E', default=0,type = 'int')

(option, args) = parser.parse_args()

texto = ''

option.m=option.m.lower()
if option.e==0:
	for i in range(len(option.m)):
		texto = texto + alfabeto[(alfabeto.index(option.m[i])+option.k%27)%27]
	print ("El texto cifrado es : " + texto)
elif option.e==1:
	for i in range(len(option.m)):
		texto = texto + alfabeto[(alfabeto.index(option.m[i])-option.k%27)%27]
	print("El texto descifrado es : " + texto)
else:
	print("Parametro no valido: 0 para cifrar, 1 para descifrar")

