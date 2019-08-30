//primero tengo que validar los parametros,lo2do es construir un if que nos deje saber si esta todo bien o mal
//variables intermedias tipo buffer,para que sirvan para identificar que son variables que se van a usar antes de
//validarlo,son variables descartables

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

#define EXIT_ERROR -1

int getInt(	int *resultado,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = EXIT_ERROR;
	int buffer;
	if(	resultado != NULL &&
		mensaje != NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
		{
			do
			{
				printf("%s",mensaje);
				__fpurge(stdin);
				if(scanf("%d",&buffer)==1)
				{
					if(buffer >= minimo && buffer <= maximo)
					{
						retorno = EXIT_SUCCESS;//o EXIT_SUCCES que equivale a 1
						*resultado = buffer;
						break;
					}
				}
				printf("%s",mensajeError);
				reintentos--;
			}while(reintentos >= 0);
		}

		return retorno;
}

int getFloat(	float *resultado,
				char *mensaje,
				char *mensajeError,
				float minimo,
				float maximo,
				int reintentos)
{
	int retorno = EXIT_ERROR;
	float buffer;
	if(	resultado != NULL &&
		mensaje != NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
		{
			do
			{
				printf("%s",mensaje);
				__fpurge(stdin);
				if(scanf("%2.f",&buffer)==1)
				{
					if(buffer >= minimo && buffer <= maximo)
					{
						retorno = EXIT_SUCCESS;//o EXIT_SUCCES que equivale a 1
						*resultado = buffer;
						break;
					}
				}
				printf("%s",mensajeError);
				reintentos--;
			}while(reintentos >= 0);
		}

		return retorno;
}

int getChar(	char *resultado,
				char *mensaje,
				char *mensajeError,
				char minimo,
				char maximo,
				int reintentos)
{
	int retorno = EXIT_ERROR;
	char buffer;
	if(	resultado != NULL &&
		mensaje != NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
		{
			do
			{
				printf("%s",mensaje);
				__fpurge(stdin);
				if(scanf("%c",&buffer)==1)
				{
					if(buffer >= minimo && buffer <= maximo)
					{
						retorno = EXIT_SUCCESS;//o EXIT_SUCCES que equivale a 1
						*resultado = buffer;
						break;
					}
				}
				printf("%s",mensajeError);
				reintentos--;
			}while(reintentos >= 0);
		}

		return retorno;
}
