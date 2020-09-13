/*
 ============================================================================
 Name        : Clase6_CadenasEjercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout,NULL);

		char nombre[20];
	    char apellido[20];
	    char apellidoYNombre[41];
	    int lenApellidoYNombre;
	    int i;

	    //opcion 1 char apellidoYNombre[41];
	   	//strcpy(apellidoNombre,apellido);
	    //opcion 2 char apellidoYNombre[41];
	    //strcpy(apellidoNombre,apellido)

	    printf("Ingrese Nombre: ");
	    fflush(stdin);
	    gets(nombre);

	    printf("Ingrese Apellido: ");
	    fflush(stdin);
	    gets(apellido);


	    //Concatenados Apellido, Nombre
	    strcpy(apellidoYNombre,apellido);
	    strcat(apellidoYNombre,", ");
	    strcat(apellidoYNombre,nombre);

	    lenApellidoYNombre = strlen(apellidoYNombre);
	    apellidoYNombre[0] = toupper(apellidoYNombre[0]);

	    for(i=0; i<lenApellidoYNombre;i++){
	    	if(isspace(apellidoYNombre[i]))
	    		{
	    	   apellidoYNombre[i+1] = toupper(apellidoYNombre[i+1]);
	    	    }
	    }

	    puts(apellidoYNombre);




	return EXIT_SUCCESS;
}
