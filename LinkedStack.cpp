#include "LinkedStack.h"
#include <iostream>
#include "LinkedStack.h"
using namespace std;
//constructor que inicializa el puntero al tope de la pila como NULL.
LinkedStack::LinkedStack(){
    top = NULL;
}
//destructor que borra el nodo en el tope de la pila (y todos los nodos debajo de el) si no esta vacia.
LinkedStack::~LinkedStack(){
    if (!estaVacia()){
        Nodo* temp = top;
        top = top->getPrev();
        delete temp;

    }
}
//metodo que agrega un nuevo nodo con el valor especificado en el tope de la pila.
void LinkedStack::push(Object* dato){
    Nodo* nuevo_nodo = new Nodo(dato);
    nuevo_nodo->setNext(top);
    top = nuevo_nodo;
}
//metodo que elimina el nodo en el tope de la pila.
void LinkedStack::pop(){
    if (top == nullptr){
        return;
    }
    Nodo* temp = (top)->next;
    if (top != nullptr){
        (top)->prev = nullptr;
    }

    top = temp;
}
//metodo que devuelve un puntero al nodo en el tope de la pila sin eliminarlo.
Nodo* LinkedStack::peek(){
    if (top == NULL){
        cout << "La pila esta vacia." << endl;
        return nullptr;
    }

    return top;
}
//metodo que imprime todos los valores almacenados en los nodos de la pila, comenzando desde el tope.
void LinkedStack::imprimir(){
    if (top == NULL){
        cout << "La pila esta vacia." << endl;
        return;
    }

    Nodo* temp = top;
    while (temp != NULL){
        cout << temp->value << " ";
        temp = temp->getNext();
    }

    cout << endl;
}
//metodo que devuelve true si la pila esta vacia y false si tiene al menos un elemento.

bool LinkedStack::estaVacia(){
    return top == NULL;
}
