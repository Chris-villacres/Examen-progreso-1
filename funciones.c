#include <stdio.h>
#include "funciones.h"


void leernombreedadestado(char nombres[5][20], int edad[5], char estado[5][20]){
        int i;
        printf("Ingrese el nombre de la persona:");
        scanf("%s",&nombres[i]);
        printf("Ingrese la edad:");
        scanf("%d",&edad[i]);
        printf("Ingrese el estado civil:");
        scanf("%s",&estado[i]);
}

void imprimirdatos(char nombres[5][20], int edad[5], char estado[5][20]){
    int i;
    printf("%s\t\tnombres\t\tedad\t\testado\n");
    printf("%d\t\t%s\t\t%f\t\t%s\n", nombres[i], edad[i], estado[i]);
}

void buscaredad(char nombres[5][20], int edad[5], char estado[5][20]){
    int edadbuscar;
    int i;
    for ( i = 0; i < 5; i++)
    {
        (strcmp(edad[i], edadbuscar) ==0);
        return 1; 
    }
    
}

