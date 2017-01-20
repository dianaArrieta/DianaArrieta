//ARRIETA JIMENEZ DIANA LAURA
//Ejercicio3
//Realiza un programa que imprima los primeros n numeros primos, 
//n debe ser ingresado por el usuario

#include<stdio.h>

int main()
{
	int n=0,i,j=0,a=0;

	printf("Ingresa un numero : \n n =  ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				a=1;
				break;
			}
		}
		if(a==0)
			printf("%d , ", i);
		a=0;
	}
	printf("\n");
}
