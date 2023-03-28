/**
 * @file Nodo.h
 * @author Kevin Banegas
 * @brief Clase Nodo
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include "Object.h"
class Nodo{
public:
	/**
	 * @brief Valor del nodo
	 *
	 */
	Object* value;
	/**
	 * @brief Puntero al siguiente nodo
	 *
	 */
	Nodo* next;
	/**
	 * @brief Puntero al nodo anterior
	 *
	 */
	Nodo* prev;

	/**
	 * @brief Retorna el puntero al siguiente nodo
	 *
	 * @return Nodo* El nodo retornado
	 */
	Nodo* getNext();
	/**
	 * @brief Retorna el puntero al nodo anterior
	 *
	 * @return Nodo*  El nodo anterior retornado
	 */
	Nodo* getPrev();
	/**
	 * @brief Establece el puntero al siguiente nodo
	 *
	 */
	void setNext(Nodo*);
	/**
	 * @brief Establece el puntero al nodo anterior
	 *
	 */
	void setPrev(Nodo*);
	/**
	 * @brief Constructor con un objeto como parametro
	 *
	 */
	Nodo(Object*);
	/**
	 * @brief Constructor con un objeto y el siguiente nodo como parametros
	 *
	 */
	Nodo(Object*, Nodo*);
	/**
	 * @brief Constructor con un objeto, el siguiente nodo y el nodo anterior como parametros
	 *
	 */
	Nodo(Object*, Nodo*, Nodo*);
	/**
	 * @brief Destructor
	 *
	 */
	~Nodo();
};