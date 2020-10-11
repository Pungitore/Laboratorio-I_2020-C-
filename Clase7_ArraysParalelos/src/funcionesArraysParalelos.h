/*
 * funcionesArraysParalelos.h
 *
 *  Created on: 17 sep. 2020
 *      Author: Usuario
 */

#ifndef FUNCIONESARRAYSPARALELOS_H_
#define FUNCIONESARRAYSPARALELOS_H_

void mostrarEmpleados(int parametroIsEmpty[], int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad);
void cargarEmpleados(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad);
void ordenarPorNombreEmpleados(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad);
void ordenarPorLegajoEmpleados(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad);
void ordenarPorSueldoEmpleados(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad);
int menu();
void InicializarEmpleados(int isEmpty[],int cantidad);
int buscarLibre(int parametroIsEmpty[], int cantidad);
void cargarUnEmpleado(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad);


#endif /* FUNCIONESARRAYSPARALELOS_H_ */
