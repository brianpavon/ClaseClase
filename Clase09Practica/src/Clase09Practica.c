/*
 ============================================================================
 Name        : Clase09Practica.c
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
#include "utn.h"
#include "empleado.h"

#define QTY_EMPLEADOS 10

int main(void)
{

	//int numero;
	struct sEmpleado aEmpleados[QTY_EMPLEADOS];
	struct sEmpleado unEmpleado = {5,STATUS_EMPTY,"Juan","Perez"};
	initLugarLibreEmpleado(aEmpleados,QTY_EMPLEADOS);
	altaEmpleadoPorId(aEmpleados,QTY_EMPLEADOS,unEmpleado);
	imprimirArrayEmpleados(aEmpleados,QTY_EMPLEADOS);


	/*aEmpleados[0].status = 1;
	numero = buscarLugarLibreEmpleado(aEmpleados,QTY_EMPLEADOS);*/



	/*struct sEmpleado bEmpleado;
	int i;
	int idEmpleado = 0;


	for(i=0;i<3;i++){

		getString(bEmpleado.nombre,"Ingrese el nombre",
				"ERROR", 1, 49, 2);

		getString(bEmpleado.apellido,"Ingrese el apellido",
						"ERROR", 1, 49, 2);

		bEmpleado.idEmpleado = idEmpleado;
		idEmpleado++;
		bEmpleado.status = STATUS_NOT_EMPTY;

		aEmpleados[i] = bEmpleado;
	}
	imprimirArrayEmpleados(aEmpleados,3);*/

	return EXIT_SUCCESS;
}

