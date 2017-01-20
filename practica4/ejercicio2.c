//ARRIETA JIMENEZ DIANA LAURA
//EJERCICIO2
//Realiza un programa que imprima los numeros nones de 1 a n, 
//n debe ser ingresado por el usuario

#include<stdio.h>

int main()
{
	int n=0,i;

	printf("Ingresa un numero : \n n =  ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(!(i%2==0))
			printf("%d , ", i);
	}
	printf("\n");
}
