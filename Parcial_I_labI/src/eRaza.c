/*
 * eRaza.c
 *
 *  Created on: 8 oct. 2020
 *      Author: Usuario
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "eRaza.h"

void hardCodearRaza(eRaza listado[])
{
    int arrayidRaza[4]={1,2,3,4};
    char arraydescripcion[4][DESCRIPCION_LEN]= {"siames","doberman","persa","pastor belga"};
    char arraytamanio[4][TAMANIO_LEN]= {"chico","grande","mediano","grande"};
    char arraypaisorigen[4][PAIS_LEN] = {"tailandia","alemania","persia","belgica"};
    int arrayisEmpty[4] = {0,0,0,0};

    int i ;
    for(i=0;i<4;i++)
    {
        listado[i].idRaza=arrayidRaza[i];
        strcpy(listado[i].descripcion, arraydescripcion[i]);
        strcpy(listado[i].tamanio, arraytamanio[i]);
        strcpy(listado[i].paisOrigen, arraypaisorigen[i]);
        listado[i].isEmpty = arrayisEmpty[i];
    }
}

int iniciarArraysRazas(eRaza list[], int len)
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

