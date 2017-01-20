//ARRIETA JIMENEZ DIANA LAURA
//Realiza un programa de autenticacion, es decir que acepte un "password",
//de ser correcto, imprimir "OK" de lo contrario imprmir, "GTFOH!"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char pass[]="hola123.,";
	char autenpass[10];

	printf("Ingresa contraseña:\n password: ");
	scanf("%s",&autenpass);
	if(!strcmp(pass,autenpass))
		printf("OK\n\n");
	else
		printf("GTFOH!\n\n");
}
