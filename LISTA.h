/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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

//N° 1
// Precondición: Memoria disponible
// Entrada:
// Salida: Una lista
// Postcondición: Se crea una lista en memoria
Lista crearLista();

//N° 2
// Precondición:La lista tiene que ser válida
// Entrada:Una lista
// Salida:Un boolean(True:Está vacía/False:Contiene uno o más nodos)
// Postcondición:Se determina si la lista está vacía o no
int esListaVacia(Lista listaIngresada);

//N° 3
// Precondición:La lista tiene que ser válida y el nodo tiene que ser válido
// Entrada: Una lista y un nodo
// Salida: Un boolean(True:El nodo fue insertado con éxito al principio de la lista/False:error en la inserción)
// Postcondición:Se agrega un nuevo nodo al inicio de la lista.
int insertarNodoInicioDeLista(Lista listaIngresada, Nodo nuevoNodo);

// 04  
// Precondición:La lista tiene que ser válida, el nodo tiene que ser válido y la posición debe ser un entero positivo
// Entrada: Una lista, un nodo y una posición
// Salida: Un boolean (True:El nodo fue insertado con exito en la posicion indicada / False:error en la insercion)
// Postcondición: Se agrega un nuevo nodo en la posicion indicada de la lista.
int inserteNodoPosicionLista (Lista *cabecera, Nodo nuevoNodo);

//05
// Precondición:La lista tiene que ser válida y el nodo tiene que ser válido 
// Entrada: Una lista y un nodo
// Salida: Un boolean (True:El nodo fue insertado con exito al final de la lista / False:error en la insercion)
// Postcondición: Se agrega un nuevo nodo en el final  de la lista.
void insertarNodoFinalLista (Lista *cabecera, Nodo nuevoNodo);

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
Nodo leer_Nodo_en_posicion_lista (Lista cabecera, int posicion);

// 08
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Una copia del nodo
// Postcondición: Se obtiene una copia del nodo ultimo de la lista
Nodo leer_Nodo_final_lista (Lista cabecera);

// 09
// Precondición:La lista tiene que ser válida
// Entrada: Una lista
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
// Postcondición:La lista sin el nodo de la posción dada.
Lista eliminar_Nodo_inicio_lista (Lista *cabecera);
#endif /* LISTA_H */

