
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

// 1
// Precondici�n: Memoria disponible
// Entrada:
// Salida: Una lista
// Postcondici�n: Se crea una lista en memoria
Lista crearLista();

// 2
// Precondici�n:La lista tiene que ser v�lida
// Entrada:Una lista
// Salida:Un boolean(True:Est� vac�a/False:Contiene uno o m�s nodos)
// Postcondici�n:Se determina si la lista est� vac�a o no

int esListaVacia(Lista cabecera);


// 3
// Precondici�n:La lista tiene que ser v�lida y el nodo tiene que ser v�lido
// Entrada: Una lista y un nodo
// Salida: Un boolean(True:El nodo fue insertado con �xito al principio de la lista/False:error en la inserci�n)
// Postcondici�n:Se agrega un nuevo nodo al inicio de la lista.
void insertarNodoInicioLista(Lista cabecera, Nodo nuevoNodo);

// 4
// Precondici�n:La lista tiene que ser v�lida, el nodo tiene que ser v�lido y la posici�n debe ser un entero positivo
// Entrada: Una lista, un nodo y una posici�n
// Salida: Un boolean (True:El nodo fue insertado con exito en la posicion indicada / False:error en la insercion)
// Postcondici�n: Se agrega un nuevo nodo en la posicion indicada de la lista.

void insertarNodoEnPosicionLista(Lista cabecera, Nodo nuevoNodo, int posicion);

// 5
// Precondici�n:La lista tiene que ser v�lida y el nodo tiene que ser v�lido 
// Entrada: Una lista y un nodo
// Salida: Un boolean (True:El nodo fue insertado con exito al final de la lista / False:error en la insercion)
// Postcondici�n: Se agrega un nuevo nodo en el final  de la lista.

void insertarNodoFinalLista(Lista *cabecera, Nodo nuevoNodo);

// 6
// Precondici�n:La lista tiene que ser v�lida 
// Entrada: Una lista
// Salida: Un nodo False:error en la insercion)
// Postcondici�n: Se obtiene una copia del nodo que esta en la cabeza de la lista

Nodo leerNodoInicioLista(Lista cabecera);


// 07
// Precondici�n:La lista tiene que ser v�lida y la posici�n debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Una copia del nodo
// Postcondici�n: Se obtiene una copia del nodo seg�n la posicion
Nodo leerNodoEnPosicionLista (Lista cabecera, int posicion);

// 08
// Precondici�n:La lista tiene que ser v�lida
// Entrada: Una lista
// Salida: Una copia del nodo
// Postcondici�n: Se obtiene una copia del nodo ultimo de la lista
Nodo leerNodoFinalLista (Lista cabecera);

// 09
// Precondici�n:La lista tiene que ser v�lida
// Entrada: Una lista
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
// Postcondici�n:La lista sin el nodo de la posci�n dada.
int eliminarNodoInicioLista (Lista *cabecera);

// 10
// Precondici�n:La lista tiene que ser v�lida y la posici�n debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Un boolean (TRUE:Si se borro un nodo FALSE : Si no se pudo borrar nodo
// Postcondici�n: Se obtiene una copia del nodo que esta en la cabeza de la lista
int eliminarNodoEnPosicionLista (Lista *cabecera, int posicion);

// 11
// Precondici�n:La lista tiene que ser v�lida
// Entrada: Una lista
// Salida: Una copia del nodo 
// Postcondici�n: Se obtiene una copia del nodo ultimo de la lista
int leerNodoFinalLista (Lista cabecera);

#endif /* LISTA_H */
