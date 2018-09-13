/* 
 * File:   LISTA.h
 * Author: gonzalo
 *
 * Created on 6 de septiembre de 2018, 16:31
 */

#ifndef LISTA_H
#define LISTA_H
#define CARACTERES_MAX 20

struct dato {
    int id;
    char nombreCompleto[CARACTERES_MAX];
    char correoElectrico[CARACTERES_MAX];
    long int telefono;
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

// 01
// Precondición: Memoria disponible
// Entrada:
// Salida: Una lista
// Postcondición: Se crea una lista en memoria
Lista crearLista();

// 02
// Precondición:La lista tiene que ser válida
// Entrada:Una lista
// Salida:Un boolean(True:Está vacía/False:Contiene uno o más nodos)
// Postcondición:Se determina si la lista está vacía o no
bool esListaVacia(Lista cabecera);


// 03
// Precondición:La lista tiene que ser válida y el nodo tiene que ser válido
// Entrada: Una lista y un nodo
// Salida: Un boolean(True:El nodo fue insertado con éxito al principio de la lista/False:error en la inserción)
// Postcondición:Se agrega un nuevo nodo al inicio de la lista.
void insertarNodoInicioLista(Lista *cabecera, Nodo nuevoNodo);

// 04
// Precondición:La lista tiene que ser válida, el nodo tiene que ser válido y la posición debe ser un entero positivo
// Entrada: Una lista, un nodo y una posición
// Salida: Un boolean (True:El nodo fue insertado con exito en la posicion indicada / False:error en la insercion)
// Postcondición: Se agrega un nuevo nodo en la posicion indicada de la lista.
void insertarNodoEnPosicionLista(Lista cabecera, Nodo nuevoNodo, int posicion);

// 05
// Precondición:La lista tiene que ser válida y el nodo tiene que ser válido 
// Entrada: Una lista y un nodo
// Salida: Un boolean (True:El nodo fue insertado con exito al final de la lista / False:error en la insercion)
// Postcondición: Se agrega un nuevo nodo en el final  de la lista.
void insertarNodoFinalLista(Lista *cabecera, Nodo nuevoNodo);

// 06
// Precondición:La lista tiene que ser válida 
// Entrada: Una lista
// Salida: Un nodo False:error en la insercion)
// Postcondición: Se obtiene una copia del nodo que esta en la cabeza de la lista
Nodo leerNodoInicioLista(Lista cabecera);

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
bool eliminarNodoInicioLista (Lista *cabecera);

// 10
// Precondición:La lista tiene que ser válida y la posición debe ser un entero positivo
// Entrada: Una lista y una posicion
// Salida: Un boolean (TRUE:Si se borro un nodo FALSE : Si no se pudo borrar nodo
// Postcondición: Se obtiene una copia del nodo que esta en la cabeza de la lista
bool eliminarNodoEnPosicionLista (Lista *cabecera, int posicion);

//11
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean(True:Nodo eliminado/False:Nodo no encontrado) 
// Postcondición: Se obtiene una copia del nodo según la posicion
bool eliminarNodoFinalLista(Lista *cabecera);

//12
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean(True:Lista destruida) 
// Postcondición: Se obtiene una copia del nodo según la posicion
bool destruirLista(Lista *cabecera);

#endif /* LISTA_H */
