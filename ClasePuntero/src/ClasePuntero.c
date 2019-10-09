/*
 ============================================================================
 Name        : ClasePuntero.c
 Author      : Brian Pavon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int a;
	char b;
	float c;
}dato;

void cargarVector(int*,int);
void mostrarVector(int*,int);
int main(void)
{
	/*int x=1;
	int *pEntero = NULL;//LO INICIALIZAMOS EN NULL PARA EVITAR SI ES QUE NO SE LE ASIGNA NINGUNA DIRECCION, CRASHEE EL PROGRAMA
						//o tambien puedo hacer validaciones del tipo if(*puntero!= NULL)

	pEntero = &x; //asigno la direccion de memoria
	//*pEntero = 7; //aca asigno el valor que le voy a cargar

	printf("%d\n", x); // es igual a 7
	printf("%d\n", *pEntero); // es igual a 7
	printf("%d\n", &x); // muestra la direccion de memoria de x
	printf("%d\n", pEntero); // muestra la direccion de memoria de x
	printf("%d\n", &pEntero); // muestra la direccion de memoria de pEntero

	//para saber cuanto pesa:
	printf("%d\n",sizeof(x));//muestra el peso de esa variable
	//todos los punteros en memoria pesan lo mismo*/

	//COMO FUNCIONA CON VECTOR
	int vector[5];

    cargarVector(vector,5);
    mostrarVector(vector,5);

    //con estructura

    dato miDato = {1,'h',2.5};

    dato *pDato;

    pDato = &miDato;

    printf("%d-- %c -- %f\n", (*pDato).a,(*pDato).b,(*pDato).c);//lo pongo en parentesis para que pueda acceder por el puntero
    //o la otra opcion es con ->
    printf("%d-- %c -- %f\n", pDato->a,pDato->b,pDato->c);
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

void cargarVector(int* vector,int tam)
{
	int i;
	for(i=0 ; i<tam ; i++)
		{
			//*(pEntero+i) = i+1;//primero resuelvo la suma o la aritmetica y despues accedo al valor
			printf("Ingrese un numero: ");
			scanf("%d", vector+i);
		}
}
void mostrarVector(int* vector,int tam)
{
	int i;
	for(i=0 ; i<tam ; i++)
		{
			printf("%d\n", *(vector+i));
		}
}
