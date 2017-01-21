#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
ARRIETA JIMENEZ DIANA LAURA
PRACTICA 12
Cambia el programa static.c para que todas las variables "vivan" en el "heap" o que al menos todo se trate
como variable de tipo "apuntador"
Si no se puede hacer lo anterior, solo reduce el codigo
*/

int main()
{
	//Se declara un apuntador tipo char y se le reserva memoria para 
	//alamcenar un char y se le indica el numero de elementos que se almacenaran
	//Se hace un casteo a char y se le asigna al apuntador declarado
	char *c=(char *)calloc(sizeof(char),60);
	//mediante el uso de la biblioteca string.h se le pasara una cadena a c
	strcpy(c,"hola\0");
	//el apuntador c acutua como un arreglo, para imprimir se hace uso
	//de un for, con la variable i se ira incrementando, 
	//mientras este no sea el fin de la cadena \0 imprimira cada letra
	for(int i=0;i<10;i++)
	{
		if(c[i]=='\0')
			break;
		printf("%c\n",c[i]);
	}
	free(c);
}
