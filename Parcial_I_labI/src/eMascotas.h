/*
 * eMascotas.h
 *
 *  Created on: 8 oct. 2020
 *      Author: Usuario
 */

#ifndef EMASCOTAS_H_
#define EMASCOTAS_H_


#define NOMBRE_LEN 20
#define SEXO_LEN 2

typedef struct
{
    int idMascota;
    char nombre[NOMBRE_LEN];
    int edad;
    char sexo[SEXO_LEN];
    int tipo;
    int idRaza;
    int isEmpty;
}eMascota;

void hardCodearMascota(eMascota listado[]);
int imprimirMascotas(eMascota list[], int len);
int iniciarArraysMascotas(eMascota list[], int len);
int contadorDeMascotas(eMascota list[], int len);
int buscarSiExisteMascota(eMascota list[], int len, int id);
int removerMascota(eMascota list[], int len, int id);

#endif /* EMASCOTAS_H_ */
