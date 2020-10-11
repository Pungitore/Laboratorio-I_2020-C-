/*
 * funcionesArraysParalelos.c
 *
 *  Created on: 17 sep. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>


int buscarLibre(int parametroIsEmpty[], int cantidad){
    int i;
    int indice = -1;
    for(i=0; i<cantidad; i++){
        if(parametroIsEmpty[i] == 0){
            indice = i;
        }
    }
    return indice;
}

void InicializarEmpleados(int isEmpty[],int cantidad){
    int i;
    for(i=0;i<cantidad;i++){
        isEmpty[i] = 0;
    }
}

int menu(){
    int opcion;

        printf("1.Mostrar\n");
        printf("2.Carga Total\n");
        printf("3.Cargar un Empleado\n");
        printf("4.Borrar un Empleado\n");
        printf("5.Mostrar Empleados Borrados \n");
        printf("6.Cantidad de Espacios Libres \n");
        printf("7.Ordenar por Nombre\n");
        printf("8.Ordenar por Legajo\n");
        printf("Ingrese 10 para salir\n");
        scanf("%d",&opcion);
    return opcion;
}


void mostrarEmpleados(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++){
        if(parametroIsEmpty == 1){
            printf("%4d %8.2f %10s\n",parametroLegajo[i],parametroSueldo[i],parametroNombre[i]);
            }
        }
}

void cargarEmpleados(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad)
{
    int i;
    for(i = 0; i<cantidad;i++){
        printf("Ingrese Legajo: ");
        scanf("%d",&parametroLegajo[i]);
        printf("Ingrese Sueldo: ");
        scanf("%f",&parametroSueldo[i]);
        printf("Ingrese Nombre: ");
        fflush(stdin);
        scanf("%[^\n]",&parametroNombre[i]);
        parametroIsEmpty[i] = 1;
    }
}

void cargarUnEmpleado(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad){
	int i;
	for(i=0; i<cantidad;i++){
		  printf("Ingrese Legajo: ");
		        scanf("%d",&parametroLegajo[i]);
		        printf("Ingrese Sueldo: ");
		        scanf("%f",&parametroSueldo[i]);
		        printf("Ingrese Nombre: ");
		        fflush(stdin);
		        scanf("%[^\n]",&parametroNombre[i]);
		        parametroIsEmpty[i] = 1;
	}
}


void ordenarPorNombreEmpleados(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad)
{

}

void ordenarPorLegajoEmpleados(int parametroIsEmpty[],int parametroLegajo[], float parametroSueldo[], char parametroNombre[][20],int cantidad)
{

}
