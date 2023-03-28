#include "Nodo.h"
// Se incluye la cabecera Nodo.h para definir la clase Nodo y sus metodos
#include "Nodo.h"
#include <iostream>
using namespace std;

// Constructor con un valor y sin apuntadores a nodos
Nodo::Nodo(Object* value) : value(value){

}

// Constructor con un valor y apuntador al nodo previo
Nodo::Nodo(Object* value, Nodo* prev) : value(value), prev(prev){

}

// Constructor con un valor y apuntadores a los nodos previo y siguiente
Nodo::Nodo(Object* value, Nodo* next, Nodo* prev) : value(value), next(next), prev(prev){

}

// Destructor que borra los apuntadores al siguiente nodo
Nodo::~Nodo(){
	if (next != nullptr){
		delete next;
	}
}

// Metodo para obtener el apuntador al siguiente nodo
Nodo* Nodo::getNext(){
	if (next != nullptr){
		return next;
	}
	return nullptr;
}

// Metodo para obtener el apuntador al nodo previo
Nodo* Nodo::getPrev(){
	if (prev != nullptr){
		return prev;
	}
	return nullptr;
}

// Metodo para establecer el apuntador al siguiente nodo
void Nodo::setNext(Nodo* next){
	this->next = next;
}

// Metodo para establecer el apuntador al nodo previo
void Nodo::setPrev(Nodo* prev){
	this->prev = prev;
}