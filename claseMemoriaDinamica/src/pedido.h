/*
 * pedido.h
 *
 *  Created on: 22 oct. 2019
 *      Author: alumno
 */

#ifndef PEDIDO_H_
#define PEDIDO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int idPedido;
	int status;
	//-------
	float cantidadRecolectada;
	float cantidadPlasticoHdpe;
	float cantidadPlasticoLdpe;
	float cantidadPlasticoPp;
	int idCliente;

}Pedido;

Pedido* new_Pedido();
void delete_pedido(Pedido* this);
int ped_setCantidadRecolectada(Pedido* this,float* cantidadRecolectada);
int ped_getCantidadRecolectada(Pedido* this,float* cantidadRecolectada);
int ped_setCantidadPlasticoHdpe(Pedido* this,float* cantidadPlasticoHdpe);
int ped_getCantidadPlasticoHdpe(Pedido* this,float* cantidadPlasticoHdpe);
int ped_setCantidadPlasticoLdpe(Pedido* this,float* cantidadPlasticoLdpe);
int ped_getCantidadPlasticoLdpe(Pedido* this,float* cantidadPlasticoLdpe);
int ped_setCantidadPlasticoPp(Pedido* this,float* cantidadPlasticoPp);
int ped_getCantidadPlasticoLdpe(Pedido* this,float* cantidadPlasticoPp);
int ped_setIdCliente(Pedido* this,int* idCliente);
int ped_getIdCliente(Pedido* this,int* idCliente);


#endif /* PEDIDO_H_ */
