#!/usr/bin/python3
#ARRIETA JIMENEZ DIANA LAURA
#PRACTICA0

for n in range(1,31):
	if (n % 15 == 0):
		n= 'fizzbuzz'
		print (n)
		continue
	if (n % 3 == 0 ):
		n = 'fizz'
		print (n)
		continue
	if (n % 5 == 0):
		n= 'buzz'
		print (n)
		continue
	
	print (n)


