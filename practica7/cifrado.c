//ARRIETA JIMENEZ DIANA LAURA
//PRACTICA 7
//CIFRADO

#include<stdio.h>

main()
{
	int cadena[]={'c','a','d','e','n','a'}; //cadena a cifrar
	int cifra[]={'4','8','b','5','a','3'}; //llave 
	int nuevo[7]; 		//arreglo que guardara el cifrado
	printf("CRIFRA\n");
	for(int a=0;a<sizeof(cadena)/sizeof(int);a++)
	{
		//guarda en nuevo el resultado de operar xor eclusivo
		//entre la llave y la cadena
		nuevo[a]=cadena[a]^cifra[a];
		printf("%c",nuevo[a]);
	}
	printf("\n\nDECIFRA\n");
	for(int a=0;a<sizeof(cadena)/sizeof(int);a++)
	{	
		//se imprime la operacion inversa entre la llave 
		//y el arreglo que guarda el cifrado
		printf("%c",nuevo[a]^cifra[a]);
	}
	printf("\n\n");
}
