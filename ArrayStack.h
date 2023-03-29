/**
 * @file ArrayStack.h
 * @author Walther Aguirre
 * @brief Clase de Pila con arreglos
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include "Object.h"
 /**
  * @brief valor constante representa el maximo del arreglo
  *
  */
const int MAX_SIZE = 1000;
class ArrayStack{
private:
	/**
	 * @brief atributo arreglo de objetos
	 *
	 */
	Object* data [MAX_SIZE];
	/**
	 * @brief atributo size de la pila
	 *
	 */
	int size = 0;
public:
	/**
	 * @brief Metodo Constructor
	 *
	 */
	ArrayStack();
	/**
	 * @brief Destructor
	 *
	 */
	~ArrayStack();
	/**
	 * @brief Metodo que Agrega un elemento objeto en la parte superior de la pila, siempre y cuando la pila no este llena.
	 *
	 */
	void push(Object*);
	/**
	 * @brief Metodo que regresa el elemento superior de la pila sin quitarlo de la pila, siempre y cuando la pila no este vacia.
	 *
	 * @return Object* El objeto a retornar
	 */
	Object* top();
	/**
	 * @brief Metodo que quita y devuelve el elemento superior de la pila, siempre y cuando la pila no este vacia.
	 *
	 * @return Object*
	 */
	Object* pop();
	/**
	 * @brief Metodo que devuelve verdadero si la pila esta vacia; de lo contrario, devuelve falso.
	 *
	 * @return true si esta vacia
	 * @return false si no esta vacia
	 */
	bool isEmpty();
	/**
	 * @brief Metodo que muestra los elementos de la pila en orden de la parte superior a la inferior.
	 *
	 */
	void print();
	/**
	 * @brief Metodo que vacia o elimina todos los elementos de la pila
	 *
	 */
	void clear();

};
