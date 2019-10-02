/*
 ============================================================================
 Name        : Clase10PracticaParcial.c
 Author      : Brian Pavon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#include "pantalla.h"
#include "contratacion.h"
#include "utn.h"
#define QTY_PANTALLAS 100
#define QTY_CONTRATACIONES 1000

int main(void)
{
	struct sPantalla aPantalla[QTY_PANTALLAS];
	initLugarLibrePantalla(aPantalla,QTY_PANTALLAS);
	struct sPantalla unaPantalla = {5,STATUS_EMPTY,"LCD","LCD","Avellaneda 851",100};
	//bajaPantallaPorId(aPantalla,QTY_PANTALLAS,unaPantalla);
	//altaPantallaPorId(aPantalla,QTY_PANTALLAS,unaPantalla);
	//imprimirArrayPantalla(aPantalla,QTY_PANTALLAS);


	return EXIT_SUCCESS;
}
