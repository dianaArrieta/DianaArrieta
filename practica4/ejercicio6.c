//ARRIETA JIMENEZ DIANA LAURA
//EJERCICIO 6

//Realiza un programa que calcule área de ciertas figuras geométricas,
//solamente, triangulo, rectangulo, cuadrado, dependiendo de la seleccion
// del usuario, se pediran, base, algura o solo lado

#include<stdio.h>

int main()
{
	int k;
	float h,b;
	printf("Areas de figuras geometricas\n\tTriangulo-->1\n\tRectangulo-->2\n\tCuadrado-->3\nOpcion: ");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			printf("Triangulo\n\tBase:");
			scanf("%f",&b);
			printf("\tAltura:");
			scanf("%f",&h);
			printf("Area = %g \n",b*h/2);
			break;
		case 2:
			printf("Rectangulo\n\tBase:");
			scanf("%f",&b);
			printf("\tAltura:");
			scanf("%f",&h);
			printf("Area = %g \n",b*h);
			break;
		case 3:
			printf("Cuadrado\n\tLado:");
			scanf("%f",&b);
			printf("Area = %g\n",b*b);
			break;
		default:
			printf("Opcion no valida\n");
	}
}
