#include <stdio.h>
#include <stdlib.h>
#include "LISTA.h"

//DECLARACION DE FUNCIONES Y PROCEDIMIENTOS
Nodo cargarDatosDeNodo();
void menuInsertar(Lista *cabecera);
void menuLecturaNodo(Lista cabecera);
void menuEliminarNodo(Lista *cabecera);

//MAIN

int main(int argc, char** argv) {

    int opcion;
    Lista cabecera;
    do {
        puts("---------------MENU---------------");
        puts("1:Crear lista\n"
                "2:Saber si es lista vacia\n"
                "3:Insertar nodo\n"
                "4:Leer nodo\n"
                "5:Eliminar nodo\n"
                "6:Destruit lista\n"
                "0:SALIR");
        puts("----------------------------------");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                cabecera = crearLista();
                puts("Lista creada");
                break;
            case 2:
                if (esListaVacia(cabecera)) {
                    puts("Esta lista esta vacia.");
                } else {
                    printf("\nEsta lista contiene %d dato(s).\n", cabecera->cantidadNodos);
                }
                break;
            case 3:
                menuInsertar(&cabecera);
                break;
            case 4:
                menuLecturaNodo(cabecera);
                break;
            case 5:
                menuEliminarNodo(&cabecera);
                break;
            case 6:
                if (destruirLista(&cabecera) == true) {
                    puts("Lista destruida");
                }
                break;
        }
    } while (opcion != 0);
    return (EXIT_SUCCESS);
}

//FUNCIONES DEL MENU
//CARGAR DATOS A UN NODO

Nodo cargarDatosDeNodo() {

    Nodo nodoCreado = malloc(sizeof (Nodo));
    limpiar();
    puts("Ingrese nombre completo");
    scanf("%19[^\n]", nodoCreado->dato.nombreCompleto);
    limpiar();
    puts("Ingrese el correo electronico");
    scanf("%19[^\n]", nodoCreado->dato.correoElectrico);
    limpiar();
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

void menuLecturaNodo(Lista cabecera) {

    Nodo nodoMostra = NULL;
    int opcion;
    int posicion;
    do {
        puts("Leer nodo\n"
                "1:leer nodo al inocio de la lista.\n"
                "2:leer nodo en una pocicion de la lista.\n"
                "3:leer nodo al final de la lista.\n"
                "0:ATRAS\n"
                "Ingrese la opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                nodoMostra = leerNodoInicioLista(cabecera);
                break;
            case 2:
                puts("En que posicion");
                scanf("%d", &posicion);
                nodoMostra = leerNodoEnPosicionLista(cabecera, posicion);
                break;
            case 3:
                nodoMostra = leerNodoFinalLista(cabecera);
                break;
        }
        if (nodoMostra) {
            printf("\nID: %d\nNombre completro: %s\nCorreo electrónico: %s\nTelefono: %li\n", nodoMostra->dato.id, nodoMostra->dato.nombreCompleto, nodoMostra->dato.correoElectrico, nodoMostra->dato.telefono);
        } else {
            puts("la lista se incuentra vacia.");
        }
    } while (opcion != 0);
}

void menuEliminarNodo(Lista *cabecera) {
    int opcion;
    int posicion;
    puts("eliminar nodo\n"
            "1:eliminar nodo al inocio de la lista.\n"
            "2:eliminar nodo en una pocicion de la lista.\n"
            "3:eliminar nodo al final de la lista.\n"
            "Ingrese la opcion: ");
    scanf("%d", &opcion);
    switch (opcion) {
        case 1:
            if (eliminarNodoInicioLista(cabecera)) {
                puts("Se a eliminado el nodo con exito.");
            } else {
                puts("No se pudo eliminar el nodo");
            }
            break;
        case 2:
            puts("Ingrese la pocicion del nodo a eliminar:");
            scanf("%d", &posicion);
            if (eliminarNodoEnPosicionLista(cabecera, posicion)) {
                puts("Se a eliminado el nodo con exito.");
            } else {
                puts("No se pudo eliminar el nodo");
            }
            break;
        case 3:
            if (eliminarNodoFinalLista(cabecera)) {
                puts("Se a eliminado el nodo con exito.");
            } else {
                puts("No se pudo eliminar el nodo");
            }
            break;
    }
}