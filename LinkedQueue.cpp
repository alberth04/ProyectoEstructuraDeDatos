#include "LinkedQueue.h"
#include "Alumno.h"
#include <iostream>

LinkedQueue::LinkedQueue(Nodo* front) : front(front) //Inicializa la cola con el primer elemento
{

}
LinkedQueue::LinkedQueue() //Inicializa la cola sin el primer elemento
{
	front = nullptr;
}
LinkedQueue::~LinkedQueue() //Borra todos los elementos de la cola antes de eliminar la cola
{
	Anula();
}
void LinkedQueue::Anula() //Borra todos los elementos de la cola
{
	while (front != nullptr){
		Dequeue();
	}
}
Nodo* LinkedQueue::Peek() //Retorna el primer elemento de la cola
{
	if (front != nullptr)
		return front;
	return nullptr;
}
void LinkedQueue::Queue(Nodo* add) //Agrega un nuevo elemento a la cola
{
	if (front == nullptr){
		front = add;
		return;
	}
	Nodo* temp = front;
	while (temp->getPrev() != nullptr){
		temp = temp->getPrev();
	}
	temp->setPrev(add);
}
void LinkedQueue::Dequeue() //Quita el primer elemento de la cola, sin afectar las que le siguen
{
	if (front != nullptr){
		if (front->getPrev() == nullptr){
			delete front;
			front = nullptr;
			return;
		}
		Nodo* temp = front->getPrev();
		temp->setNext(nullptr);
		delete front;
		front = temp;
	}
}
bool LinkedQueue::Vacia() //Retorna si la cola esta vacia
{
	return front == nullptr;
}
void LinkedQueue::Imprimir() //Imprime todos los datos dentro de los nodos de la cola
{
	Nodo* temp = front;
	while (temp != nullptr){
		cout << "\t\tAlumno: " << dynamic_cast<Alumno*>(temp->value)->getNombre() << endl;
		cout << "\t\tCuenta: " << dynamic_cast<Alumno*>(temp->value)->getNumCuenta() << endl << endl;
		temp = temp->getPrev();
	}
}