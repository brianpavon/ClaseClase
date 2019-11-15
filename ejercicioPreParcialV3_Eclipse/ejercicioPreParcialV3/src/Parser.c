#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "Empleado.h"

int parser_parseEmpleados(char* fileName, LinkedList* listaEmpleados)
{
	int retorno = -1;
	Employee* auxEmpleado;
	char id[50];
	char nombre[50];
	char horas_trabajadas[50];

	FILE* pFile;


	pFile = fopen(fileName,"r");

	if(listaEmpleados != NULL && fileName != NULL)
	{
		fscanf(pFile,"%[^,],%[^,],%[^\n]\n",id,nombre,horas_trabajadas);

		do
		{
			fscanf(pFile,"%[^,],%[^,],%[^\n]\n",id,nombre,horas_trabajadas);
			auxEmpleado = employee_newParametros(id,nombre,horas_trabajadas);
			if(auxEmpleado != NULL)
			{
				ll_add(listaEmpleados,auxEmpleado);
				retorno = 1;
			}
			else
				break;

		}while(!feof(pFile));
	}
	fclose(pFile);
	fileName = NULL;
    return retorno; // OK
}

