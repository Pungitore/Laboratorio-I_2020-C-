/*
 ============================================================================
 Name        : Clase5_Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 Ejercicio:
1-la suma acumulada
2-la mayor edad
3-la menor edad
4-la cantidad de mayor edad repetida o no
5-la cantidad de menor edad repetida o no
6-El promedio

Mas Funciones:
1-El indice de todos los máximos
2-El Indice de todos los mínimos


CARGA ALEATORIA:
1-Inicializar el array
2- cargar aleatoriamente
3-La cantidad de edades cargadas
4-La cantidad de edades vacías
5-El promedio de edades cargadas
6-El Indice de todos los vacíos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesArrays.h"

#define CANTIDAD_EDADES 10

int main(void) {
	setbuf(stdout,NULL);

	    int arrayEdades[CANTIDAD_EDADES];
	    int sumaEdades;
	    int edadMayor;
	    int edadMenor;
	    int cantidadEdadMayor;
	    int cantidadEdadMenor;
	    int indiceMayor;
	    int indiceMenor;
	    float promedio;
	    int cantidadCargados;
	    int cantidadVacios;
	    float promedioEdadCargadas;

	    /*Carga Aleatoria*/
		 inicializarArray(arrayEdades,CANTIDAD_EDADES);
		 if(cargarArray(arrayEdades,CANTIDAD_EDADES) == 0){
				printf("Carga realizada con exito.\n");
			}
			else
			{
				printf("No hay mas lugares libres.\n");
			}
		 /******/



		 //Primera Parte
	    sumaEdades = sacarSumaEdades(arrayEdades,CANTIDAD_EDADES);
	    edadMayor = sacarMayorEdad(arrayEdades,CANTIDAD_EDADES);
	    edadMenor = sacarMenorEdad(arrayEdades,CANTIDAD_EDADES);
	    cantidadEdadMayor = sacarRepetidos(arrayEdades,CANTIDAD_EDADES,edadMayor);
	    cantidadEdadMenor = sacarRepetidos(arrayEdades,CANTIDAD_EDADES,edadMenor);
	    promedio = sacarPromedio(arrayEdades,CANTIDAD_EDADES);
	     cantidadCargados = cantidadElementosCargados(arrayEdades,CANTIDAD_EDADES);
	    cantidadVacios = cantidadElementosVacios(arrayEdades,CANTIDAD_EDADES);
	   // promedioEdadCargadas = promedioEdadesCargadas(arrayEdades,CANTIDAD_EDADES);

	    printf("\nLa suma de las edades es: %d",sumaEdades);
	    printf("\nLa edad Mayor es: %d",edadMayor);
	    printf("\nLa edad Menor es: %d",edadMenor);
	    printf("\nLa cantidad de Edad Mayor %d",cantidadEdadMayor);
	    printf("\nLa cantidad de Edad Menor es: %d",cantidadEdadMenor);
	    printf("\nEl promedio es: %.1f",promedio);
	    mostrarAparicionesEntero(arrayEdades,CANTIDAD_EDADES, edadMenor);
	    mostrarAparicionesEntero(arrayEdades,CANTIDAD_EDADES, edadMayor);
	    printf("\nLa cantidad de elementos cargados son: %d", cantidadCargados);
	    printf("\nLa cantidad de elementos vacios son: %d", cantidadVacios);
	    printf("\nEl promedio de edades cargadas es: %.1f",promedioEdadCargadas);

	    int i;

	    for(i=0; i<CANTIDAD_EDADES;i++){
	    	printf("\nEdad |%d|: %d",i,arrayEdades[i]);
	    }

	return EXIT_SUCCESS;
}
