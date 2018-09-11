
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
    struct nodo *anterior;
    Dato dato;
    struct nodo *siguiente;
} typedef *Nodo;

struct lista {
    int cantidadNodos;
    Nodo primerNodo;
} typedef *Lista;

// 1
// Precondiciï¿½n: Memoria disponible
// Entrada:
// Salida: Una lista
// Postcondiciï¿½n: Se crea una lista en memoria
Lista crearLista();

// 2
// Precondiciï¿½n:La lista tiene que ser vï¿½lida
// Entrada:Una lista
// Salida:Un boolean(True:Estï¿½ vacï¿½a/False:Contiene uno o mï¿½s nodos)
// Postcondiciï¿½n:Se determina si la lista estï¿½ vacï¿½a o no

bool esListaVacia(Lista cabecera);


// 3
// Precondiciï¿½n:La lista tiene que ser vï¿½lida y el nodo tiene que ser vï¿½lido
// Entrada: Una lista y un nodo
<<<<<<< HEAD
// Salida: Un boolean(True:El nodo fue insertado con ï¿½xito al principio de la lista/False:error en la inserciï¿½n)
// Postcondiciï¿½n:Se agrega un nuevo nodo al inicio de la lista.
void insertarNodoInicioLista(Lista cabecera, Nodo nuevoNodo);
=======
// Salida: Un boolean(True:El nodo fue insertado con éxito al principio de la lista/False:error en la inserción)
// Postcondición:Se agrega un nuevo nodo al inicio de la lista.
void insertarNodoInicioLista(Lista *cabecera, Nodo nuevoNodo);
>>>>>>> 118b1d3368668f6e9747c889f3f415a35bb6b180

// 4
// Precondiciï¿½n:La lista tiene que ser vï¿½lida, el nodo tiene que ser vï¿½lido y la posiciï¿½n debe ser un entero positivo
// Entrada: Una lista, un nodo y una posiciï¿½n
// Salida: Un boolean (True:El nodo fue insertado con exito en la posicion indicada / False:error en la insercion)
// Postcondiciï¿½n: Se agrega un nuevo nodo en la posicion indicada de la lista.

void insertarNodoEnPosicionLista(Lista cabecera, Nodo nuevoNodo, int posicion);

// 5
// Precondiciï¿½n:La lista tiene que ser vï¿½lida y el nodo tiene que ser vï¿½lido 
// Entrada: Una lista y un nodo
// Salida: Un boolean (True:El nodo fue insertado con exito al final de la lista / False:error en la insercion)
// Postcondiciï¿½n: Se agrega un nuevo nodo en el final  de la lista.

void insertarNodoFinalLista(Lista *cabecera, Nodo nuevoNodo);

// 6
// Precondiciï¿½n:La lista tiene que ser vï¿½lida 
// Entrada: Una lista
// Salida: Un nodo False:error en la insercion)
// Postcondiciï¿½n: Se obtiene una copia del nodo que esta en la cabeza de la lista

Nodo leerNodoInicioLista(Lista cabecera);


// 07
// Precondiciï¿½n:La lista tiene que ser vï¿½lida y la posiciï¿½n debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Una copia del nodo
// Postcondiciï¿½n: Se obtiene una copia del nodo segï¿½n la posicion
Nodo leerNodoEnPosicionLista (Lista cabecera, int posicion);

// 08
// Precondiciï¿½n:La lista tiene que ser vï¿½lida
// Entrada: Una lista
// Salida: Una copia del nodo
// Postcondiciï¿½n: Se obtiene una copia del nodo ultimo de la lista
Nodo leerNodoFinalLista (Lista cabecera);

// 09
// Precondiciï¿½n:La lista tiene que ser vï¿½lida
// Entrada: Una lista
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
<<<<<<< HEAD
// Postcondiciï¿½n:La lista sin el nodo de la posciï¿½n dada.
int eliminarNodoInicioLista (Lista *cabecera);
=======
// Postcondición:La lista sin el nodo de la posción dada.
bool eliminarNodoInicioLista (Lista *cabecera);
>>>>>>> 118b1d3368668f6e9747c889f3f415a35bb6b180

// 10
// Precondiciï¿½n:La lista tiene que ser vï¿½lida y la posiciï¿½n debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Un boolean (TRUE:Si se borro un nodo FALSE : Si no se pudo borrar nodo
<<<<<<< HEAD
// Postcondiciï¿½n: Se obtiene una copia del nodo que esta en la cabeza de la lista
int eliminarNodoEnPosicionLista (Lista *cabecera, int posicion);

// 11
// Precondiciï¿½n:La lista tiene que ser vï¿½lida
// Entrada: Una lista
// Salida: Una copia del nodo 
// Postcondiciï¿½n: Se obtiene una copia del nodo ultimo de la lista
int leerNodoFinalLista (Lista cabecera);
=======
// Postcondición: Se obtiene una copia del nodo que esta en la cabeza de la lista
bool eliminarNodoEnPosicionLista (Lista cabecera, int posicion);

//11
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean(True:Nodo eliminado/False:Nodo no encontrado) 
// Postcondición: Se obtiene una copia del nodo según la posicion
bool eliminarNodoFinalLista(Lista cabecera);

//12
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean(True:Lista destruida) 
// Postcondición: Se obtiene una copia del nodo según la posicion
bool destruirLista(Lista cabecera);
>>>>>>> 118b1d3368668f6e9747c889f3f415a35bb6b180

#endif /* LISTA_H */
