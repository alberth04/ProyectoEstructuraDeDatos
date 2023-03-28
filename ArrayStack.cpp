#include"iostream"
#include "ArrayStack.h"
#include "Simbolo.h"
using namespace std;

//Constructor
ArrayStack::ArrayStack(){
}

//Agrega un elemento objeto en la parte superior de la pila, siempre y cuando la pila no est� llena.
void ArrayStack::push(Object* objeto){
	if (size < MAX_SIZE)
		this->data [size++] = objeto;
}

// Devuelve el elemento superior de la pila sin quitarlo de la pila, siempre y cuando la pila no est� vac�a.
Object* ArrayStack::top(){
	if (!isEmpty())
		return data [size - 1];
	return nullptr;
}

//Quita y devuelve el elemento superior de la pila, siempre y cuando la pila no est� vac�a.
Object* ArrayStack::pop(){
	if (!isEmpty()){
		Object* temp = data [--size];
		data [size] = nullptr;
		return temp;
	}
	return nullptr;
}

//Vac�a o elimina todos los elementos de la pila
void ArrayStack::clear(){
	while (!isEmpty())
		data [--size] = nullptr;
}

//Devuelve verdadero si la pila est� vac�a; de lo contrario, devuelve falso.
bool ArrayStack::isEmpty(){
	return (size == 0);
}

//Muestra los elementos de la pila en orden de la parte superior a la inferior.
void ArrayStack::print(){
	for (int i = size - 1; i >= 0; i--)
		cout << "\t\t" << "[" << i << "] " << dynamic_cast<Simbolo*>(data[i])->getValor() << endl;
}