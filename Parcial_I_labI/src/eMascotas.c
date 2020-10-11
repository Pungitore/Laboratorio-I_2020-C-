/*
 * eMascotas.c
 *
 *  Created on: 8 oct. 2020
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "eMascotas.h"

// TIPO 1 = GATO | TIPO 2 = PERRO | TIPO 3 = RARO
void hardCodearMascota(eMascota listado[])
{
    int arrayidMascota[5]={1,2,3,4,5};
    char arraynombre[5][NOMBRE_LEN]={"Pepito","Maria","Jorge","Pastor" ,"Bel"};
    int arrayedad[5]={5,8,2,3,4};
    char arraysexo[5][SEXO_LEN]={"m","f","m","m","f"};
    char arraytipo[5] = {1,1,2,2,2};
    int arrayidRaza[5] = {1,1,2,4,3}; //FK
    int arrayisEmpty[5] = {0,0,0,0,0};

    int i ;
    for(i=0;i<5;i++)
    {
        listado[i].idMascota=arrayidMascota[i];
        strcpy(listado[i].nombre, arraynombre[i]);
        listado[i].edad = arrayedad[i];
        strcpy(listado[i].sexo, arraysexo[i]);
        listado[i].tipo = arraytipo[i];
        listado[i].idRaza = arrayidRaza[i];
        listado[i].isEmpty = arrayisEmpty[i];
    }
}


int iniciarArraysMascotas(eMascota list[], int len)
{
	int retorno = -1;
	int i;

	if(list!=NULL && len>0)
		{
			for(i=0;i<len;i++)
			{
				list[i].isEmpty = 1;
			}
			retorno = 0;
		}
	return retorno;
}


int imprimirMascotas(eMascota list[], int len)
{
	int retorno = -1;
	int i;

	if(list != NULL && len > 0)
	{
		printf("ID Mascota  Nombre  Edad Sexo  Tipo\n");
		printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
		for(i=0;i<len;i++)
		{
			if(list[i].isEmpty == 0)
			{
				printf("%4d %14s %2d %5s %5d\n",list[i].idMascota,list[i].nombre,list[i].edad,list[i].sexo,list[i].tipo);
			}
		}
		retorno = 0;
	}
	return retorno;
}

int contadorDeMascotas(eMascota list[], int len)
{
	int i;
	int contadorMascotas = 0;

	if(list != NULL && len > 0)
	{
		for(i=0;i<len;i++)
		{
			if(list[i].isEmpty == 0)
			{
				contadorMascotas++;
			}
		}
	}
	return contadorMascotas;
}

int buscarSiExisteMascota(eMascota list[], int len, int id)
{
		int retorno = -1;
		int i;

		if(list != NULL && len > 0 && id > -1)
			{
				for(i=0;i<len;i++)
				{
					if( list[i].idMascota == id &&
						list[i].isEmpty == 0)
					{
						retorno = i;
						break;
					}
				}
			}
			return retorno;
}

int removerMascota(eMascota list[], int len, int id)
{
	int retorno = -1;
	int i;

	if(list != NULL && len > 0 && id >= 0)
	{
		for(i=0;i<len;i++)
		{
			if(list[i].idMascota == id &&
			list[i].isEmpty == 0)
			{
				retorno = 0;
				list[i].isEmpty = 1;
				break;
			}
		}
	}
	return retorno;
}
