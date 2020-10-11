/*
 ============================================================================
 Name        : Parcial_I_labI.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "eMascotas.h"
#include "eRaza.h"
#include "informes.h"

#define CANTIDAD_MASCOTAS 10
#define CANTIDAD_RAZAS 4

int main(void){
	setbuf(stdout,NULL);

	eMascota arrayMascotas[CANTIDAD_MASCOTAS];
	eRaza arrayRazas[CANTIDAD_RAZAS];
	int opcionMenu;


	//IDS DE MASCOTAS;
	int idMascotas;
	idMascotas = 5;

	//AUXILIARES QUE NOS AYUDAN A GUARDAR DATOS INGRESADOS POR USUARIO
	int auxIdMascota;

	if(iniciarArraysMascotas(arrayMascotas,CANTIDAD_MASCOTAS)==0)
		{
			printf("Array de Mascotas Inicializado Correctamente.\n");
		}

	if(iniciarArraysRazas(arrayRazas,CANTIDAD_RAZAS)==0)
		{
			printf("Array de Razas Inicializado Correctamente.\n\n");
		}


	hardCodearMascota(arrayMascotas);
	hardCodearRaza(arrayRazas);

	 do{
	        opcionMenu = menu();

	        switch(opcionMenu){
	        case 1:
	           mostrarMascotasConRaza(arrayMascotas,CANTIDAD_MASCOTAS,arrayRazas,CANTIDAD_RAZAS);
	        break;
	        case 2:
	        	if(	contadorDeMascotas(arrayMascotas,CANTIDAD_MASCOTAS) > 0 &&
	        		!imprimirMascotas(arrayMascotas,CANTIDAD_MASCOTAS) &&
	        		!utn_getNumberInt(&auxIdMascota,"Ingrese el ID de la Mascota a dar de baja:\n","ID Invalido!\n",0,idMascotas,5) &&
					buscarSiExisteMascota(arrayMascotas,CANTIDAD_MASCOTAS,auxIdMascota) > -1 &&
	        		!removerMascota(arrayMascotas,CANTIDAD_MASCOTAS,auxIdMascota))
	        		{
	        			printf("Baja de mascota exitosa.\n");
	        		}
	        	else
	        		{
	        			printf("No hay mascotas cargadas!\n");
	        		}
	        break;
	        case 4:

	        break;
	        case 10:
	        	 test(arrayMascotas,CANTIDAD_MASCOTAS,arrayRazas,CANTIDAD_RAZAS);
	        break;
	        }//Cierre switch
	}while(opcionMenu != 12);

	 return EXIT_SUCCESS;
}
