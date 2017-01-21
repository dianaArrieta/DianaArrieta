/*
ARRIETA JIMENEZ DIANA LAURA
PRACTICA 13
Con el preprocesador, hacer que C pueda interpretar el codigo
*/

#include<stdio.h>

//Con el uso de  #define se remplazaran las coincidencias de una palabra 
//por sintaxis de c, con esto se esta haciendo codigo ofuscado
#define INTEGER int
#define END }
#define BEGIN int main(){ 
#define THEN {
#define ELSE }else{
#define PRINT printf
#define ENDIF }
#define IF if

BEGIN

INTEGER x = 10;
IF(x>=10)
THEN
	PRINT("TENGO DIEZ\n");
ELSE
	PRINT("REPROBARE\n");
ENDIF
END
