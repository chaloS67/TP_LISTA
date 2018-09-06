
#include "LISTA.h"


// 04  
// Precondici�n:La lista tiene que ser v�lida, el nodo tiene que ser v�lido y la posici�n debe ser un entero positivo
// Entrada: Una lista, un nodo y una posici�n
// Salida: Un boolean (True:El nodo fue insertado con exito en la posicion indicada / False:error en la insercion)
// Postcondici�n: Se agrega un nuevo nodo en la posicion indicada de la lista.
int inserteNodoPosicionLista (Lista *cabecera, Nodo nuevoNodo, int posicion) {
    if (posicion > (*cabecera)->cantidadNodos){
        //insertarNodoPosicionLista
    } else {
        Nodo nodoAuxiliar;
        int i;
        nodoAuxiliar = (*cabecera).primerNodo;
        /* Tras posicionarse en el primero nodo
         * se va corriendo de uno en uno hasta la posicion deseada
         */
        for (i = 1; i < posicion-1 ; i++) {
            nodoAuxiliar = (*nodoAuxiliar).siguiente;
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

