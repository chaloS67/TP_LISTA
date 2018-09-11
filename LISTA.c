#include <stdio.h>
<<<<<<< HEAD
=======
#include <stdbool.h>
>>>>>>> 118b1d3368668f6e9747c889f3f415a35bb6b180
#include <stdlib.h>
#include "LISTA.h"

// 1
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

// 2
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

// 3
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
// Precondiciï¿½n:La lista tiene que ser vï¿½lida, el nodo tiene que ser vï¿½lido y la posiciï¿½n debe ser un entero positivo
// Entrada: Una lista, un nodo y una posiciï¿½n
// Salida: Un boolean (True:El nodo fue insertado con exito en la posicion indicada / False:error en la insercion)
// Postcondiciï¿½n: Se agrega un nuevo nodo en la posicion indicada de la lista.
void inserteNodoPosicionLista (Lista *cabecera, Nodo nuevoNodo, int posicion) {
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
// Precondiciï¿½n:La lista tiene que ser vï¿½lida y el nodo tiene que ser vï¿½lido 
// Entrada: Una lista y un nodo
// Salida: Un boolean (True:El nodo fue insertado con exito al final de la lista / False:error en la insercion)
<<<<<<< HEAD
// Postcondiciï¿½n: Se agrega un nuevo nodo en el final  de la lista.
void insertarNodoFinalLista (Lista *cabecera, Nodo nuevoNodo){}
=======
// Postcondición: Se agrega un nuevo nodo en el final  de la lista.
void insertarNodoFinalLista (Lista *cabecera, Nodo nuevoNodo){
    if(esListaVacia(*cabecera)== true){
        insertarNodoInicioLista(*cabecera, nuevoNodo);
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
>>>>>>> 118b1d3368668f6e9747c889f3f415a35bb6b180

// 06
// Precondiciï¿½n:La lista tiene que ser vï¿½lida 
// Entrada: Una lista
// Salida: Un nodo False:error en la insercion)
<<<<<<< HEAD
// Postcondiciï¿½n: Se obtiene una copia del nodo que esta en la cabeza de la lista
Nodo leerNodoInicioLista(Lista cabecera){}
=======
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
>>>>>>> 118b1d3368668f6e9747c889f3f415a35bb6b180

// 07
// Precondiciï¿½n:La lista tiene que ser vï¿½lida y la posiciï¿½n debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Una copia del nodo
// Postcondiciï¿½n: Se obtiene una copia del nodo segï¿½n la posicion
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
// Precondiciï¿½n:La lista tiene que ser vï¿½lida
// Entrada: Una lista
// Salida: Una copia del nodo
// Postcondiciï¿½n: Se obtiene una copia del nodo ultimo de la lista
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
// Precondiciï¿½n:La lista tiene que ser vï¿½lida
// Entrada: Una lista
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
<<<<<<< HEAD
// Postcondiciï¿½n:La lista sin el nodo de la posciï¿½n dada.
int eliminarNodoInicioLista (Lista *cabecera) {
    if (esListaVacia(*cabecera) == TRUE) {
        return FALSE;
=======
// Postcondición:La lista sin el nodo de la posción dada.
bool eliminarNodoInicioLista (Lista *cabecera) {
    if (esListaVacia(*cabecera) == true) {
        return false;
>>>>>>> 118b1d3368668f6e9747c889f3f415a35bb6b180
    } else {
        Nodo primerNodo, ultimoNodo, auxNodo;
        auxNodo = (*cabecera)->primerNodo;
        primerNodo = auxNodo->siguiente;
        ultimoNodo = auxNodo->anterior;
        primerNodo->anterior = ultimoNodo;
        ultimoNodo->siguiente = primerNodo;
        
        free(auxNodo);
        
        (*cabecera)->primerNodo = primerNodo;
        (*cabecera)->cantidadNodos -= 1;
        return true;
    }
}

<<<<<<< HEAD
// PrecondiciÃ³n:La lista tiene que ser vÃ¡lida y la posiciÃ³n debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Un boolean (TRUE:Si se borro un nodo FALSE : Si no se pudo borrar nodo
// PostcondiciÃ³n: Se obtiene una copia del nodo que esta en la cabeza de la lista

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


// PrecondiciÃ³n:La lista tiene que ser vÃ¡lida
// Entrada: Una lista
// Salida: Un boolean(True:Nodo eliminado/False:Nodo no encontrado) 
// PostcondiciÃ³n: Se obtiene una copia del nodo segÃºn la posicion
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

// PrecondiciÃ³n:La lista tiene que ser vÃ¡lida
// Entrada: Una lista
// Salida: Un boolean(True:Lista destruida) 
// PostcondiciÃ³n: Se obtiene una copia del nodo segÃºn la posicion
    
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
=======
// 10
// Precondición:La lista tiene que ser válida y la posición debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Un boolean (TRUE:Si se borro un nodo FALSE : Si no se pudo borrar nodo
// Postcondición: Se obtiene una copia del nodo que esta en la cabeza de la lista
bool eliminarNodoEnPosicionLista (Lista cabecera, int posicion){


}
>>>>>>> 118b1d3368668f6e9747c889f3f415a35bb6b180
