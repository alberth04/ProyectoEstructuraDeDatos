/**
 * @file ArrayQueue.cpp
 * @author Alberth Godoy
 * @brief Cola con Arreglos
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "ArrayQueue.h"
#include <iostream>
#include "Alumno.h"
using namespace std;
/**
 * @brief Constructor que inicializa las variables primero, ultimo en -1 y coloca la el tamano del arreglo
 *
 */
ArrayQueue::ArrayQueue(){
	primero = -1;
	ultimo = -1;
	arreglo [numMaximo];
}
/**
 * @brief Destructor Destruye el arreglo
 *
 */
ArrayQueue::~ArrayQueue(){
	for (size_t i = 0; i <= ultimo; i++){
		delete arreglo [i];
	}
}
/**
 * @brief Metodo encolar pide un objeto, detecta si no esta lleno, sino mete a la cola
 *
 * @param dato el objeto a meter en la estructura cola
 */
void ArrayQueue::encolar(Object* dato){
	try{
		if (ultimo == numMaximo - 1){
			throw exception("Esta llena la fila");
		} else{
			primero = 0;
			ultimo++;
			arreglo [ultimo] = dato;
		}
	} catch (exception e){
		cerr << "\t\t" << e.what() << endl;
	}
}
/**
 * @brief Metodo para desencolar un objeto, osea, sacarlo de la cola,  verifica si esta vacio o si solo hay uno en la cola
 *
 */
void ArrayQueue::desencolar(){
	try{
		if (isVacio()){
			throw exception("Esta vacio la cola");
		} else if (primero == 0 && ultimo == 0){
			delete arreglo [ultimo];
			ultimo--;
			primero--;
		} else{
			arreglo [primero] = NULL;
			for (size_t i = 0; i <= ultimo; i++){
				arreglo [i] = arreglo [i + 1];
			}
			ultimo--;
		}
	} catch (exception e){
		cerr << "\t\t" << e.what() << endl;
	}

}
/**
 * @brief Metodo que muestra el primero de la cola
 *
 * @return Object* es el objeto que esta al frente
 */
Object* ArrayQueue::verFrente(){
	try{
		if (isVacio()){
			throw exception("Esta vacio");
		} else{
			return arreglo [primero];
		}
	} catch (exception e){
		cerr << "\t\t" << e.what() << endl;
	}

}
/**
 * @brief Detecta si la cola esta vacia o no
 *
 *
 * @return true Esta vacia
 * @return false  No esta Vacia
 */
bool ArrayQueue::isVacio(){
	return (primero == -1 && ultimo == -1);
}
/**
 * @brief Imprime la cola, si esta llena o almenos contiene un objeto
 *
 */
void ArrayQueue::imprimirCola(){
	try{
		if (isVacio()){
			throw exception("Esta vacio no hay nada que imprimir\n");
		} else{
			for (size_t i = 0; i <= ultimo; i++){
				cout << "\t\t[" << i << "] " << dynamic_cast<Alumno*> (arreglo [i])->getNombre() << " [" << dynamic_cast<Alumno*> (arreglo [i])->getNumCuenta() << "]" << endl;
			}
		}

	} catch (exception e){
		cout << "\t\t" << e.what() << endl;
	}

}
/**
 * @brief Borra todos los elementos de la cola
 *
 */
void ArrayQueue::borrarElementos(){
	try{
		if (isVacio()){
			throw exception("Esta vacio no hay nada que eliminar\n");
		} else{
			for (size_t i = 0; i <= ultimo; i++){
				delete arreglo [i];
			}
			ultimo = -1;
			primero = -1;
		}
	} catch (exception e){
		cout << "\t\t" << e.what() << endl;
	}

}

