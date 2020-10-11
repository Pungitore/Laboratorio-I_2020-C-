/*
 * informes.c
 *
 *  Created on: 8 oct. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <string.h>
#include "utn.h"
#include "informes.h"
#include "eMascotas.h"
#include "eRaza.h"

int menu(){
    int opcion;

        printf("1.Listar Mascotas con su Raza y Pais Origen\n");
        printf("2.Borrar Mascota\n");
        printf("4.listado de mascotas ordenadas por país de origen.\n");
        printf("10.Test\n");


        scanf("%d",&opcion);
    return opcion;
}

void recorrerMascotas(eMascota listadoMascotas[],int lenMascota){
    int iMascotas;

    for(iMascotas=0;iMascotas<lenMascota;iMascotas++){

    }
}

void recorrerRazas(eRaza listadoRaza[],int lenRaza){
    int iRazas;
    for(iRazas=0;iRazas<lenRaza;iRazas++){

    }
}

void mostrarMascotasConRaza(eMascota listadoMascota[],int lenMascota,eRaza listadoRaza[],int lenRaza)
{

		recorrerMascotas(listadoMascota,lenMascota);
		recorrerRazas(listadoRaza,lenRaza);

		int i;
		printf("ID Mascota  Nombre  Edad Sexo  Tipo | Descripcion  Pais Origen \n");
		printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");

		for(i=0;i<lenMascota;i++)
		 {
			if(listadoMascota[i].idRaza == listadoRaza[i].idRaza)
				{
					printf("%4d %14s %2d %5s %5d %10s %14s\n",		listadoMascota[i].idMascota,
						                                            listadoMascota[i].nombre,
						                                            listadoMascota[i].edad,
						                                            listadoMascota[i].sexo,
						                                            listadoMascota[i].tipo,
						                                            listadoRaza[i].descripcion,
						                                            listadoRaza[i].paisOrigen);
				}
		 }
}

/*
 * printf("ID Mascota  Nombre  Edad Sexo  Tipo | Descripcion  Pais Origen \n");
		printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");

		 for(i=0;i<lenMascota;i++)
		 {
		      if(listadoMascota[i].idRaza == listadoRaza[i].idRaza)
		     {
		             printf("%4d %14s %2d %5s %5d %10s %14s\n",listadoMascota[i]->idMascota,
		                                            listadoMascota[i]->nombre,
		                                            listadoMascota[i]->edad,
		                                            listadoMascota[i]->sexo,
		                                            listadoMascota[i]->tipo,
		                                            listadoRaza[i]->descripcion,
		                                            listadoRaza[i]->paisOrigen);
		      }
 *
 *
 */

void test(eMascota listadoMascota[],int lenMascota, eRaza listadoRaza[],int lenRaza){
    int iMascota;
    int iRaza;

    printf("ID Mascota  Nombre  Edad Sexo  Tipo | Descripcion  Pais Origen \n");
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
    for(iMascota=0;iMascota<lenMascota;iMascota++){
        for(iRaza=0;iRaza<lenRaza;iRaza++){
            if(listadoMascota[iMascota].idRaza == listadoRaza[iRaza].idRaza){
            	 printf("%4d %14s %2d %5s %5d %10s %14s\n",listadoMascota[iMascota].idMascota,
            			                                            listadoMascota[iMascota].nombre,
            			                                            listadoMascota[iMascota].edad,
            			                                            listadoMascota[iMascota].sexo,
            			                                            listadoMascota[iMascota].tipo,
            			                                            listadoRaza[iRaza].descripcion,
            			                                            listadoRaza[iRaza].paisOrigen);
            }
        }
    }
}
