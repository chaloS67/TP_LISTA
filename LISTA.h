
/* 
 * File:   LISTA.h
 * Author: gonzalo
 *
 * Created on 6 de septiembre de 2018, 16:31
 */

#ifndef LISTA_H
#define LISTA_H

struct dato {
    int dato;
} typedef Dato;

struct nodo {
    Nodo *anterior;
    Dato dato;
    Nodo *siguiente;
} typedef Nodo;

struct lista {
    int cantidadNodos;
    Nodo *primerNodo;
} typedef Lista;

// Precondici�n:La lista tiene que ser v�lida 
// Entrada: Una lista
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
// Postcondici�n:La lista sin el nodo de la posci�n dada.
int eliminarNodoInicioLista(Lista listaCabecera);

// Precondici�n:La lista tiene que ser v�lida y la posici�n debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Un boolean (TRUE:Si se borro un nodo FALSE : Si no se pudo borrar nodo
// Postcondici�n: Se obtiene una copia del nodo que esta en la cabeza de la lista
int eliminarNodoEnPosicionLista (lista listaCabecera, int posicion);


// Precondici�n:La lista tiene que ser v�lida
// Entrada: Una lista
// Salida: Una copia del nodo 
// Postcondici�n: Se obtiene una copia del nodo ultimo de la lista
int leerNodoFinalLista (Lista listaCabecera);

#endif /* LISTA_H */