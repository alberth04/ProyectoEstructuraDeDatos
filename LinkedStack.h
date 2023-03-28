/**
 * @file LinkedStack.h
 * @author Wilmer Zuniga
 * @brief
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#pragma once
#include "Nodo.h"
#include "Simbolo.h"

class LinkedStack{
private:
    /**
     * @brief Es el nodo top
     *
     */
    Nodo* top;
public:
    /**
     * @brief Constructor de la clase que inicializa el miembro top a NULL.
     *
     */
    LinkedStack();
    /**
     * @brief Destructor de la clase que libera la memoria asignada al objeto top, si existe.
     *
     */
    ~LinkedStack();
    /**
     * @brief Agrega un nuevo nodo con el dato especificado al inicio de la pila.
     *
     * @param dato el dato que se agregara
     */
    void push(Object* dato);
    /**
     * @brief elimina el nodo en el inicio de la pila, si existe.
     *
     */
    void pop();
    /**
     * @brief Devuelve el nodo en el inicio de la pila, sin eliminarlo.
     *
     * @return Nodo*
     */
    Nodo* peek();
    /**
     * @brief Imprime en consola los datos almacenados en la pila, en orden de inicio a fin.
     *
     */
    void imprimir();
    /**
     * @brief devuelve true si la pila esta vacia, false en caso contrario.
     *
     * @return true Si esta vacia
     * @return false No esta vacia
     */
    bool estaVacia();
};
