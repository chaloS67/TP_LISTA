#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "LISTA.h"

// 01
// Precondición: Memoria disponible
// Entrada:
// Salida: Una lista
// Postcondición: Se crea una lista en memoria
Lista crearLista(){
    Lista cabecera = malloc(sizeof(Lista));
    
    cabecera->primerNodo = NULL;
    cabecera->cantidadNodos = 0;
    
    return cabecera;
}

// 02
// Precondición:La lista tiene que ser válida
// Entrada:Una lista
// Salida:Un boolean(True:Está vacía/False:Contiene uno o más nodos)
// Postcondición:Se determina si la lista está vacía o no

bool esListaVacia(Lista cabecera){

    if(cabecera->cantidadNodos == 0 && cabecera->primerNodo == NULL){
        return true;
    }else{
        return false;
    }
}

// 03
// Precondición:La lista tiene que ser válida y el nodo tiene que ser válido
// Entrada: Una lista y un nodo
// Salida: Un boolean(True:El nodo fue insertado con éxito al principio de la lista/False:error en la inserción)
// Postcondición:Se agrega un nuevo nodo al inicio de la lista.
void insertarNodoInicioLista(Lista *cabecera, Nodo nuevoNodo){
    if(esListaVacia(*cabecera)== true){
        (*cabecera)->cantidadNodos = 1;       
        (*cabecera)->primerNodo = nuevoNodo;
        nuevoNodo->anterior = nuevoNodo;
        nuevoNodo->siguiente = nuevoNodo;
    }else{
        Nodo primerNodo, ultimoNodo;            // No son variables, SINO que referencias a los nodos de la lista

        primerNodo = (*cabecera)->primerNodo;
        ultimoNodo = primerNodo->anterior;
        
        nuevoNodo->siguiente = primerNodo;
	nuevoNodo->anterior = ultimoNodo;
	ultimoNodo->siguiente = nuevoNodo;
	primerNodo->anterior = nuevoNodo;

	(*cabecera)->primerNodo = nuevoNodo;
	(*cabecera)->cantidadNodos++;
    }
}
// 04  
// Precondición:La lista tiene que ser válida, el nodo tiene que ser válido y la posición debe ser un entero positivo
// Entrada: Una lista, un nodo y una posición
// Salida: Un boolean (True:El nodo fue insertado con exito en la posicion indicada / False:error en la insercion)
// Postcondición: Se agrega un nuevo nodo en la posicion indicada de la lista.
int inserteNodoPosicionLista (Lista *cabecera, Nodo nuevoNodo, int posicion) {
    if (posicion > (*cabecera)->cantidadNodos){
        //insertarNodoPosicionLista
    } else {
        Nodo nodoAuxiliar;
        int i;
        nodoAuxiliar = (*cabecera)->primerNodo;
        /* Tras posicionarse en el primero nodo
         * se va corriendo de uno en uno hasta la posicion deseada
         */
        for (i = 1; i < posicion-1 ; i++) {
            nodoAuxiliar = nodoAuxiliar->siguiente;
        }
       
    }
}

// 05
// Precondición:La lista tiene que ser válida y el nodo tiene que ser válido 
// Entrada: Una lista y un nodo
// Salida: Un boolean (True:El nodo fue insertado con exito al final de la lista / False:error en la insercion)
// Postcondición: Se agrega un nuevo nodo en el final  de la lista.
void insertarNodoFinalLista (Lista *cabecera, Nodo nuevoNodo){
    if(esListaVacia(*cabecera)== true){
        insertarNodoInicioLista(cabecera, nuevoNodo);
    }else{
        Nodo primerNodo, ultimoNodo;            // No son variables, SINO que referencias a los nodos de la lista

        primerNodo = (*cabecera)->primerNodo;
        ultimoNodo = primerNodo->anterior;
        
        nuevoNodo->siguiente = primerNodo;
	nuevoNodo->anterior = ultimoNodo;
	ultimoNodo->siguiente = nuevoNodo;
	primerNodo->anterior = nuevoNodo;

	(*cabecera)->cantidadNodos++;
    }
}

// 06
// Precondición:La lista tiene que ser válida 
// Entrada: Una lista
// Salida: Un nodo False:error en la insercion)
// Postcondición: Se obtiene una copia del nodo que esta en la cabeza de la lista
Nodo leerNodoInicioLista(Lista cabecera){
    if (esListaVacia(cabecera) == true) {
        return NULL;
    } else {
        Nodo auxNodo;
        auxNodo = cabecera->primerNodo;
        return auxNodo;
    }

}

// 07
// Precondición:La lista tiene que ser válida y la posición debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Una copia del nodo
// Postcondición: Se obtiene una copia del nodo según la posicion
Nodo leerNodoEnPosicionLista (Lista cabecera, int posicion) {
    if (posicion > cabecera->cantidadNodos) {
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
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Una copia del nodo
// Postcondición: Se obtiene una copia del nodo ultimo de la lista
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
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
// Postcondición:La lista sin el nodo de la posción dada.
bool eliminarNodoInicioLista (Lista *cabecera) {
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
        
        (*cabecera)->primerNodo = primerNodo;
        (*cabecera)->cantidadNodos--;
        return true;
    }
}

// 10
// Precondición:La lista tiene que ser válida y la posición debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Un boolean (TRUE:Si se borro un nodo FALSE : Si no se pudo borrar nodo
// Postcondición: Se obtiene una copia del nodo que esta en la cabeza de la lista
bool eliminarNodoEnPosicionLista (Lista *cabecera, int posicion){
    
    int i;
    
    if(posicion > (*cabecera)->cantidadNodos){
        return false;
    }else{
        Nodo anteriorNodo, siguienteNodo, auxNodo;
        
        anteriorNodo = (*cabecera)->primerNodo;
                
        for (i = 0; i < posicion-1; i++) {
            anteriorNodo = anteriorNodo->siguiente;
        }
        auxNodo = anteriorNodo->siguiente;
        siguienteNodo = auxNodo->siguiente;
        
        free(auxNodo);
        
        anteriorNodo->siguiente = siguienteNodo;
        siguienteNodo->anterior = anteriorNodo;
        
        (*cabecera)->cantidadNodos--;
        return true;
    }
}

// 11
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean(True:Nodo eliminado/False:Nodo no encontrado) 
// Postcondición: Se obtiene una copia del nodo según la posicion
bool eliminarNodoFinalLista(Lista *cabecera){
    if (esListaVacia(*cabecera) == true) {
        return false;
    } else {
        Nodo primerNodo, ultimoNodo, auxNodo;
        primerNodo = (*cabecera)->primerNodo;
        auxNodo = primerNodo->anterior;
        ultimoNodo =auxNodo->anterior;
        
        free(auxNodo);
        ultimoNodo->siguiente = primerNodo;
        primerNodo->anterior = ultimoNodo;
        (*cabecera)->cantidadNodos--;        
    }
}

// 12
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean(True:Lista destruida) 
// Postcondición: Se obtiene una copia del nodo según la posicion
bool destruirLista(Lista *cabecera){
    if(esListaVacia(*cabecera)== true){
        free(cabecera);
        return true;
    }else{
        while(cabecera != NULL){
            eliminarNodoInicioLista(cabecera);
        }
        free(cabecera);
        return true;
    }
    return false;
}
