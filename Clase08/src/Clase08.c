/*
 ============================================================================
 Name        : Clase08.c
 Author      : Brian Pavon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Hacer un programa con el siguiente menu:
   1) ingresar nuevo nombre (no acepta nombres repetidos)
   2) listar todo
   3) ordenar por nombre
   4) Borrar nombre. Se ingresa el nombre y si se encuentra se elimina de la lista
	El programa permitira ingresar hasta 100 nombres.
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define QTY_EMPLEADOS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50
#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

struct sEmpleado
{
	int idEmpleado;
	int status;
	//***************
	char nombre[50];
	char apellido[50];
};


int imprimirArrayString(char aNombres[][QTY_CARACTERES], int cantidad);
int ordenarArrayString(char aNombres[][QTY_CARACTERES], int cantidad);
int imprimirArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad);
int ordenarArrayEmpleados(struct sEmpleado *aEmpleados, int cantidad);


int main(void)
{
		struct sEmpleado aEmpleados[1000];
		struct sEmpleado bEmpleado;
		int i;
		int idEmpleado = 0;

		for(i=0;i<3;i++)
		{

			getString(bEmpleado.nombre,"Ingrese el nombre",
					"ERROR", 1, 49, 2);

			getString(bEmpleado.apellido,"Ingrese el apellido",
							"ERROR", 1, 49, 2);

			bEmpleado.idEmpleado = idEmpleado;
			idEmpleado++;
			bEmpleado.status = STATUS_NOT_EMPTY;

			aEmpleados[i] = bEmpleado;
		}
		imprimirArrayEmpleados(aEmpleados,3);
		ordenarArrayEmpleados(aEmpleados,3);
		imprimirArrayEmpleados(aEmpleados,3);
		return EXIT_SUCCESS;
}

int imprimirArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad)
{
	int i;
	int retorno = -1;
	if(aEmpleado != NULL && cantidad>0)
	{
		retorno = 0;
		for(i=0;i<cantidad;i++)
		{
			printf("Id: %d - Nombre: %s - Apellido: %s \n",aEmpleado[i].idEmpleado,aEmpleado[i].nombre,aEmpleado[i].apellido);
		}
	}
	return retorno;
}

int imprimirArrayString(char aNombres[][QTY_CARACTERES], int cantidad)
{
	int i;
	int retorno = -1;
	if(aNombres != NULL && cantidad>0)//SE PREGUNTA !=NULL para ver si hay algo en la direccion de memoria,se usa con punteros y array
	{
		retorno = 0;
		for(i=0;i<cantidad;i++){
			printf("Nombre: %s \n",aNombres[i]);
		}
	}
	return retorno;
}

int ordenarArrayString(char aNombres[][QTY_CARACTERES], int cantidad){
	int i;
	int retorno = -1;
	char buffer[QTY_CARACTERES];
	int fSwap;
	if(aNombres != NULL && cantidad>0)
	{
		retorno = 0;
		do
		{
			fSwap = 0;
			for(i=0;i<cantidad-1;i++)
			{
				if(strncmp(aNombres[i],aNombres[i+1],QTY_CARACTERES)>0)
				{
					fSwap = 1;
					strncpy(buffer,aNombres[i],QTY_CARACTERES);
					strncpy(aNombres[i],aNombres[i+1],QTY_CARACTERES);
					strncpy(aNombres[i+1],buffer,QTY_CARACTERES);
				}
			}
		}while(fSwap);
	}
	return retorno;
}

int ordenarArrayEmpleados(struct sEmpleado *aEmpleados, int cantidad)
{
	int i;
	int retorno = -1;
	struct sEmpleado buffer;
	int fSwap;
	if(aEmpleados != NULL && cantidad>0)
	{
		retorno = 0;
		do
		{
			fSwap = 0;
			for(i=0;i<cantidad-1;i++)
			{
				if(strncmp(aEmpleados[i].nombre,aEmpleados[i+1].nombre,QTY_CARACTERES)>0)
				{
					fSwap = 1;
					buffer=aEmpleados[i];
					aEmpleados[i]=aEmpleados[i+1];
					aEmpleados[i+1]=buffer;
				}
				else if(strncmp(aEmpleados[i].nombre,aEmpleados[i+1].nombre,QTY_CARACTERES)==0)
				{
					if(strncmp(aEmpleados[i].apellido,aEmpleados[i+1].apellido,QTY_CARACTERES)>0)
					{
						fSwap = 1;
						buffer=aEmpleados[i];
						aEmpleados[i]=aEmpleados[i+1];
						aEmpleados[i+1]=buffer;
					}

				}

			}
		}while(fSwap);
	}
	return retorno;
}


