/*
 ============================================================================
 Name        : CLASE05.c
 Author      : Brian Pavon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>
#define QTY_EMPLEADOS 1000

int imprimirArray(int *array,int limite);

int initArrayInt(int array[],int limite,int valor);

int getInt(	int *pResultado,
			char *pMensaje,
			char *pMensajeError,
			int minimo,
			int maximo,
			int reintentos);

int getArrayInt(	int array[],
					int limite,
					char *mensaje,
					char *mensajeError,
					int minimo,
					int maximo,
					int reintentos);

int maximoArrayInt(int array[],int limite,int *pResultado);
int minimoArrayInt(int array[],int limite,int *pResultado);
int promedioArrayInt(int array[],int limite,float *pResultado);
int ordenarArrayInt(int array[],int limite);

int main(void)
{
	int edadesEmpleados[QTY_EMPLEADOS];
	int cantidadDatos;

	cantidadDatos=getArrayInt(edadesEmpleados,QTY_EMPLEADOS,)
	if(cantidadDatos>0)
	{
		imprimirArray(edadesEmpleados,cantidadDatos);
		ordenarArrayInt(edadesEmpleados,cantidadDatos);
		imprimirArray(edadesEmpleados,cantidadDatos);
	}
	/*if(initArrayInt(edadesEmpleados,QTY_EMPLEADOS,10)==0)
		//direccion de memoria,cantidad o el limite,de donde inicia
	{
		imprimirArray(edadesEmpleados,QTY_EMPLEADOS);
	}*/


	return EXIT_SUCCESS;
}
int initArrayInt(int array[],int limite,int valor)
//*array,esto sirve para recibir los arrays,siempre ponemos array y limite
{
	int i;
	int retorno = -1;

	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			array[i] = valor+i;
		}

	}
	return retorno;
}
int imprimirArray(int *array,int limite)
{
	int i;
	int retorno = -1;

	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			printf("%d\n",array[i]);
		}

	}

	return retorno;
}

int getInt(	int *pResultado,
			char *pMensaje,
			char *pMensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = -1;
	int buffer;
	if(	pResultado != NULL &&
		pMensaje	!= NULL &&
		pMensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",pMensaje);
			__fpurge(stdin); // fflush
			if(scanf("%d",&buffer)==1)
			{
				if(buffer >= minimo && buffer <= maximo)
				{
					retorno = 0;
					*pResultado = buffer;
					break;
				}
			}
			printf("%s",pMensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}

int getArrayInt(	int array[],
					int limite,
					char *pMensaje,
					char *pMensajeError,
					int minimo,
					int maximo,
					int reintentos)
{
		int i = 0;
		int retorno = -1;
		int buffer;
		char respuesta = 'n';

		if(array != NULL && limite > 0)
		{
			do
			{
				if(getIn( 	&buffer,
							pMensaje,
							pMensajeError,
							minimo,
							maximo,
							reintentos)==0)
				{
					array[i]=buffer;
					i++;
					limite--;
				}
				//limite--;
				printf("Continuar? (s/n)");
				__fpurge(stdin);
				scanf("%c",&respuesta);
			}while(respuesta == 's' && limite >0);
			retorno = i;
		}
	return retorno;
}

int maximoArrayInt(int array[],int limite,int *pResultado)
{
		int i;
		int retorno = -1;
		int maximo;
		int posMaximo;
		if(array != NULL && limite > 0)
		{
			retorno = 0;
			maximo = array[0];
			posMaximo = 0;
			for(i=1;i<limite;i++)//esto significa ir hasta el limite
			{
				if(array[i]>maximo)
				{
					maximo = array[i];
					posMaximo = i;
				}
			}
			//*pResultado = maximo;
			*pResultado = posMaximo;
		}

		return retorno;
}
int minimoArrayInt(int array[],int limite,int *pResultado)
{
		int i;
		int retorno = -1;
		int minimo;
		if(array != NULL && limite > 0)
		{
			retorno = 0;
			minimo = array[0];
			for(i=1;i<limite;i++)//esto significa ir hasta el limite
			{
				if(array[i]<minimo)
				{
					minimo = array[i];
				}
			}
			*pResultado = minimo;
		}

		return retorno;
}
int promedioArrayInt(int array[],int limite,int *pResultado)
{
		int i;
		int retorno = -1;
		int maximo;
		long int acumulador = 0;
		if(array != NULL && limite > 0)
		{
			retorno = 0;
			maximo = array[0];
			for(i=1;i<limite;i++)//esto significa ir hasta el limite
			{
				if(array[i]>maximo)
				{
					maximo = array[i];
				}
			}
			*pResultado = maximo;
		}

		return retorno;
}
int ordenarArrayInt(int array[],int limite)
{
		int i;
		int retorno = -1;
		int posMaximo;
		int auxiliar;
		if(array != NULL && limite > 0)
		{

			for(i=1;i<limite;i++)//esto significa ir hasta el limite
			{
				maximoArrayInt(array+i,limite-i,&posMaximo);//array+i = &array[i]
				auxiliar = array[i];
				array[i] = array[posMaximo];
				array[posMaximo] = auxiliar;
			}

		}

		return retorno;
}
