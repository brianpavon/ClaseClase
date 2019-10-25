/*
 ============================================================================
 Name        : claseArchivos.c
 Author      : Brian Pavon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct S_Persona
	{

	 char nombre[32];
	 char apellido[32];
	 int edad;
	};
	typedef struct S_Persona Persona;

int main(void)
{
	FILE* fp = fopen("archivo.txt","w");//con esta funcion abro el archivo, va a devolver un puntero a ese archivo
	//en windows conviene colocar "wb"

	/*if(fp != NULL)
	{

		printf("Abri el archivo\n");
		char data[6];
		char[0]='H';
		char[1]='O';
		char[2]='L';
		char[3]='A';
		char[4]='\n';
		char[5]=0;
		fwrite(data,sizeof(char),5,fp);
		fprintf(fp,"%s",data);

		int i= 4569;
		//fwrite(&i,sizeof(int),1,fp);//escribe como binario, se ven los bytes
		fprintf(fp,"%d",i);//sirve para ver como texto,esto se corresponde con un texto visible


		fclose(fp);
	}

	fp = fopen("archivo.txt","r");
	if(fp != NULL)
	{
		int i;
		//fread(&i,sizeof(int),1,fp);//lo lee como binario
		fscanf(fp,"%d",&i);
		fclose(fp);
		printf("Lei de la var: %d",i);
	}*/



	if(fp != NULL)
	{
		int i;
		char j[64];
		int k;
		int l;

		do
		{
			int r = fscanf(fp,"%d,%[^,],%d,%d\n",&i,j,&k,&l);
			if(r<4)
				break;
			printf("\nfscanf devolvio: %d\n",r);
			printf("\nLei de la var: %d\n",i);
			printf("\nLei de la var: %[^,]\n",j);
			printf("\nLei de la var: %d\n",k);
			printf("\nLei de la var: %d\n",l);

		}while(! feof(fp));
	}


	return EXIT_SUCCESS;
}
