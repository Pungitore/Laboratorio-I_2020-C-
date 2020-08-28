/*
 ============================================================================
 Name        : Clase_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : CLASE 1 PROG: EJERCICIO 1
 1. Ingresar edad (valor entero), el sexo (F o M), y el legajo de 5 personas. Indicar:
a) Edad promedio.
b) Cantidad de mujeres
c) Cantidad de hombres
d)  Edad maxima y minima

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// \n

int main(void) {
	setbuf(stdout,NULL);

	int edad;
	char sexo;
	int legajo;
	int i;

	int acumuladorEdad;
	float promedioEdad;
	int edadMaxima;
	int edadMinima;
	int contadorHombres;
	int contadorMujeres;


	contadorHombres = 0;
	contadorMujeres = 0;
	acumuladorEdad = 0;

	    for(i = 0; i<5; i++){

	    printf("Ingrese edad: ");
	    scanf("%d", &edad);

		printf("Ingrese sexo (f o m): ");
		fflush(stdin);
		scanf("%c", &sexo);
		//tolower o toupper
	    while(sexo != 'm' && sexo != 'f'){
	    	printf("Error ! Reingrese el sexo(f o m): ");
	    	fflush(stdin);
	        scanf("%c", &sexo);
	     }

	        printf("Ingrese Legajo: ");
	        scanf("%d", &legajo);

	        acumuladorEdad += edad;





	            if (i==0 || edad > edadMaxima)
	            {
	            edadMaxima = edad;
	            }

	            if (i==0 || edad < edadMinima)
	            {
	            edadMinima = edad;
	            }


	        if(sexo == 'm'){
	        	contadorHombres++;
	        }else{
	      	    contadorMujeres++;
	        }
   }

	    promedioEdad = (float)acumuladorEdad/i;

	    printf("\nEl promedio de las edades son: %.1f" , promedioEdad);
	    printf("\nCantidad de Hombres: %d" , contadorHombres);
	    printf("\nCantidad de Mujeres: %d" , contadorMujeres);
	    printf("\nEdad Maxima: %d" , edadMaxima);
	    printf("\nEdad Minima: %d" , edadMinima);



	return EXIT_SUCCESS;
}



/* EJERCICIO ASISTENCIA

	 char letra;
	 int i;

	 for(i = 0; i<5; i++)
	 {
	        printf("\n Ingrese una letra: ");
	        fflush(stdin);
	        scanf("%c",&letra);

	        printf("\n Posicion %d - letra %c" , i , letra);
	 }

 */
