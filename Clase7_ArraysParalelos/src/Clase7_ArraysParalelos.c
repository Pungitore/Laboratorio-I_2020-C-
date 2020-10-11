/*
 ============================================================================
 Name        : Clase7_ArraysParalelos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesArraysParalelos.h"
// \n


#define LEN 5
#define VACIO 0
#define OCUPADO 1

int main(void) {
	setbuf(stdout,NULL);

	int legajos[LEN]; //= {999,888,666,555,777};
	    float sueldos[LEN]; //= {15000,30000,50000,7500,90000};
	    char nombres[LEN][20]; //= {"MARIA","JOSE","PEDRO","JEREMIAS","LAURA"};
	    int isEmpty[LEN]; //= {OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO};
	    int opcion;
	    int auxiliarIndice;
	    do{
	        opcion = menu();

	        switch(opcion){
	            case 1:
	                mostrarEmpleados(isEmpty,legajos,sueldos,nombres,LEN);
	                break;
	            case 2:
	                cargarEmpleados(isEmpty,legajos,sueldos,nombres,LEN);
	            case 3:
	            	auxiliarIndice = buscarLibre(isEmpty,LEN);
					if(auxiliarIndice >= 0)
	                {
	                    cargarUnEmpleado(isEmpty,legajos,sueldos,nombres,LEN);
	                }
	                else{
	                    printf("NO HAY MAS LUGAR!\n");
	                }
	            case 7:
	                ordenarPorNombreEmpleados(isEmpty,legajos,sueldos,nombres,LEN);
	                break;
	            case 8:
	               ordenarPorLegajoEmpleados(isEmpty,legajos,sueldos,nombres,LEN);
	            case 10:
	            break;
	        }
	    }while(opcion != 10);



	return EXIT_SUCCESS;
}
