/*
 * utn.h
 *
 *  Created on: 19 sep. 2019
 *      Author: alumno
 */

#ifndef UTN_H_
#define UTN_H_
#define EXIT_ERROR -1

int getInt(	int *resultado,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos);
int getFloat(	float *resultado,
				char *mensaje,
				char *mensajeError,
				float minimo,
				float maximo,
				int reintentos);
int getChar(	char *resultado,
				char *mensaje,
				char *mensajeError,
				char minimo,
				char maximo,
				int reintentos);

int getString(	char *pResultado,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos);


#endif /* UTN_H_ */
