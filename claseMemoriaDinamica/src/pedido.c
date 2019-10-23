/*
 * pedido.c
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */

#include "pedido.h"


static int isValidCantidadPlasticoHdpe(float* cantidadPlasticoHdpe);
static int isValidCantidadRecolectada(float* cantidadRecolectada);
static int isValidCantidadPlasticoLdpe(float* cantidadPlasticoLdpe);
static int isValidCantidadPlasticoLdpe(float* cantidadPlasticoPp);
static int isValidIdCliente(int* idCliente);

Pedido* new_Pedido()
{
	return malloc(sizeof(Pedido));
}

void delete_pedido(Pedido* this)
{
	if(this != NULL)
	{
		free(this);
	}
}

//CANTIDAD RECOLECTADA
int ped_setCantidadRecolectada(Pedido* this,float* cantidadRecolectada)
{
	int retorno = -1;
	if(this != NULL && isValidCantidadRecolectada(cantidadRecolectada))
	{
		this->cantidadRecolectada = *cantidadRecolectada;
		retorno = 0;
	}

	return retorno;
}

int ped_getCantidadRecolectada(Pedido* this,float* cantidadRecolectada)
{
	int retorno = -1;
	if(this != NULL && cantidadRecolectada != NULL)
	{
		*cantidadRecolectada = this->cantidadRecolectada;
		retorno = 0;
	}

	return retorno;
}

static int isValidCantidadRecolectada(float* cantidadRecolectada)
{
	return 1;
}


//CANTIDAD PLASTICO HDPE
int ped_setCantidadPlasticoHdpe(Pedido* this,float* cantidadPlasticoHdpe)
{
	int retorno = -1;
	if(this != NULL && isValidCantidadPlasticoHdpe(cantidadPlasticoHdpe))
	{
		this->cantidadPlasticoHdpe = *cantidadPlasticoHdpe;
		retorno = 0;
	}

	return retorno;
}

int ped_getCantidadPlasticoHdpe(Pedido* this,float* cantidadPlasticoHdpe)
{
	int retorno = -1;
	if(this != NULL && cantidadPlasticoHdpe != NULL)
	{
		*cantidadPlasticoHdpe = this->cantidadPlasticoHdpe;
		retorno = 0;
	}

	return retorno;
}

static int isValidCantidadPlasticoHdpe(float* cantidadPlasticoHdpe)
{
	return 1;
}

//CANTIDAD PLASTICO LDPE
int ped_setCantidadPlasticoLdpe(Pedido* this,float* cantidadPlasticoLdpe)
{
	int retorno = -1;
	if(this != NULL && isValidCantidadPlasticoLdpe(cantidadPlasticoLdpe))
	{
		this->cantidadPlasticoLdpe = *cantidadPlasticoLdpe;
		retorno = 0;
	}

	return retorno;
}

int ped_getCantidadPlasticoLdpe(Pedido* this,float* cantidadPlasticoLdpe)
{
	int retorno = -1;
	if(this != NULL && cantidadPlasticoLdpe != NULL)
	{
		*cantidadPlasticoLdpe = this->cantidadPlasticoLdpe;
		retorno = 0;
	}

	return retorno;
}

static int isValidCantidadPlasticoLdpe(float* cantidadPlasticoLdpe)
{
	return 1;
}


//CANTIDAD PLASTICO PP
int ped_setCantidadPlasticoPp(Pedido* this,float* cantidadPlasticoPp)
{
	int retorno = -1;
	if(this != NULL && isValidCantidadPlasticoPp(cantidadPlasticoPp))
	{
		this->cantidadPlasticoPp = *cantidadPlasticoPp;
		retorno = 0;
	}

	return retorno;
}

int ped_getCantidadPlasticoLdpe(Pedido* this,float* cantidadPlasticoPp)
{
	int retorno = -1;
	if(this != NULL && cantidadPlasticoPp != NULL)
	{
		*cantidadPlasticoPp = this->cantidadPlasticoPp;
		retorno = 0;
	}

	return retorno;
}

static int isValidCantidadPlasticoLdpe(float* cantidadPlasticoPp)
{
	return 1;
}

///ID CLIENTE
int ped_setIdCliente(Pedido* this,int* idCliente)
{
	int retorno = -1;
	if(this != NULL && isValidIdCliente(idCliente))
	{
		this->idCliente = *idCliente;
		retorno = 0;
	}
	return retorno;
}

int ped_getIdCliente(Pedido* this,int* idCliente)
{
	int retorno = -1;
	if(this != NULL && idCliente != NULL)
	{
		*idCliente = this->idCliente;
		retorno = 0;
	}

	return retorno;
}

static int isValidIdCliente(int* idCliente)
{
	return 1;
}
