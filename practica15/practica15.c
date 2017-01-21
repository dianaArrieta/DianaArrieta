
/*
ARRIETA JIMENEZ DIANA LAURA
PRACTICA15
Utiliza tu practica de la base de datos de becarios, cuya salida redirigias
q un archivo, pero ahora crea una base de datos real
*/


#include<sqlite3.h>
#include<stdio.h>

int main(void)
{
	sqlite3 *db;
	char *err_msg = 0;

	int rc = sqlite3_open("base.db",&db);

	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"Cannot open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);

		return 1;
	}

	char *sql = 	"DROP TABLE IF EXISTS becarios;"
			"CREATE TABLE becarios(ID INT, Nombre TEXT, Edad INT, procedencia TEXT, generacion INT, proyecto TEXT);"
			"INSERT INTO becarios VALUES(1,'Cristian',23,'FES Aragon',11,'SI');"
			"INSERT INTO becarios VALUES(2,'Jorge',22,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(3,'Fernando',22,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(4,'Yeudiel',27,'FAC',11,'SI');"
			"INSERT INTO becarios VALUES(5,'Luis',22,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(6,'Ivan',25,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(7,'Jonathan',23,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(8,'Armando',23,'FI',11,'SI');";


	rc = sqlite3_exec(db,sql,0,0,&err_msg);

	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error: %s\n",err_msg);
		sqlite3_free(err_msg);
		sqlite3_close(db);

		return 1;

	}
	sqlite3_close(db);

	return 0 ;

}
