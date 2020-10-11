/*
 * eRaza.h
 *
 *  Created on: 8 oct. 2020
 *      Author: Usuario
 */

#ifndef ERAZA_H_
#define ERAZA_H_

#define DESCRIPCION_LEN 20
#define TAMANIO_LEN 10
#define PAIS_LEN 20
typedef struct
{
    int idRaza;
    char descripcion[DESCRIPCION_LEN];
    char tamanio[TAMANIO_LEN];
    char paisOrigen[PAIS_LEN];
    int isEmpty;
}eRaza;

void hardCodearRaza(eRaza listado[]);
int iniciarArraysRazas(eRaza list[], int len);

#endif /* ERAZA_H_ */
