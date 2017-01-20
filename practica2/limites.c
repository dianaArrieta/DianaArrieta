//Arrieta Jimenez Diana Laura
//Practica2 limites

#include<stdio.h> //header(preprocesador)
#include<limits.h>

char *cadena="Hola, Mundo\n "; //Variables globales
int main() //Funcion main()
{
	printf("%s",cadena);//cuerpo de la funcio main()
	printf("Minimo entero : %d \n",INT_MIN);
	printf("Maximo entero : %d \n",INT_MAX);
	printf("Minimo char   : %d \n",CHAR_MIN);
	printf("Maximo char   : %d \n",CHAR_MAX);
	printf("Minimo long int : %ld \n",LONG_MIN);
	printf("Maximo long int : %ld \n",LONG_MAX);
	printf("Minimo short int : %d \n",SHRT_MIN);
	printf("Maximo short int : %d \n",SHRT_MAX);
	printf("Minimo signed char : %d \n",SCHAR_MIN);
	printf("Maximo signed char: %d \n",SCHAR_MAX);
}
