#include <stdio.h>
#include <stdlib.h>
#include "LISTA.h"

// 04  
// Precondici�n:La lista tiene que ser v�lida, el nodo tiene que ser v�lido y la posici�n debe ser un entero positivo
// Entrada: Una lista, un nodo y una posici�n
// Salida: Un boolean (True:El nodo fue insertado con exito en la posicion indicada / False:error en la insercion)
// Postcondici�n: Se agrega un nuevo nodo en la posicion indicada de la lista.
void inserteNodoPosicionLista (Lista *cabecera, Nodo nuevoNodo, int posicion) {
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

// 07
// Precondici�n:La lista tiene que ser v�lida y la posici�n debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Una copia del nodo
// Postcondici�n: Se obtiene una copia del nodo seg�n la posicion
Nodo leerNodoEnPosicionLista (Lista cabecera, int posicion) {
    if (esListaVacia(cabecera) == TRUE) {
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
    if (esListaVacia(cabecera) == TRUE) {
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
    if (esListaVacia(*cabecera) == TRUE) {
        return FALSE;
    } else {
        Nodo primerNodo, ultimoNodo, auxNodo;
        auxNodo = (*cabecera)->primerNodo;
        primerNodo = auxNodo->siguiente;
        ultimoNodo = auxNodo->anterior;

        free(auxNodo);

        primerNodo->anterior = ultimoNodo;
        ultimoNodo->siguiente = primerNodo;
        cabecera->primerNodo = primerNodo;
        (*cabecera)->cantidadNodos -= 1;
        return TRUE;
    }
}

// Precondición:La lista tiene que ser válida y la posición debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Un boolean (TRUE:Si se borro un nodo FALSE : Si no se pudo borrar nodo
// Postcondición: Se obtiene una copia del nodo que esta en la cabeza de la lista

int eliminarNodoEnPosicionLista (Lista *cabecera ,int pos){
    int i;
    if (pos > cabecera-> cantidadNodos ){
        return (FALSE);
    }else{
        Nodo anteriorNodo, auxNodo, siguienteNodo;
        
        anteriorNodo = lista-> primerNodo;
        
        for (i = 1; i < pos-1; i++) {
            anteiorNodo = anteriorNodo-> siguiente;}
        
        auxNodo = anteriorNodo-> siguiente;
        siguienteNodo= auxNodo-> siguiente;
        free(auxNodo);
        anteriorNodo ->siguiente = siguienteNodo;
        siguienteNodo -> anterior = anteriorNodo;
        cabecera->cantidadNodos = cabecera ->cantidadNodos -1;
        return (TRUE);
        }

    }


// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean(True:Nodo eliminado/False:Nodo no encontrado) 
// Postcondición: Se obtiene una copia del nodo según la posicion
int eliminarNodoFinalLista (Lista *cabecera){
    if (esListaVacia(Lista cabecera)) {
        return (FALSE);
    }else{
        Nodo primerNodo, ultimoNodo, auxNodo;
        primerNodo = cabecera ->primerNodo;
        auxNodo = primerNodo ->anterior;
        ultimoNodo = auxNodo ->anterior;
        
        free (auxNodo);
        
        ultimoNodo ->siguiente = primerNodo ->anterior;
        primerNodo ->anterior = ultimoNodo;
        cabecera ->cantidadNodos = cabecera ->cantidadNodos -1;
        return (TRUE);
    }

// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean(True:Lista destruida) 
// Postcondición: Se obtiene una copia del nodo según la posicion
    
int destruirLista (Lista *cabecera){
    if (esListaVacia(Lista cabecera)){
        free(cabecera);
        return (TRUE);
    }else{
        while (cabecera != NULL){
            eliminarNodoInicioLista(cabecera)}
        free (cabecera);
        return(TRUE);}
    }
    
  }

}