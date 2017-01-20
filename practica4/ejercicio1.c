//ARRIETA JIMENEZ DIANA LAURA
//EJERCICIO1
//Realiza un programa que imprima los numeros de 0 a n, 
//n debe ser ingresado por el usuario

#include<stdio.h>

int main()
{
	int n=0,i;

	printf("Ingresa un numero : \n n =  ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		printf("%d , ", i);
	}
	printf("\n");
}
