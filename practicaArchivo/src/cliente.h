/*
 * cliente.h
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int idCliente;
	int status;
	///------
	char nombre[51];
	char direccion[51];
	char localidad[51];
	char cuit[51];

}Cliente;

Cliente* new_cliente();
Cliente* new_clienteConParametros(int* idCliente,int* status,char* nombre,char* direccion,char* localidad,char* cuit);
void delete_cliente(Cliente* this);
int cli_setNombre(Cliente* this,char* nombre);
int cli_getNombre(Cliente* this,char* nombre);
int cli_setDireccion(Cliente* this,char* direccion);
int cli_getDireccion(Cliente* this,char* direccion);
int cli_setLocalidad(Cliente* this,char* localidad);
int cli_getLocalidad(Cliente* this,char* localidad);
int cli_setCuit(Cliente* this,char* cuit);
int cli_getCuit(Cliente* this,char* cuit);
int cli_setIdCliente(Cliente* this,int* idCliente);
int cli_getIdCliente(Cliente* this,int* idCliente);
int cli_setStatus(Cliente* this,int* status);
int cli_getStatus(Cliente* this,int* status);


#endif /* CLIENTE_H_ */
