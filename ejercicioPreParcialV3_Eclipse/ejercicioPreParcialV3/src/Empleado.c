
#include <stdio.h>
#include <stdlib.h>
#include "Empleado.h"

void em_calcularSueldo(void* p)
{
	// recibo elemento empleado como void.
	// hacer calculo de sueldo y escribirlo en campo sueldo del empleado

	/*- Las primeras 120 horas la hora vale $180
	  - De 120 a 160 horas, la hora vale $240
	  - De 160 a 240 horas, la hora vale $350*/

	Empleado* empleado;
	int sueldo;

	empleado = (Empleado*) p;
	printf("horas %d\n",empleado->horasTrabajadas);
	if(empleado->horasTrabajadas <= 120)
	{
		sueldo = empleado->horasTrabajadas * 180;
		empleado->sueldo = sueldo;
		printf("prueba1\n");
	}
	if(empleado->horasTrabajadas > 120 && empleado->horasTrabajadas <= 160)
	{
		sueldo = empleado->horasTrabajadas * 240;
		empleado->sueldo = sueldo;
		printf("prueba\n");

	}
	if(empleado->horasTrabajadas > 160 && empleado->horasTrabajadas <= 240 )
	{
		sueldo = empleado->horasTrabajadas * 350;
		empleado->sueldo = sueldo;
		printf("prueba2\n");
	}
	printf("%s %d\n",empleado->nombre,empleado->sueldo);
}
