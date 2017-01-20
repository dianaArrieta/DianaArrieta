//ARRIETA JIMENEZ DIANA LAURA
//FACTORIAL

//Implementa de manera recursiva el calculo de factorial
//5! = 5x4x3x2..

#include<stdio.h>

int factorial(int);

int main()
{
	int a=5;
	printf("\nEl factorial de %d es %d\n\n",a,factorial(a));
}

int factorial(int i)
{
	if(i==1)
		return i;
	else 
		return i*factorial(i-1);
}
