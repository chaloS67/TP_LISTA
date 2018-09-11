#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "LISTA.h"

// 1
// Precondici�n: Memoria disponible
// Entrada:
// Salida: Una lista
// Postcondici�n: Se crea una lista en memoria
Lista crearLista(){
    Lista cabecera = malloc(sizeof(Lista));
    
    cabecera->primerNodo = NULL;
    cabecera->cantidadNodos = 0;
    
    return cabecera;
}

// 2
// Precondici�n:La lista tiene que ser v�lida
// Entrada:Una lista
// Salida:Un boolean(True:Est� vac�a/False:Contiene uno o m�s nodos)
// Postcondici�n:Se determina si la lista est� vac�a o no

bool esListaVacia(Lista cabecera){

    if(cabecera->cantidadNodos == 0 && cabecera->primerNodo == NULL){
        return true;
    }else{
        return false;
    }
}

// 3
// Precondici�n:La lista tiene que ser v�lida y el nodo tiene que ser v�lido
// Entrada: Una lista y un nodo
// Salida: Un boolean(True:El nodo fue insertado con �xito al principio de la lista/False:error en la inserci�n)
// Postcondici�n:Se agrega un nuevo nodo al inicio de la lista.
void insertarNodoInicioLista(Lista cabecera, Nodo nuevoNodo){



}






// 04  
// Precondici�n:La lista tiene que ser v�lida, el nodo tiene que ser v�lido y la posici�n debe ser un entero positivo
// Entrada: Una lista, un nodo y una posici�n
// Salida: Un boolean (True:El nodo fue insertado con exito en la posicion indicada / False:error en la insercion)
// Postcondici�n: Se agrega un nuevo nodo en la posicion indicada de la lista.
int inserteNodoPosicionLista (Lista *cabecera, Nodo nuevoNodo, int posicion) {
    if (posicion > (*cabecera).cantidadNodos){
        //insertarNodoPosicionLista
    } else {
        Nodo nodoAuxiliar;
        int i;
        nodoAuxiliar = (*cabecera).primerNodo;
        /* Tras posicionarse en el primero nodo
         * se va corriendo de uno en uno hasta la posicion deseada
         */
        for (i = 1; i < posicion-1 ; i++) {
            nodoAuxiliar = nodoAuxiliar.siguiente;
        }
       
    }
}

// 05
// Precondici�n:La lista tiene que ser v�lida y el nodo tiene que ser v�lido 
// Entrada: Una lista y un nodo
// Salida: Un boolean (True:El nodo fue insertado con exito al final de la lista / False:error en la insercion)
// Postcondici�n: Se agrega un nuevo nodo en el final  de la lista.
void insertarNodoFinalLista (Lista *cabecera, Nodo nuevoNodo){}

// 06
// Precondici�n:La lista tiene que ser v�lida 
// Entrada: Una lista
// Salida: Un nodo False:error en la insercion)
// Postcondici�n: Se obtiene una copia del nodo que esta en la cabeza de la lista
Nodo leerNodoInicioLista(Lista cabecera){}

// 07
// Precondici�n:La lista tiene que ser v�lida y la posici�n debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Una copia del nodo
// Postcondici�n: Se obtiene una copia del nodo seg�n la posicion
Nodo leerNodoEnPosicionLista (Lista cabecera, int posicion) {
    if (posicion > cabecera.cantidadNodos) {
        return NULL;
    } else {
        int i;
        Nodo auxNodo;
        auxNodo = cabecera->primerNodo;
        for (i = 1; i < posicion; i++) {
            auxNodo = auxNodo->siguiente;
        }
        return auxNodo;
    }
}

// 08
// Precondici�n:La lista tiene que ser v�lida
// Entrada: Una lista
// Salida: Una copia del nodo
// Postcondici�n: Se obtiene una copia del nodo ultimo de la lista
Nodo leerNodoFinalLista (Lista cabecera) {
    if (esListaVacia(cabecera) == true) {
        return NULL;
    } else {
        Nodo auxNodo;
        auxNodo = cabecera->primerNodo;
        auxNodo = auxNodo->anterior;
        return auxNodo;
    }
}

// 09
// Precondici�n:La lista tiene que ser v�lida
// Entrada: Una lista
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
// Postcondici�n:La lista sin el nodo de la posci�n dada.
int eliminarNodoInicioLista (Lista *cabecera) {
    if (esListaVacia(*cabecera) == true) {
        return false;
    } else {
        Nodo primerNodo, ultimoNodo, auxNodo;
        auxNodo = (*cabecera)->primerNodo;
        primerNodo = auxNodo->siguiente;
        ultimoNodo = auxNodo->anterior;
        primerNodo->anterior = ultimoNodo;
        ultimoNodo->siguiente = primerNodo;
        
        free(auxNodo);
        
        cabecera->primerNodo = primerNodo;
        (*cabecera)->cantidadNodos -= 1;
        return true;
    }
}
