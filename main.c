#include <stdio.h>
#include "funciones.h"
int main (int argc, char *argv[]) {
    char nombres[5][20];
    int edad[5];
    char estado[5][20];
    int opc;
    int numalumnos;
    leernombreedadestado(nombres[5][20], edad[5], estado[5][20]);
    imprimirdatos(nombres[5][20],  edad[5],  estado[5][20]);

    printf("Ingrese la opcion que desea realizar:\n1.Para buscar por el estado civil\n2.Para buscar por la edad");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
       printf("Ingrese el estado civil que desea enontrar: ");
       buscaredad(nombres[5][20],  edad[5],  estado[5][20]);
        break;
    case 2:
        printf("Ingrese la edad que desea enontrar: ");

        break;
    
    default:
        break;
    }
    printf("Desea otra opcion:\n1.Si\n2.No ");
    int otraopcion;
    scanf("%d",&otraopcion);
    if (otraopcion=1)
    {
        
    }
    

    return 0;
}