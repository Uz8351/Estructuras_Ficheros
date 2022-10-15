
/*
Escritura_Registros.c
*/

#include<stdio.h>
#include<stdlib.h>
char Nombre_Txt_Entrada [30];
int Contador;
int main(int argc, char const *argv[])
{
	
	FILE *Descrip_Escritura_Fichero;
	
	char Nombre_Fichero[20];
	struct Escritura_Registros
	{
		int hora; 
		int minutos;
		int medida;

	}*Datos;


    /*Reservamos memoria para Datos*/
	Datos=malloc(sizeof(struct Escritura_Registros));
	printf("Nombre del fichero para escribir datos: \n");
	scanf("%s",Nombre_Fichero);
	Descrip_Escritura_Fichero=fopen(Nombre_Fichero,"a");
	printf("Hora de la medida (-1 acaba)\n");
	scanf("%i",&(Datos->hora));
	while(Datos->hora!=-1)
	{
     /*Leemos el resto de datos*/
		printf("Introduce los minutos\n");
        scanf("%i",&(Datos->minutos));
        printf("Introduce la medida\n");
        scanf("%i",&(Datos->medida));
fwrite(Datos,sizeof(struct Escritura_Registros),1,Descrip_Escritura_Fichero);
/*Leemos una nueva hora*/
printf("Hora de la medida ( Salir: -1 )\n");
scanf("%i",&(Datos->hora));
}
fclose(Descrip_Escritura_Fichero);

	}