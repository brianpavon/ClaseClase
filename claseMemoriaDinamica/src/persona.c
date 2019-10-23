/*
 * persona.c
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */
#include <string.h>
#include "persona.h"

static int isValidAltura(float* altura);
static int isValidEdad(int* edad);
static int isValidNombre(char* nombre);

Persona* new_Persona()//constructor sin parametros
{
	return malloc(sizeof(Persona));
}

//constructor con parametros
Persona* new_PersonaParametros(char* nombre,int* edad,float* altura)
{
	Persona* retorno = NULL;
	Persona* this;
	this = new_Persona();
	if(this != NULL)
	{
		if(   per_setNombre(this,nombre)==0 &&
			  per_setEdad(this,edad)== 0 &&
			  per_setAltura(this,altura)== 0)
		{
			retorno = this;
		}
		else
		{
			delete_Persona(this);
		}
	}
	return retorno;
}


void delete_Persona(Persona* this)
{
	free(this);
}

int per_setNombre(Persona* this,char* nombre)//siempre que sea un char, debo copiar y pegar esta funcion
{
	int retorno = -1;
	if(this != NULL && isValidNombre(nombre))//valido el contexto
	{
		strcpy(this->nombre,nombre);//en el nombre copio el nombre
		retorno = 0;
	}
	return retorno;
}

int per_getNombre(Persona* this,char* nombre)//para obtener un nombre
{
	int retorno = -1;
	if(this != NULL && nombre != NULL)
	{
		strcpy(nombre,this->nombre);
		retorno = 0;
	}
	return retorno;
}

static int isValidNombre(char* nombre)
{
	return 1;
}


int per_setEdad(Persona* this,int* edad)//siempre que sea un int, debo copiar y pegar esta funcion
{
	int retorno = -1;
	if(this != NULL && isValidEdad(edad))//valido el contexto
	{
		this->edad = *edad;//en el Edad copio el Edad
		retorno = 0;
	}
	return retorno;
}

int per_getEdad(Persona* this,int* edad)//para obtener un Edad
{
	int retorno = -1;
	if(this != NULL && edad != NULL)
	{
		*edad = this->edad;
		retorno = 0;
	}
	return retorno;
}

static int isValidEdad(int* edad)
{
	return 1;
}


int per_setAltura(Persona* this,float* altura)//siempre que sea un float, debo copiar y pegar esta funcion
{
	int retorno = -1;
	if(this != NULL && isValidAltura(altura))//valido el contexto
	{
		this->altura = *altura;//en el Altura copio el Altura
		retorno = 0;
	}
	return retorno;
}

int per_getAltura(Persona* this,float* altura)//para obtener un Altura
{
	int retorno = -1;
	if(this != NULL && altura != NULL)
	{
		*altura = this->altura;
		retorno = 0;
	}
	return retorno;
}

static int isValidAltura(float* altura)
{
	return 1;
}
