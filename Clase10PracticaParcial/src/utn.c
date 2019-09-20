/*
 * utn.c
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

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
				if(scanf("%f",&buffer)==1)
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

int getString(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos)
{
	int retorno = -1;
	char buffer[4096];
	if(	pResultado != NULL &&
		pMensaje != NULL &&
		pMensajeError != NULL &&
		minimo <= maximo &&
		reintentos >= 0)
	{
		do
			{
				printf("%s",pMensaje);
				__fpurge(stdin);
				fgets(buffer,sizeof(buffer),stdin);
				buffer[strlen(buffer)-1] = '\0';
				if(strlen(buffer)>=minimo && strlen(buffer) <= maximo)
				{
					strncpy(pResultado,buffer,maximo+1);
					retorno = 0;
				 	break;
				}
				printf("%s",pMensajeError);
				reintentos--;
			}while(reintentos >= 0);
	}
	return retorno;
}

