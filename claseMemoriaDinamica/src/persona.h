/*
 * persona.h
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int idPersona;
	int status;
	///----------
	char nombre[51];
	int edad;
	float altura;

}Persona;

Persona* new_Persona();
Persona* new_PersonaParametros(char* nombre,int* edad,float* altura);
void delete_Persona(Persona* this);
int per_setNombre(Persona* this,char* nombre);
int per_getNombre(Persona* this,char* nombre);
int per_setEdad(Persona* this,int* edad);
int per_getEdad(Persona* this,int* edad);
int per_setAltura(Persona* this,float* altura);
int per_getAltura(Persona* this,float* altura);


#endif /* PERSONA_H_ */
