#include "Employee.h"



Employee* employee_new()
{
	return malloc(sizeof(Employee));
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadas,char* sueldo)
{
	Employee* retorno = NULL;
	Employee* this;
	this = employee_new();
	if(this != NULL)
	{
		if( employee_setId(this,id)==0 &&
			employee_setNombre(this,nombre)==0 &&
			employee_setHorasTrabajadas(this,horasTrabajadas)==0 &&
			employee_setSueldo(this,sueldo)==0)
		{
			retorno = this;
		}
		else
		{
			employee_delete(this);
		}
	}
}

void employee_delete(Employee* this)
{
	if(this != NULL)
	{
		free(this);
	}
}

int employee_setId(Employee* this,int id)
{
	int retorno = -1;
	if(this != NULL && isValidId(id))
	{
		strcpy(this->nombre,nombre);
		retorno = 0;
	}
	return retorno;
}

int employee_getId(Employee* this,int* id);

static int employee_isValidId(char* id)
{
	return 1;
}

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);


