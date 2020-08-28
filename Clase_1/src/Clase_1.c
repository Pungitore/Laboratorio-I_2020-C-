/*
 ============================================================================
 Name        : Clase_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : CLASE 1 LAB
 	 	 	 	 Se piden 5 edades enteras, mostrar:
					a-promedio
					b- la edad maxima
					c- la edad minima
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// \n

int main(void) {
	setbuf(stdout,NULL);

	int edad;
	int acumuladorEdad;
	float promedioEdad;
	int edadMaxima;
	int edadMinima;
	int i;

	acumuladorEdad = 0;

	    for(i = 0; i<5; i++){

	        printf("Ingrese edad: ");
	        scanf("%d", &edad);

	        acumuladorEdad += edad;

	        if(i == 0){
	           edadMaxima = edad;
	           edadMinima = edad;
	        }
	        else
	        {
	            if (edad > edadMaxima)
	            {
	            edadMaxima = edad;
	            }

	            if (edad < edadMinima)
	            {
	            edadMinima = edad;
	            }
	        }

	        }

	    promedioEdad = (float)acumuladorEdad/i;

	    printf("\nEl promedio de las edades son: %.1f" , promedioEdad);
	    printf("\nEdad Maxima: %d" , edadMaxima);
	    printf("\nEdad Minima: %d" , edadMinima);

	return EXIT_SUCCESS;
}
