#include "arrayList.h"
#include <iostream>


arrayList::arrayList(int capacidad){
    this->capacidad = capacidad;
    this->tamano = 0;
    this->elementos = new Object * [capacidad];
}

// Constructor por defecto
arrayList::arrayList(){
    this->capacidad = 1;
    this->tamano = 0;
    this->elementos = new Object * [capacidad];
}

// Destructor
arrayList::~arrayList(){
    anular();
    delete[] elementos;
}

// Inserta un objeto al final de la lista
void arrayList::insertar(Object* obj){
    if (tamano >= capacidad){
        capacidad = (capacidad == 0) ? 1 : capacidad * 2;
        Object** nueva_lista = new Object * [capacidad];
        for (int i = 0; i < tamano; i++){
            nueva_lista [i] = elementos [i];
        }
        delete[] elementos;
        elementos = nueva_lista;
    }
    elementos [tamano] = obj;
    tamano++;
}

// Imprime los elementos de la lista
void arrayList::imprimir() const{
    std::cout << "Elementos en la lista: " << std::endl;
    for (int i = 0; i < tamano; i++){
        std::cout << "Posicion " << i << ": " << elementos [i] << std::endl;
    }
}

// Busca un objeto en la lista y devuelve su posicion. Devuelve -1 si no se encuentra.
int arrayList::buscar(Object* elemento) const{
    for (int i = 0; i < tamano; i++){
        if (elementos [i] == (elemento)){
            return i;
        }
    }
    return -1;
}

// Elimina un objeto de la lista y devuelve true si se elimin� correctamente. 
// Devuelve false si el objeto no se encuentra en la lista.
bool arrayList::borrar(Object* elemento){
    int posicion = buscar(elemento);
    if (posicion != -1){
        for (int i = posicion; i < tamano - 1; i++){
            elementos [i] = elementos [i + 1];
        }
        tamano--;
        return true;
    }
    return false;
}

// Devuelve true si la lista esta vacia, false si tiene al menos un elemento.
bool arrayList::estaVacia() const{
    return tamano == 0;
}

// Devuelve el objeto que se encuentra en la posicion especificada.
// Si la posicion es involida, devuelve nullptr.
Object* arrayList::obtener(int posicion) const{
    if (posicion >= 0 && posicion < tamano){
        return elementos [posicion];
    }
    return nullptr;
}

// Devuelve el objeto que se encuentra en la posicion siguiente a la especificada.
// Si la posicion es invalida o es la ultima, devuelve nullptr.
Object* arrayList::siguiente(int posicion) const{
    if (posicion >= 0 && posicion < tamano - 1){
        return elementos [posicion + 1];
    }
    return nullptr;
}

// Devuelve el objeto que se encuentra en la posici�n anterior a la especificada.
// Si la posicion es invalida o es la primera, devuelve nullptr.
Object* arrayList::anterior(int posicion) const{
    if (posicion > 0 && posicion < tamano){
        return elementos [posicion - 1];
    }
    return nullptr;
}

// Elimina todos los elementos de la lista

void arrayList::anular(){
    for (int i = 0; i < tamano; i++){
        delete elementos [i];
    }
    tamano = 0;
}


// Devuelve el tamano actual de la lista
int  arrayList::getTamano(){
    return tamano;
}

