/*
 ============================================================================
 Name        : CLASE3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int promedio(int num1);

int main(void)
{
	int numero;
	int contador = 0;
	float resultProm;
	do{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		contador++;
	}while(contador<5);
	resultProm=promedio(numero);

	return 0;
}
int promedio(int num1){
	float resultProm;
	int contador = 0;
	int acumulador = 0;
	acumulador += num1;
	resultProm = (float)acumulador / contador;
	return resultProm;
}





