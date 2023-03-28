/**
 * @file ArrayQueue.h
 * @author Alberth Godoy
 * @brief Clase de Cola con arreglos
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include "Object.h"
 /**
  * \brief constante que representa el numero maximo del arreglo
  *
  */
const int numMaximo = 100;

class ArrayQueue{
private:
	/**
	 * \brief valor primero representa el primero de la fila
	 *
	 */
	int primero;
	/**
	 * \brief valor ultimo representa el ultimo de la fila
	 *
	 */
	int ultimo;

	/**
	 * \brief es un arreglo de objetos
	 */
	Object* arreglo [numMaximo];
public:

	/**
	 * \brief Es metodo constructor de arrayQueue
	 *
	 */
	ArrayQueue();
	/**
	 * \brief Destructor de ArrayQueue
	 *
	 */
	~ArrayQueue();
	/**
	 * \brief Metodo que toma un objeto y lo coloca en la cola
	 *
	 * @param dato Es el objeto a colocar
	 */
	void encolar(Object* dato);
	/**
	 * \brief metodo que saca al primero de la cola
	 *
	 */
	void desencolar();
	/**
	 * \brief metodo que retorna el primer de la fila
	 *
	 * @return Object* El objeto que esta primero en la fila.
	 */
	Object* verFrente();
	/**
	 * \brief Metodo que retorna si la cola esta vacia o no
	 *
	 * @return true Esta vacia la cola.
	 * @return false No esta vacia la cola.
	 */
	bool isVacio();
	/**
	 * \brief Metodo que imprime la Cola y todos los objetos
	 *
	 */
	void imprimirCola();
	/**
	 * \brief Borra los elementos de la cola
	 *
	 */
	void borrarElementos();
};


