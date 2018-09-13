#include <stdio.h>
#include <stdlib.h>
#include "LISTA.h"

Nodo cargarDatosDeNodo();
void menuInsertar(Lista *cabecera);

int main(int argc, char** argv) {
    
    int opcion;
    Lista cabecera;
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
            cabecera = crearLista();
            break;
        case 2:
            break;
        case 3:
            menuInsertar(&cabecera);
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
//CARGAR DATOS A UN NODO
Nodo cargarDatosDeNodo(){
    
    Nodo nodoCreado;
    
    puts("Ingrese nombre completo");
    scanf("%19[^\n]", nodoCreado->dato.nombreCompleto);
    limpiar();
    puts("Ingrese el correo electronico");
    limpiar();
    scanf("%19[^\n]", nodoCreado->dato.correoElectrico);
    puts("Ingrese el id");
    scanf("%d", &nodoCreado->dato.id);
    puts("Ingrese el numero de telefono");
    scanf("%ld", &nodoCreado->dato.telefono);
    
    return nodoCreado;
}
//MENU 3

void menuInsertar(Lista *cabecera) {
    int opcion;
    Nodo nodoNuevo;

    do {
        puts("1:Insertar nodo al inicio de lista\n"
                "2:Insertar nodo en posicion de lista\n"
                "3:Insertar nodo final lista\n"
                "0:ATRAS\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                nodoNuevo = cargarDatosDeNodo();
                insertarNodoInicioLista(cabecera, nodoNuevo);
                break;
            case 2:
                nodoNuevo = cargarDatosDeNodo();
                int posicion;
                puts("En que posicion");
                scanf("%d", &posicion);
                insertarNodoPosicionLista(cabecera, nodoNuevo, posicion);
                break;
            case 3:
                nodoNuevo = cargarDatosDeNodo();
                insertarNodoFinalLista(cabecera, nodoNuevo);
                break;
        }

    } while (opcion != 0);

}
