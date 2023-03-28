/**
 * @file arrayList.h
 * @author Wilmer Zuniga
 * @brief Clase de lista con arreglos
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#define LISTA_H
#include "Object.h"

class arrayList{
private:
    /**
     * @brief representa la capacidad de los elementos
     *
     */
    int capacidad;
    /**
     * @brief Es el atributo size
     *
     */
    int tamano;
    /**
     * @brief Elementos de la lista
     *
     */
    Object** elementos;

public:
    /**
     * @brief Constructor sin par�metros de la clase Lista
     * Crea una lista con capacidad inicial igual a 1
     */
    arrayList();
    /**
     * @brief Constructor con parametro de la clase Lista
     * Crea una lista con capacidad inicial especificada
     * @param capacidad capacidad de la lista
     */
    arrayList(int capacidad);
    /**
     * @brief Destructor de la clase Lista
     *
     */
    ~arrayList();

    /**
     * @brief Inserta un elemento en la lista
     *
     * @param elemento el elemento a insertar
     */
    void insertar(Object* elemento);
    /**
     * @brief Imprime los elementos de la lista
     *
     */
    void imprimir() const;

    /**
     * @brief busca un objeto dado por el programa
     *
     * @param elemento El elemento a buscar
     * @return int retorna la posicion donde esta ese elemento
     */
    int buscar(Object* elemento) const;

    /**
     * @brief Borra un elemento si se encuenta
     *
     * @param elemento El objeto que desea eliminar
     * @return true Si encuentra el elemnto lo borrar
     * @return false Si no advierte que no lo encontro
     */
    bool borrar(Object* elemento);

    /**
     * @brief devuelve un boolean segun si la lista esta vacia
     *
     * @return true Esta vacia la lista
     * @return false No esta vacia la lista
     */
    bool estaVacia() const;

    /**
     * @brief Obtiene un objeto en una posicion
     *
     * @param posicion La posicion del objeto que desea ver
     * @return Object* El objetp que esta en dicha posicion
     */
    Object* obtener(int posicion) const;

    /**
     * @brief Obtiene el objeto siguiente a una posicion
     *
     * @param posicion Posicion para buscar el siguiente
     * @return Object* Devuelve el siguiente dada la posicion que agrego
     */
    Object* siguiente(int posicion) const;
    /**
     * @brief Obtiene el objeto anterior a una posicion
     *
     * @param posicion Posicion para buscar el anterior
     * @return Object* Devuelve el anterior dado la posicion que agrego
     */
    Object* anterior(int posicion) const;

    /**
     * @brief Anula la lista
     *
     */
    void anular();

    /**
     * @brief Devuelve el tamano actual de la lista
     *
     * @return int el valor del tamano
     */
    int getTamano();
};