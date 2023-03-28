/**
 * @file LinkedQueue.h
 * @author Kevin Banegas
 * @brief Cola con Nodos
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include "Nodo.h"
class LinkedQueue{
public:
	/**
	 * @brief Nodo principal
	 *
	 */
	Nodo* front;
	/**
	 * @brief Constructor
	 *
	 */
	LinkedQueue(Nodo*);
	/**
	 * @brief Constructor vacio
	 *
	 */
	LinkedQueue();
	/**
	 * @brief Destructor
	 *
	 */
	~LinkedQueue();
	/**
	 * @brief Metodo que
	 *
	 */
	void Anula();
	/**
	 * @brief Metodo que muestra el primero de la cola
	 *
	 * @return Nodo* el objeto que esta en primero de la cola
	 */
	Nodo* Peek();
	/**
	 * @brief Metodo que mete objetos a la cola
	 *
	 */
	void Queue(Nodo*);
	/**
	 * @brief Metodo que saca objetos de la cola
	 *
	 */
	void Dequeue();
	/**
	 * @brief Metodo que muestra si esta vacio
	 *
	 * @return true Esta vacio
	 * @return false No esta vacio
	 */
	bool Vacia();
	/**
	 * @brief Metodo que imprime toda la cola
	 *
	 */
	void Imprimir();
};