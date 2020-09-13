/*
 ============================================================================
 Name        : Clase_1Prog_Ej1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 2
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

		int legajoHombreMasViejo;
		int legajoMujerMasJoven;

		contadorHombres = 0;
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


		        	 if ( sexo == 'm' && edad == edadMaxima)
		        	   {
		        	     legajoHombreMasViejo = legajo;
		              }

		        	 if (sexo == 'f' && edad == edadMinima)
		        	   {
		        		 legajoMujerMasJoven = legajo;
		        	   }


		        if(sexo == 'm'){
		        	contadorHombres++;
		        }

	  }

		    promedioEdad = (float)acumuladorEdad/i;

		    printf("\nEl promedio de las edades son: %.1f" , promedioEdad);
		    printf("\nCantidad de Hombres: %d" , contadorHombres);
		    printf("\nEdad Maxima: %d" , edadMaxima);
		    printf("\nEdad Minima: %d" , edadMinima);
		    printf("\nLegajo del hombre mas viejo: %d" , legajoHombreMasViejo);
		    printf("\nLegajo de la mujer mas joven: %d" , legajoMujerMasJoven);






	return EXIT_SUCCESS;
}
