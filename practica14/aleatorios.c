/*
ARRIETA JIMENEZ DIANA LAURA
PRACTICA14. NUMEROS ALEATORIOS
Generar numeros aleatorios
*/
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

main(int argc, char *argv[])
{
#if 0
	if(argc<2)
	{
		perror("Se necesita un argumento\n");
		return(1111);
	}
#endif

	int fd;
	int datos;
	char *archivo="/dev/random\0";
	fd=open(archivo,O_RDONLY);
	if(fd==-1)
		fprintf(stderr,"No se pudo abrir el archivo");

	if(read(fd,datos,sizeof(int))==-1)
		printf("\n%d\n",datos);

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el archivo");
}
