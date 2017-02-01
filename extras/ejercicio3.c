/*
ARRIETA JIMENEZ DIANA LAURA
EJERCICIO3
Crear un programa que genere "passwords seguros"
El programa no debe recibir ninguna entrada por parte del usuario
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int i;
	//printf("Cuantos caracteres desea que tenga su contraseña: ");
	//scanf("%d",&total);
	//Se ocupa srand para pasarle a rand la hora actual del sistema
	//Que como siempre va a ser distinta nos ayuda en la alateoreidad
	srand(time(NULL));
	printf("Su contrasena: ");
	//La contraseña que se gerara sera de 10  caracteres
	//por eso se hace un for de 0 a 9
	for(i=0;i<10;i++)
		//se imprime en caracter el numero assci que resulta de la operacion
		//rand()%94 nos devuelve un numero de 0 a 93, que al sumarlos con 33
		//nos regresa aleatoriamente un caracter visible
		printf("%c",33+(rand()%94));
	printf("\n");

}
