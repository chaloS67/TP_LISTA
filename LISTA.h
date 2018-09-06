
/* 
 * File:   LISTA.h
 * Author: gonzalo
 *
 * Created on 6 de septiembre de 2018, 16:31
 */

#ifndef LISTA_H
#define LISTA_H
#define TRUE 1
#define FALSE 0

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

// 07
// Precondición:La lista tiene que ser válida y la posición debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Una copia del nodo
// Postcondición: Se obtiene una copia del nodo según la posicion
Nodo leerNodoEnPosicionLista (Lista cabecera, int posicion);

// 08
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Una copia del nodo
// Postcondición: Se obtiene una copia del nodo ultimo de la lista
Nodo leerNodoFinalLista (Lista cabecera);

// 09
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
// Postcondición:La lista sin el nodo de la posción dada.
int eliminarNodoInicioLista (Lista *cabecera);

// 10
// Precondición:La lista tiene que ser válida 
// Entrada: Una lista
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
// Postcondición:La lista sin el nodo de la posción dada.
int eliminarNodoInicioLista(Lista listaCabecera);

// 11
// Precondición:La lista tiene que ser válida y la posición debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Un boolean (TRUE:Si se borro un nodo FALSE : Si no se pudo borrar nodo
// Postcondición: Se obtiene una copia del nodo que esta en la cabeza de la lista
int eliminarNodoEnPosicionLista (lista listaCabecera, int posicion);

//12
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Una copia del nodo 
// Postcondición: Se obtiene una copia del nodo ultimo de la lista
int leerNodoFinalLista (Lista listaCabecera);

#endif /* LISTA_H */