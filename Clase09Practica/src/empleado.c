/*
 * empleado.c
 *
 *  Created on: 17 sep. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "empleado.h"

int ordenarArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad)
{
	int i;
	int retorno = -1;
	struct sEmpleado bEmpleado;
	int fSwap;
	if(aEmpleado != NULL && cantidad>0)
	{
		retorno = 0;
		do
		{
			fSwap = 0;
			for(i=0;i<cantidad-1;i++)
			{
				if(strncmp(aEmpleado[i].nombre,aEmpleado[i+1].nombre,QTY_CARACTERES)>0)
				{
					fSwap = 1;
					bEmpleado = aEmpleado[i];
					aEmpleado[i]=aEmpleado[i+1];
					aEmpleado[i+1]=bEmpleado;
				}
				else if(strncmp(aEmpleado[i].nombre,aEmpleado[i+1].nombre,QTY_CARACTERES)==0)
				{
					if(strncmp(aEmpleado[i].apellido,aEmpleado[i+1].apellido,QTY_CARACTERES)>0)
					{
						fSwap = 1;
						bEmpleado = aEmpleado[i];
						aEmpleado[i]=aEmpleado[i+1];
						aEmpleado[i+1]=bEmpleado;
					}
				}
			}
		}while(fSwap);
	}
	return retorno;
}

/** PARA PROBAR/HARDCODEAR
*
*/

int altaForzadaEmpleados(struct sEmpleado *aArray, int cantidad)
{
	int retorno = -1;
	int id[]={1,5,6,7,8};
	char nombre[][25]={"Juan","Pedro","Maria","Abraham","Eva"};
	char apellido[][25]={"Gomez","Perez","Lopez","Rodriguez","Peron"};

	int i;
	for(i=0;i<5;i++)
	{
		aArray[i].status = STATUS_NOT_EMPTY;
		aArray[i].idEmpleado = id[i];
		strncpy(aArray[i].nombre,nombre[i],25);
		strncpy(aArray[i].apellido,apellido[i],25);
		retorno = 0;
	}
	return retorno;
}

int imprimirArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad){
	int i;
	int retorno = -1;
	if(aEmpleado != NULL && cantidad>0)
	{
		retorno = 0;
		for(i=0;i<cantidad;i++)
		{
			if(aEmpleado[i].status == STATUS_NOT_EMPTY)
			{
				printf("-ID %d - Nombre: %s - Apellido: %s \n",aEmpleado[i].idEmpleado,aEmpleado[i].nombre,aEmpleado[i].apellido);
			}

		}
	}
	return retorno;
}
/**
 *
*/

int initLugarLibreEmpleado(struct sEmpleado *aArray, int cantidad)
{
	int i;//variable de control
	int retorno = -1;
	if(aArray != NULL && cantidad > 0)
	{

		for(i=0;i<cantidad;i++)
		{
			aArray[i].status = STATUS_EMPTY;

		}
		retorno = 0;
	}
	return retorno;
}

int buscarLugarLibreEmpleado(struct sEmpleado *aArray, int cantidad)
{
	int index = -1;
	int i;
	if(aArray != NULL && cantidad > 0)
	{

		for(i=0;i<cantidad;i++)
		{
			if(aArray[i].status == STATUS_EMPTY)
			{
				index = i;
				break;
			}
		}

	}
	return index;
}

int altaEmpleadoPorId(struct sEmpleado *aArray, int cantidad,struct sEmpleado empleado)
{
	int retorno = -1;
	int i = 0;
	if(aArray != NULL && cantidad > 0)
	{

		i = buscarLugarLibreEmpleado(aArray,cantidad);
		if(i>=0)
		{
			empleado.status = STATUS_NOT_EMPTY;
			aArray[i]=empleado;
			retorno = 0;
		}
		/*else
		{
			printf("No hay lugar disponible");
		}*/

	}
	return retorno;
}

int bajaEmpleadoPorId(struct sEmpleado *aArray, int cantidad,int id)//es igual que modificacion
{
	/*mostrar los empleados
	 * llama a buscar por id
	 * si existe,muestro y pregunto si estas seguro, ahi si cambio el estado
	 * si no existe, digo el retorno
	 */

	int retorno = -1;
	if(aArray != NULL && cantidad > 0)
	{

	}
	return retorno;
}

/*int buscarEmpleadoPorId(struct sEmpleado *aArray, int cantidad,int id)
{
	int retorno = -1;
	int i;
	if(aArray != NULL && cantidad >0)
	{
		for(i=0;i<cantidad;i++)
		{

		}
	}

	return retorno;
}*/

