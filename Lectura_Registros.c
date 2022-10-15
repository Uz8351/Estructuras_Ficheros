/*
Lectura_Registros.c
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int Contador;
	FILE *Descrip_Leer_Fichero;
	char Nombre_Fichero[20];
	struct Lectura_Registros
	{
		int hora;
		int minutos;
		int medida;

	}*Datos;
	
/*Reservamos memoria para Datos*/
	Datos=malloc(sizeof(struct Lectura_Registros));
	printf("Nombre del fichero a leer datos: \n");
	scanf("%s",Nombre_Fichero);
	Descrip_Leer_Fichero=fopen(Nombre_Fichero,"r");
	if (Descrip_Leer_Fichero==NULL)
	{
		printf("No existe el fichero \n");
		exit(EXIT_FAILURE);
	}
Contador=0;
fread(Datos,sizeof(struct Lectura_Registros),1,Descrip_Leer_Fichero);
while(!feof(Descrip_Leer_Fichero))
{
printf("hora: %i, minutos: %i medida=%i\n",Datos->hora,Datos->minutos,Datos->medida );
Contador++;
if (Contador==23)
{
	Contador=0;
	printf("Pulsa una tecla\n");
	getchar();
}
fread(Datos,sizeof(struct Lectura_Registros),1,Descrip_Leer_Fichero);

}
fclose(Descrip_Leer_Fichero);


	return 0;
}