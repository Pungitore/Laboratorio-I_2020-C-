/*
 ============================================================================
 Name        : Clase_1Prog_Ej1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 2
 1. Ingresar edad (valor entero), el sexo (F o M), y el legajo de 5 personas. Indicar:
a) Edad promedio.
b) Cantidad de mujeres
c) Cantidad de hombres
d)  Edad maxima y minima
2. Al ejercicio anterior agregar:
e) Desestimar el punto b
f) El legajo del hombre mas viejo.
g) El legajo de la mujer mas joven
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

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
