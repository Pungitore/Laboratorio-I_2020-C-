/*
 * funcionesArrays.h
 *
 *  Created on: 10 sep. 2020
 *      Author: Usuario
 */

#ifndef FUNCIONESARRAYS_H_
#define FUNCIONESARRAYS_H_

//Parte 1
int sacarSumaEdades(int pArray[],int cantidadElementos);
int sacarMayorEdad(int pArray[], int cantidadElementos);
int sacarMenorEdad(int pArray[], int cantidadElementos);
float sacarPromedio(int pArray[], int cantidadElementos);
int sacarRepetidos(int pArray[], int cantidadElementos,int valorRepetido);

//Mas funciones
void mostrarAparicionesEntero(int pArray[], int cantidadElementosn, int datoBuscado);

//Carga Aleatoria
int inicializarArray(int pArray[], int cantidadElementos);
int cargarArray(int pArray[], int cantidadElementos);
int cantidadElementosCargados(int pArray[], int cantidadElementos);
int cantidadElementosVacios(int pArray[], int cantidadElementos);
float promedioEdadesCargadas(int pArray[], int cantidadElementos);
void indiceElementosVacios(int pArray[], int cantidadElementos);

#endif /* FUNCIONESARRAYS_H_ */
