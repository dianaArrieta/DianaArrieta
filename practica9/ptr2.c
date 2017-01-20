//ARRIETA JIMENEZ DIANA LAURA
//PRACTICA 9

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
	if(argc<2)
	{
		fprintf(stderr,"Se necesita un argumento!");
		exit(1349);
	}
	printf("%d\n",atoi(argv[argc-1]));
}
