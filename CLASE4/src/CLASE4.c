/*
 ============================================================================
 Name        : CLASE4.c
 Author      : Brian Pavon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h" //siempre se incluye .h y va entre comillas porque es local


int main(void)
{
	int resultado;
	if(getFloat(&resultado,"Numero?\n","Error\n",0,160,2)==0)
			{
				printf("El resultado es: %2.f",resultado);
			}
	return EXIT_SUCCESS;
}


