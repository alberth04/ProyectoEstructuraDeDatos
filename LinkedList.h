/**
 * @file LinkedList.h
 * @author Kevin Banegas
 * @brief Lista con Nodos
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include "Alumno.h"
#include "Nodo.h"
#include <iostream>
using namespace std;
class LinkedList{
private:
	/**
	 * @brief primer nodo.
	 *
	 */
	Nodo* first;
	/**
	 * @brief ultimo nodo
	 *
	 */
	Nodo* last;
	/**
	 * @brief el size
	 *
	 */
	int size = 0;
public:
	/**
	 * @brief Constructor de LinkedList
	 *
	 */
	LinkedList();
	/**
	 * @brief Destructor de LinkedList
	 *
	 */
	~LinkedList();
	/**
	 * @brief Inserta un objeto a la lista, en una posicion
	 *
	 * @return true Si se realiza con exito
	 * @return false No se realiza con exito
	 */
	bool insert(Object*, int);
	/**
	 * @brief Elimina todos los datos de la lista
	 *
	 */
	void Anula();
	/**
	 * @brief Recupera el objeto de la posicion dada, si existe
	 *
	 * @param pos posicion del objeto
	 * @return Object* objeto encontrado dada la posicion
	 */
	Object* recupera(int pos);
	/**
	 * @brief localiza la posicion dado un objeto
	 *
	 * @param coso objeto a localizar
	 * @return int la posicion en la que esta localizado
	 */
	int localiza(Object* coso);
	/**
	 * @brief Elimina una posicion, y reitera si se logro con exito
	 *
	 * @param pos
	 * @return true Se elimino
	 * @return false No se elimino
	 */
	bool suprime(int pos);
	/**
	 * @brief Obtiene el primer objeto de la lista
	 *
	 * @return Object* el objeto primero
	 */
	Object* primero();
	/**
	 * @brief obtiene el objeto anterior de la lista dada una posicion
	 *
	 * @param pos posicion para buscar el objeto anterior.
	 * @return Object* El objeto encontrado
	 */
	Object* anterior(int pos);
	/**
	 * @brief Imprime toda la lista
	 *
	 */
	void imprime();
	/**
	 * @brief Vacia toda la lista
	 *
	 * @return true Si se logro vaciar
	 * @return false No se logro vaciar
	 */
	bool vacio();
	/**
	 * @brief Obtiene el siguiente objeto dada una posicion
	 *
	 * @param pos la posicion a dar para encontrar el siguiente objeto
	 * @return Object* el tipo que se encontro
	 */
	Object* siguiente(int pos);
	/**
	 * @brief Coloca en orden un objeto a la lista
	 *
	 * @return true si ejecuto con exito
	 * @return false no se ejecuto con exito
	 */
	bool append(Object*);
	/**
	 * @brief Devuelve el tamano de la lista
	 * @return int el tamano de la lista
	 */
	int getSize();
};
