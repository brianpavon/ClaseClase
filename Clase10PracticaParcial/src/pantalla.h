/*
 * pantalla.h
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */


#ifndef PANTALLA_H_
#define PANTALLA_H_
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1


struct sPantalla
{
	int idPantalla;
	int status;
	char tipo[50];
	char nombre[50];
	char direccion[100];
	float precio;
};
typedef struct sPantalla Pantalla;
int initLugarLibrePantalla(Pantalla *aArray, int cantidad);

int imprimirArrayPantalla(Pantalla *aPantalla, int cantidad);

int ordenarArrayPantalla(Pantalla *aPantalla, int cantidad);

int buscarLugarLibrePantalla(Pantalla *aArray, int cantidad);

int buscarPantallaPorId(Pantalla *aArray, int cantidad,int id);

int bajaPantallaPorId(Pantalla *aArray, int cantidad,int id);

int modificarPantallaPorId(Pantalla *aArray, int cantidad,Pantalla pantalla);

int altaPantallaPorId(Pantalla *aArray, int cantidad,Pantalla pantalla);

static int generarId(void);


#endif /* PANTALLA_H_ */
