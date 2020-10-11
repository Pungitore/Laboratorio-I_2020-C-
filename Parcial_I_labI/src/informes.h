/*
 * informes.h
 *
 *  Created on: 8 oct. 2020
 *      Author: Usuario
 */
#include "eMascotas.h"
#include "eRaza.h"

#ifndef INFORMES_H_
#define INFORMES_H_

int menu();
void recorrerMascotas(eMascota listadoMascotas[],int lenRaza);
void recorrerRazas(eRaza listadoRaza[],int lenRaza);
void mostrarMascotasConRaza(eMascota listadoMascotas[],int lenMascota,eRaza listadoRazas[],int lenRaza);
void test(eMascota listadoMascota[],int lenMascoa, eRaza listadoRaza[],int lenRaza);
#endif /* INFORMES_H_ */
