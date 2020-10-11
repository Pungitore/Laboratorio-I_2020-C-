/*
 * funcionesArrays.c
 *
 *  Created on: 10 sep. 2020
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

int sacarSumaEdades(int pArray[],int cantidadElementos){
    int retornoSuma = 0;
    int i;

    for(i=0; i<cantidadElementos; i++){
        retornoSuma += pArray[i];
    }
    return retornoSuma;
}

int sacarMayorEdad(int pArray[], int cantidadElementos){
    int retornoEdadMayor;
    int i;
    for(i=0; i<cantidadElementos; i++){
       if(i==0 || retornoEdadMayor < pArray[i]){
           retornoEdadMayor = pArray[i];
       }
    }
    return retornoEdadMayor;
}

int sacarMenorEdad(int pArray[], int cantidadElementos){
    int retornoEdadMenor;
    int i;
    for(i=0; i<cantidadElementos; i++){
       if(i==0 || retornoEdadMenor > pArray[i]){
           retornoEdadMenor = pArray[i];
       }
    }
    return retornoEdadMenor;
}

float sacarPromedio(int pArray[], int cantidadElementos){
    float retornoPromedio;
    int sumaEdades;

    sumaEdades = sacarSumaEdades(pArray,cantidadElementos);
    retornoPromedio =(float)sumaEdades/cantidadElementos;

    return retornoPromedio;
}

int sacarRepetidos(int pArray[], int cantidadElementos,int valorRepetido){
    int contadorRepeticiones;
    int i;

    contadorRepeticiones=0;

    for(i=0; i<cantidadElementos; i++){
       if(pArray[i]==valorRepetido){
        contadorRepeticiones++;
       }
    }

    return contadorRepeticiones;
}

void mostrarAparicionesEntero(int pArray[], int cantidadElementos, int datoBuscado){
	int i;

	printf("El dato se repite en los Indices: \n");
	for(i=0; i<cantidadElementos;i++){
		if(pArray[i]==datoBuscado){
			printf("|%d|\n" , i);
		}
	}
}

int inicializarArray(int pArray[], int cantidadElementos){
	int retorno = -1;
	int i;
	if(pArray != NULL && cantidadElementos > 0)
	{
		retorno = 0;
		for(i=0;i<cantidadElementos;i++)
		{
			pArray[i] = -1;
		}
	}
	return retorno;
}

int cargarArray(int pArray[], int cantidadElementos){
	int retorno = -1;
	int i;
	if(pArray != NULL && cantidadElementos > 0)
	{
		retorno = 0;
		for(i=0;i<cantidadElementos;i++)
		{
			printf("Ingrese Edad: ");
			scanf("%d",&pArray[i]);
		}
	}
	return retorno;
}

int cantidadElementosCargados(int pArray[], int cantidadElementos){
	int cantidadCargados;
	int i;

	cantidadCargados = 0;
	for(i=0; i<cantidadElementos;i++){
	if(pArray[i] != -1){
		cantidadCargados++;
		}
	}
	return cantidadCargados;
}

int cantidadElementosVacios(int pArray[], int cantidadElementos){
		int cantidadVacios;
		int i;

		cantidadVacios = 0;
		for(i=0; i<cantidadElementos;i++){
		if(pArray[i] == -1){
			cantidadVacios++;
			}
		}
		return cantidadVacios;
}


float promedioEdadesCargadas(int pArray[], int cantidadElementos){
		int i;
		float retornoPromedio;
	    int sumaEdades;

	    for(i=0;i<cantidadElementos;i++){
	    	if(pArray[i] != -1){
	    		sumaEdades = sacarSumaEdades(pArray,cantidadElementos);
	    	}
	    }
	    retornoPromedio = sacarPromedio(pArray,cantidadElementos);

	    return retornoPromedio;
}

void indiceElementosVacios(int pArray[], int cantidadElementos){
	int i;

	printf("Indice de datos vacios: \n");
		for(i=0; i<cantidadElementos;i++){
			if(pArray[i] =! -1){
				printf("|%d|\n" , i);
			}
		}
}

