/*
ARRIETA JIMENEZ DIANA LAURA
PRACTICA 17(opcional)
Crear un cliente que se comunique con el "servidor" creado en clase
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include<unistd.h>
#include<sys/types.h>
#include<netdb.h>


#define PORT 5430	// puerto de conexion

int main(int argc, char *argv[]) {
	int sockfd;  // descriptores de archivo
	struct sockaddr_in server_addr;	// Informacion de las direcciones IP
	struct hostent *serv;
	int yes=1;
	char buffer[1024];

	if ((sockfd = socket(PF_INET, SOCK_STREAM, 0)) == -1)
		perror("Error al crear el socket");

	if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1)
		perror("Error al agregar la opcion SO_REUSEADDR en setsockopt");
	memset((char *) &serv,0,sizeof(struct sockaddr_in));
	server_addr.sin_family = AF_INET; //AF_INET es el dominio
	server_addr.sin_port = htons((u_short) PORT);//Se especifa el puerto al que nos vamos a conectar
	serv=gethostbyname("localhost"); //funcion para extraer informacion del servidor
	memcpy(&server_addr.sin_addr, serv->h_addr, serv->h_length); //se copia al inromacion estraida a server_addr

	//Con connect() nos conectamos al servidor
	connect(sockfd,(struct sockaddr *)&server_addr, sizeof(struct sockaddr_in));
	
	//write y send sirven para enviar sockets
	write(1,buffer,recv(sockfd,buffer,sizeof(buffer),0));

	while(1)     // Accept loop
	{
		//con fgets leemos de teclado y lo almacenamos en la variable buffer
		fgets(buffer,1024,stdin);
		printf("Cliente: %s\n",buffer);
		send(sockfd,buffer,strlen(buffer),0);

	}
	return 0;
}
