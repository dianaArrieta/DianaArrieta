/*
ARRIETA JIMENEZ DIANA LAURA
PRACTICA 3
El tiempo  en la mayoria de los sietemas derivados de UNIX, se mide en segundos
transcurridos desde el 1 de enero de 1970, este dato no se ha cambiado desde
entonces, la sincronizacion de los servidores que mueven al mundo se basan en este contador
El problema es que esta variable tiene un limite, y cuando se alcance algo interesante sucedera
Hacer un programa que diga la fecha exacta de este suceso 
*/

#include<stdio.h>
//Biblioteca para el uso de fechas:
#include<time.h>
#include<limits.h>

void main()
{
	/*se declara una variable tipo time_t y se le asigna el numero mas grande 
	que se puede almacenar en un int de 32 bits con signo: 2147483647*/
	time_t FinalS = INT_MAX;

	/*se le manda a ctime() el apuntador a la variable que hemos creado y se
	asigna la cadena resultante a la variable Final*/
	char * Final = ctime(&FinalS);

	//Se imprime un mensaje junto con la fecha del final del mundo
	printf("El dia del final del mundo será: %s\n",Final);

	//NOTA: este problema ya fue resuelto, ahora se puede guardar casi un
	//entero de 64 bits.
}
