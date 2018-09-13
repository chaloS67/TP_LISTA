#include <stdio.h>
#include <stdlib.h>
#include "LISTA.h"

int main(int argc, char** argv) {
    
    int opcion;
    Lista cabezera;
    do{
    puts("---------------MENU---------------");
    puts("1:Crear lista\n"
            "2:Saber si es lista vacia\n"
            "3:Insertar nodo al inicio de lista\n"
            "4:Insertar nodo en posicion de lista\n"
            "5:Insertar nodo final lista\n"
            "6:Leer nodo al inicio de lista\n"
            "7:Leer nodo en posicion de lista\n"
            "8:Leer nodo final lista\n"
            "9:Eliminar nodo del inicio de lista\n"
            "10:Eliminar nodo en posicion de lista\n"
            "11:Eliminar nodo al final de la lista\n"
            "12:Destruit lista\n"
            "0:SALIR");
    scanf("%d", &opcion);
    puts("----------------------------------");
    switch(opcion){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
    }
    }while(opcion != 0);
    return (EXIT_SUCCESS);
}

