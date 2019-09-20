/*
 * pantalla.c
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "pantalla.h"

#define QTY_PANTALLAS 100
#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

int ordenarArrayPantalla(struct sPantalla *aPantalla, int cantidad)
{
	int i;
	int retorno = -1;
	struct sPantalla bPantalla;
	int fSwap;
	if(aPantalla != NULL && cantidad>0)
	{
		retorno = 0;
		do
		{
			fSwap = 0;
			for(i=0;i<cantidad-1;i++)
			{
				if(strncmp(aPantalla[i].nombre,aPantalla[i+1].nombre,QTY_CARACTERES)>0)
				{
					fSwap = 1;
					bPantalla = aPantalla[i];
					aPantalla[i]=aPantalla[i+1];
					aPantalla[i+1]=bPantalla;
				}

			}
		}while(fSwap);
	}
	return retorno;
}

/** PARA PROBAR/HARDCODEAR
*
*/


int imprimirArrayPantalla(struct sPantalla *aPantalla, int cantidad)
{
	int i;
	int retorno = -1;
	if(aPantalla != NULL && cantidad>0)
	{
		retorno = 0;
		for(i=0;i<cantidad;i++)
		{
			if(aPantalla[i].status == STATUS_NOT_EMPTY)
			{
				printf("-ID %d -Nombre: %s -Tipo: %s -Direccion: %s -Precio: %.2f \n"
															,aPantalla[i].idPantalla,
															aPantalla[i].nombre,
															aPantalla[i].tipo,
															aPantalla[i].direccion,
															aPantalla[i].precio);
			}

		}
	}
	return retorno;
}


int initLugarLibrePantalla(struct sPantalla *aArray, int cantidad)
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

static int generarId(void)//declarando static la funcion solo lo llama desde el archivo
{
	static int nuevoId = 0;//se comporta como variable global pero es local
	nuevoId++;

	return nuevoId;

}

int buscarLugarLibrePantalla(struct sPantalla *aArray, int cantidad)
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

int altaPantallaPorId(struct sPantalla *aArray, int cantidad,struct sPantalla pantalla)
{
	int retorno = -1;
	int i = 0;
	if(aArray != NULL && cantidad > 0)
	{

		i = buscarLugarLibrePantalla(aArray,cantidad);
		if(i>=0)
		{
			pantalla.status = STATUS_NOT_EMPTY;
			aArray[i]=pantalla;
			aArray[i].idPantalla=generarId();
			retorno = 0;
		}
		/*else
		{
			printf("No hay lugar disponible");
		}*/

	}
	return retorno;
}

int bajaPantallaPorId(struct sPantalla *aArray, int cantidad,int id)//es igual que modificacion
{
	/*mostrar los empleados
	 * llama a buscar por id
	 * si existe,muestro y pregunto si estas seguro, ahi si cambio el estado
	 * si no existe, digo el retorno
	 */
	int retorno = -1;
	int i=0;
	if(aArray != NULL && cantidad > 0)
	{
		imprimirArrayPantalla(aArray,QTY_PANTALLAS);
		aArray[i].idPantalla = getInt(id,"Indique el ID a borrar: ","ERROR",0,QTY_PANTALLAS,3);
		if(buscarPantallaPorId(aArray,QTY_PANTALLAS,id)!= STATUS_NOT_EMPTY)
		{
			printf("Desea borrar este item? Ingrese s o n \n");
			getchar();
			if(getchar() =='s')
			{
				aArray[i].status = STATUS_EMPTY;
				retorno = 0;
			}
		}

	}
	return retorno;
}

int buscarPantallaPorId(Pantalla *aArray, int cantidad,int id)
{
	int retorno = -1;
	int i;
	if(aArray != NULL && cantidad >0)
	{
		for(i=0;i<cantidad;i++)
		{
			if(aArray[i].status == STATUS_NOT_EMPTY)
			{
				if(aArray[i].idPantalla==id)
				{
					retorno = i; //devuelvo la posicion
					break;
				}

			}

		}
	}
	return retorno;
}

