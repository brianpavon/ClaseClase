/*
 ============================================================================
 Name        : practicaArchivo.c
 Author      : Brian Pavon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"



int main(void)
{
	 Cliente* listaClientes[1000];//esto es un array de punteros del tipo de esa estructura
	 int posicion = 0;

	 FILE *pFile;
	 int r;
	 int id;
	 int status;
	 char var1[50];
	 char var3[50];
	 char var2[50];
	 char var4[50];

	 pFile = fopen("clientes.txt","r");

	 if(pFile == NULL)
	 {
		 printf("El archivo no existe");
		 exit(EXIT_FAILURE);
	 }
	 do
	 {
		 r = fscanf(pFile,"%d,%d,%[^,],%[^,],%[^,],%[^\n]\n",&id,&status,var1,var2,var3,var4);
		 if(r==6)
			 printf("Lei: %d %d %s %s %s %s\n",id,status,var1,var2,var3,var4);
		 	 //hacer un new para generar un cliente
		 	 //cargar los campos con los datos
		 	 //guardar la direccion en la lista y despues pasar por todos

		 	 Cliente* pc = new_clienteConParametros(&id,status,var1,var2,var3,var4);
		 	 if(pc != NULL)
		 	 {
		 		 listaClientes[posicion] = pc;
		 		 posicion++;
		 		 if(posicion >= 1000)
		 			 break;
		 	 }

		 else
			 break;

	 }while(!feof(pFile));

	 fclose(pFile);
	return EXIT_SUCCESS;
}
