//ARRIETA JIMENEZ DIANA LAURA
//PRACTICA 8
/*
Hacer un programa pequeño utilizando user_defined.c, para crear una base
de datos de becarios de la onceava generacion, minimo 8 de tus compañeros
Redirige la salida a un archivo de  texto
*/

#include<stdio.h>
#include<string.h>
struct becario{
	char nombre[12];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1; //campo de bit.. cuantos bits va a usar
};
int main()
{
	//Se declara un arreglo tipo becario
	int i;
	struct becario bec[8];
	//se introducen los valores a cada elemento del arreglo
	strcpy(bec[1].nombre,"Jorge"); //A donde vas a copiar la cadena, y la cadena
	strcpy(bec[2].nombre,"Fernando"); 
	strcpy(bec[3].nombre,"Yeudiel"); 
	strcpy(bec[4].nombre,"Luis"); 
	strcpy(bec[5].nombre,"Ivan"); 
	strcpy(bec[6].nombre,"Jonathan"); 
	strcpy(bec[7].nombre,"Armando"); 
	strcpy(bec[0].nombre,"Cristian");
	bec[1].edad=22;
	bec[2].edad=22;
	bec[3].edad=27;
	bec[4].edad=22;
	bec[5].edad=25;
	bec[6].edad=23;
	bec[7].edad=24;
	bec[0].edad=23;
	strcpy(bec[1].procedencia,"FIngenieria"); //A donde vas a copiar la cadena, y la cad$
        strcpy(bec[2].procedencia,"Fingenieria"); 
        strcpy(bec[3].procedencia,"FAC"); 
        strcpy(bec[4].procedencia,"FIngenieria"); 
        strcpy(bec[5].procedencia,"FIngenieria"); 
        strcpy(bec[6].procedencia,"FIngenieria"); 
        strcpy(bec[7].procedencia,"FIngenieria"); 
        strcpy(bec[0].procedencia,"FES Aragon");
	bec[1].generacion=11;
        bec[2].generacion=11;
        bec[3].generacion=11;
        bec[4].generacion=11;
        bec[5].generacion=11;
        bec[6].generacion=11;
        bec[7].generacion=11;
        bec[0].generacion=11;
	bec[1].proyecto=1;
	bec[2].proyecto=1;
	bec[3].proyecto=1;
	bec[4].proyecto=1;
	bec[5].proyecto=1;
	bec[6].proyecto=1;
	bec[7].proyecto=1;
	bec[0].proyecto=1;

	//Imprimir con un ciclo cada uno de los elementos del arreglo
	for(i=0;i<8;i++)
	{
		printf("\n\nNombre:\t%s\nEdad:\t%d\nProcedencia: %s\nGeneracion:\t%d\n",bec[i].nombre,bec[i].edad,bec[i].procedencia,bec[i].generacion);
		printf((bec[i].proyecto&1)?"Proyecto:\tSI\n":"SIN PROYECTO\n");
	}
}
