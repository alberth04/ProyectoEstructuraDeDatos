#include "LinkedList.h"
LinkedList::LinkedList(){ //Inicializa los punteros en nulos de la lista
	first = 0;
	last = 0;
	size = 0;
}

LinkedList::~LinkedList(){ //Borra todos los elementos de la lista al ser destruido 
	if (last){
		delete last;
	} else if (first){
		delete first;
	}
}

bool LinkedList::insert(Object* x, int pos){ //Inserta un nuevo Nodo en un posicion dada por el usuario
	if (pos >= 1 && pos <= size + 1){
		Nodo* newNodo = new Nodo(x);
		if (vacio()){
			first = newNodo;
			last = newNodo;
			size++;
			return true;
		}
		if (pos == size + 1){
			if (!last){
				last = newNodo;
				first->setNext(last);
				last->setPrev(first);
				size++;
				return true;
			} else{
				Nodo* temp = last;
				newNodo->setPrev(temp);
				temp->setNext(newNodo);
				last = newNodo;
				size++;
				return true;
			}
		}
		if (pos == 1){
			size++;
			Nodo* temp = first;
			temp->setPrev(newNodo);
			newNodo->setNext(first);
			first = newNodo;
			return true;
		}
		if (!vacio()){
			Nodo* temp = first;
			int i = 1;
			while (i < pos && i <= size){
				temp = temp->getNext();
				i++;
			}

			temp->getPrev()->setNext(newNodo);
			newNodo->setNext(temp);
			newNodo->setPrev(temp->getPrev());
			temp->setPrev(newNodo);

			size++;
			return true;
		}
	} else{
		return false;
	}
}

void LinkedList::Anula(){ //Borra toda la lista desde el primer elemento
	while (first != nullptr){
		Nodo* temp = first->getNext();
		first->setNext(nullptr);
		delete first;
		first = temp;
	}
}


Object* LinkedList::recupera(int pos){ //Retorna el valor de la posicion de un nodo dado por el usuario
	int num = 1;
	Nodo* temp = first;
	if (pos > size || pos <= 0){
		return nullptr;
	} else{
		while (num < pos){
			temp = temp->getNext();
			num++;
		}
		return temp->value;
	}
}

int LinkedList::localiza(Object* coso){ //Retorna la posicion de un Objeto, si ese Objeto se encuentra en la lista
	Nodo* temp = first;
	int cont = 1;
	if (vacio()){
		return -1;
	}
	do{
		if (dynamic_cast<Alumno*>(temp->value)->getNumCuenta() == dynamic_cast<Alumno*>(coso)->getNumCuenta()){
			return cont;
		}
		cont++;
		temp = temp->getNext();
	} while (temp != nullptr);
	return -1;
}

bool LinkedList::suprime(int pos){ //Borra un elemento de la lista dependiendo de la posicion dada por el usuario
	if (pos < 0 || pos > size)
		return false;
	if (pos == 1 && size == 1){
		Anula();
		size = 0;
		return true;
	}
	if (pos == 1 && size > 1){
		Nodo* temp = first;
		first = temp->getNext();
		temp->setNext(nullptr);
		delete temp;
		size--;
		return true;
	}
	if (pos == size){
		Nodo* temp = last;
		size--;
		temp->getPrev()->setNext(nullptr);
		last = temp->getPrev();
		temp->setPrev(nullptr);
		delete temp;
		return true;
	}
	Nodo* nodeSup;
	int index = 1;

	if (pos < size - pos){
		nodeSup = first;
		while (index < pos){
			nodeSup = nodeSup->getNext();
			index++;
		}
	} else{
		nodeSup = last;
		index = size;
		while (index > pos){
			nodeSup = nodeSup->getPrev();
			index--;
		}
	}
	nodeSup->getPrev()->setNext(nodeSup->getNext());
	nodeSup->getNext()->setPrev(nodeSup->getPrev());
	nodeSup->setPrev(nullptr);
	nodeSup->setNext(nullptr);
	delete nodeSup;
	size--;
	return true;

}

Object* LinkedList::primero(){ //Devuelve el primer elemento de la lista
	return size == 0 ? nullptr : first->value;
}

Object* LinkedList::anterior(int pos){ //Devuelve el elemento anterior a la posicion dada por el usuario, si existe
	if (pos< 1 || pos > size)
		return nullptr;
	if (pos == 1 || size == 0)
		return nullptr;
	int index = size;
	Nodo* temp = last;
	while (index >= pos){
		temp = temp->getPrev();
		index--;
	}
	return temp->value;
}

void LinkedList::imprime(){ //Imprime todo el contenido de los Objetos dentro de los Nodos de la lista
	Nodo* nodo = first;
	while (nodo){
		cout << "\t\tAlumno: " << dynamic_cast<Alumno*>(nodo->value)->getNombre() << endl;
		cout << "\t\tCuenta: " << dynamic_cast<Alumno*>(nodo->value)->getNumCuenta() << endl << endl;
		nodo = nodo->getNext();
	}
}

bool LinkedList::vacio(){ //Retorna un booleano para saber si la lista esta vacia o no
	return first == nullptr;
}

Object* LinkedList::siguiente(int pos){ //Devuelve el elemento siguiente a la posicion dada por el usuario, si existe
	if (pos < 0 || first == nullptr || pos == size)
		return nullptr;
	Nodo* nodo = first;
	for (int i = 1; i <= pos; i++){
		nodo = nodo->getNext();
	}
	return nodo->value;
}

bool LinkedList::append(Object* dato){ //Agrega un Objeto al final de la lista
	return insert(dato, size + 1);
}
int LinkedList::getSize(){ //Retorna el tama�o de la lista
	return size;
}