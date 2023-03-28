/**
 * @file ProyectoEstructuraDeDatos.cpp
 * @author Alberth Godoy
 * 			Kevin Banegas
 * 			Walther Aguirre
 * 			Wilmer
 * @brief Creacion de un proyecto, donde se ejecute en practica la realizacion
 * de Listas, Colas, Pilas, 1 con arreglo y otra con nodos.
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include "Object.h"
#include "string"
#include "Alumno.h"
#include "ArrayQueue.h"
#include "ArrayStack.h"
#include "Simbolo.h"
#include "arrayList.h"
#include "LinkedStack.h"
#include "LinkedList.h"
#include "LinkedQueue.h"
using namespace std;
/**
 * @brief Metodo que valida si las opciones al colocar pone un int
 *
 * @param number numero que ingreso
 * @param rango es para no mas estetica se ve que en el proyecto se muestra que el programa va hacia la derecha
 */
void validateInputNumber(int& number, int rango);
/**
 * @brief Metodo para entrar a la cola con arreglos
 *
 * @param opcionExtra es la opcion que coloca el usuario
 */
void colasArrayQueue(int& opcionExtra);
/**
 * @brief Metodo para entrar a la cola usando nodos
 *
 * @param opcionExtra es la opcion que coloca el usuario
 */
void colasLinkedQueue(int& opcionExtra);
/**
 * @brief Metodo que entra al arreglo de Pilas
 *
 * @param opcionExtra es la opcion que coloca el usuario
 */
void pilasArrayStack(int& opcionExtra);
/**
 * @brief Metodo que entra a las pilas usando nodos
 *
 * @param opcionExtra es la opcion que coloca el usuario
 */
void pilasLinkedStack(int& opcionExtra);
/**
 * @brief Metodo que entra al arreglo de lista
 *
 * @param opcionExtra es la opcion que coloca el usuario
 */
void listaArrayList(int& opcionExtra);
/**
 * @brief Metodo que entra a la lista con nodos
 *
 * @param opcionExtra es la opcion que coloca el usuario
 */
void listaLinkedList(int& opcionExtra);
/**
 * @brief Variable que instancia la lista con arreglo
 *
 */
ArrayQueue arrayQueue;
/**
 * @brief Variable de instanciar de arreglo de pilas
 *
 */
ArrayStack arrayStack;
/**
 * @brief Variable que instancia un arreglo de listas
 *
 */
arrayList arrayList;
/**
 * @brief Variable que instancia una pila con nodos
 *
 */
LinkedStack linkedStack;
/**
 * @brief Variable que instancia una lista con nodos
 *
 */
LinkedList* linkedList = new LinkedList();
/**
 * @brief Variable que instancia una cola con nodos
 *
 */
LinkedQueue* lqueue = new LinkedQueue();

/**
 * @brief Metodo Main
 *
 * @return int
 */
int main(){

	setlocale(LC_ALL, "spanish");
	int opcionMenu = 0;
	int opcionLista = 0;
	int opcionExtra = 0;

	//ciclo repetitivo
	do{
		//Desplega el menu principal
		cout << "============MENU_PRINCIPAL================\n"
			"1.) Trabajar con Listas\n"
			"2.) Trabajar con Pilas\n"
			"3.) Trabajar con Colas\n"
			"4.) Salir\n";
		cout << "Ingrese su opcion: ";
		//valida que sea un numero el valor sea un numero;
		validateInputNumber(opcionMenu, 0);
		cout << "==========================================\n";
		//Elige la opcion
		switch (opcionMenu){
			//Caso Trabajar con Listas
			case 1:
				//Menu Trabajar con Listas
				do{
					//Despliega el menu listas
					cout << "\n\t=========MENU_LISTAS=================\n"
						"\t1.) Trabajar con ArrayList\n"
						"\t2.) Trabajar con LinkedList\n"
						"\t3.) Regresar al menu Principal\n";
					cout << "\tIngrese su opcion: ";
					//valida la entrada
					validateInputNumber(opcionLista, 1);
					cout << "\t=====================================\n";
					//elige la opcion
					switch (opcionLista){
						case 1:
							//ciclo repetitivo
							do{
								listaArrayList(opcionExtra);
							} while (opcionExtra != 10);
							break;
						case 2:
							//ciclo repetitivo
							do{
								listaLinkedList(opcionExtra);
							} while (opcionExtra != 10);
							break;
						case 3:
							cout << "\tregresando al menu principal.......\n"
								"\t=====================================\n\n";
							break;
						default:
							cerr << "\tFuera de rango\n";
							break;
					}

				} while (opcionLista != 3);
				break;
				//Trabajar Con Pilas
			case 2:
				//ciclo repetitivo
				do{
					//despluego el menu pilas
					cout << "\n\t=========MENU_PILAS=================\n"
						"\t1.) Trabajar con ArrayStack\n"
						"\t2.) Trabajar con LinkedStack\n"
						"\t3.) Regresar al menu Principal\n";
					cout << "\tIngrese su opcion: ";
					validateInputNumber(opcionLista, 1);
					cout << "\t=====================================\n";
					switch (opcionLista){
						case 1:
							//ciclo repetitivo
							do{
								pilasArrayStack(opcionExtra);
							} while (opcionExtra != 7);
							break;
						case 2:
							//ciclo repetitivo
							do{
								pilasLinkedStack(opcionExtra);
							} while (opcionExtra != 7);
							break;
						case 3:
							cout << "\tregresando al menu principal.......\n"
								"\t=====================================\n\n";
							break;
						default:
							cerr << "\tFuera de rango\n";
							break;
					}
				} while (opcionLista != 3);
				break;
				//Trabajar Con Colas.
			case 3:
				do{
					//despluego el menu pilas
					cout << "\n\t=========MENU_COLAS=================\n"
						"\t1.) Trabajar con ArrayQueue\n"
						"\t2.) Trabajar con LinkedQueue\n"
						"\t3.) Regresar al menu Principal\n";
					cout << "\tIngrese su opcion: ";
					validateInputNumber(opcionLista, 1);
					cout << "\t=====================================\n";
					switch (opcionLista){
						case 1:
							//ciclo repetitivo
							do{
								colasArrayQueue(opcionExtra);
							} while (opcionExtra != 7);
							break;
						case 2:
							//ciclo repetitivo
							do{
								colasLinkedQueue(opcionExtra);
							} while (opcionExtra != 7);
							break;
						case 3:
							cout << "\tregresando al menu principal.......\n"
								"\t=====================================\n\n";
							break;
						default:
							cerr << "\tFuera de rango\n";
							break;
					}
				} while (opcionLista != 3);
				break;
			case 4:
				//Sale del Programa
				cout << "Gracias por usar el programa";
				delete linkedList;
				delete lqueue;
				break;
				//Fuera de Rango
			default:
				cerr << "No existe esa opcion.\n";
				break;

		}
		//Termina el ciclo
	} while (opcionMenu != 4);
}//FIN MAIN
//FIN MAIIIIIIIIIIIIIIIIIIIIINNNN

//Metodo que valida las opciones del usuario
void validateInputNumber(int& number, int rango){
	while (!(cin >> number)){
		switch (rango){
			case 0:
				//despliega que hay error.
				cerr << "Valor incorrecto ingrese denuevo\n";
				cout << "Ingrese su opcion: ";
				//limpia el input anterior.
				cin.clear();
				//evita ciertos problemas
				cin.ignore(123, '\n');
				break;
			case 1:
				//despliega que hay error.
				cerr << "\tValor incorrecto ingrese denuevo\n";
				cout << "\tIngrese su opcion: ";
				//limpia el input anterior.
				cin.clear();
				//evita ciertos problemas
				cin.ignore(123, '\n');
				break;
			case 2:
				//despliega que hay error.
				cerr << "\t\tValor incorrecto ingrese denuevo\n";
				cout << "\t\tIngrese su opcion: ";
				//limpia el input anterior.
				cin.clear();
				//evita ciertos problemas
				cin.ignore(123, '\n');
				break;
		}

	}
}
void colasArrayQueue(int& opcionExtra){
	//Despliega el menu de ArrayStack
	cout << "\n\t\t===============MENU_ARRAYQUEUE==================\n"
		"\t\t1.) Encolar\n"
		"\t\t2.) Desencolar\n"
		"\t\t3.) Ver Frente\n"
		"\t\t4.) Verificar si esta vacio\n"
		"\t\t5.) Imprimir Elementos\n"
		"\t\t6.) Eliminar Elementos\n"
		"\t\t7.) Regresar al menu anterior\n";
	cout << "\t\tIngrese su opcion: ";
	//valida la opcion
	validateInputNumber(opcionExtra, 2);
	string nombre;
	int numCuenta;
	Alumno* alumno;
	switch (opcionExtra){
		//Metodo Encolar
		case 1:
			//Pide los datos del usuario y crea un alumno, luego lo ingresa al arrayQueue

			cout << "\t\tIngrese el nombre del Alumno: ";
			cin.ignore();
			getline(cin, nombre);
			cout << "\t\tIngrese el numero de cuenta del alumno: ";
			cin >> numCuenta;
			alumno = new Alumno(nombre, numCuenta);
			arrayQueue.encolar(alumno);
			break;
			//Metodo Desencolar
		case 2:
			arrayQueue.desencolar();
			break;
			//Metodo Ver Frente
		case 3:
			if (arrayQueue.isVacio()){
				arrayQueue.verFrente();
			} else{
				cout << "\t\t" << dynamic_cast<Alumno*>(arrayQueue.verFrente())->getNombre() << " [" << dynamic_cast<Alumno*>(arrayQueue.verFrente())->getNumCuenta() << "]" << " es el primero.\n";
			}

			break;
			//Metodo verificar si esta vacio
		case 4:
			if (arrayQueue.isVacio()){
				cout << "\t\tEsta vacion\n";
			} else{
				cout << "\t\tNo esta vacio\n";
			}
			break;
			//Metodo Imprimir Elementos
		case 5:
			arrayQueue.imprimirCola();
			break;
		case 6:
			//Metodo Eliminar Elementos
			arrayQueue.borrarElementos();
			break;
			//Salir al menu Anterior
		case 7:
			cout << "\t\tregresando al menu principal.......\n"
				"\t\t=====================================\n\n";
			break;
		default:
			cerr << "\t\tRango invalido\n";
			break;

	}
}

void colasLinkedQueue(int& opcionExtra){
	//Despliega el menu de LinkedQueue
	cout << "\n\t\t===============MENU_LINKEDQUEUE==================\n"
		"\t\t1.) Encolar\n"
		"\t\t2.) Desencolar\n"
		"\t\t3.) Ver Frente\n"
		"\t\t4.) Verificar si esta vacio\n"
		"\t\t5.) Imprimir Elementos\n"
		"\t\t6.) Eliminar Elementos\n"
		"\t\t7.) Regresar al menu anterior\n";
	cout << "\t\tIngrese su opcion: ";
	validateInputNumber(opcionExtra, 2);
	switch (opcionExtra){
		case 1: //Agregar un alumno a la cola
		{
			string tmp;
			getline(cin, tmp);
			bool correct = false;
			while (correct == false){
				try{
					char nombre [100];
					int cuenta;
					cout << "\t\tIngrese el nombre del Alumno: ";
					cin.getline(nombre, 100);
					cout << "\t\tIngrese el numero de Cuenta: ";
					cin >> cuenta;
					lqueue->Queue(new Nodo(new Alumno(nombre, cuenta)));
					correct = true;
				} catch (exception e){
					cout << "\t\tCometi� un error al ingresar datos, intente de nuevo." << endl;
					cin.clear();
					string tmp;
					getline(cin, tmp);
				}
			}
		}
		break;
		case 2:
		{ //Elimina el primer elemento de la cola
			if (lqueue->Peek() != nullptr){
				lqueue->Dequeue();
			} else{
				cout << "\t\tEsta Vacia" << endl;
			}
		}
		break;
		case 3:
		{ //Devuelve el primer elemento de la cola
			if (lqueue->Peek() != nullptr){
				cout << "\t\tAlumno: " << dynamic_cast<Alumno*>(lqueue->Peek()->value)->getNombre() << endl;
				cout << "\t\tCuenta: " << dynamic_cast<Alumno*>(lqueue->Peek()->value)->getNumCuenta() << endl;
			} else{
				cout << "\t\tEsta Vacia" << endl;
			}
		}
		break;
		case 4:
		{ //Retorna si la cola esta vacia
			string empty = lqueue->Vacia() ? "\t\tEsta Vacia" : "\t\tNo Esta Vacia";
			cout << empty << endl;
		}
		break;
		case 5:
		{ //Imprime todos los elementos de la cola si no esta vacia
			if (lqueue->Peek() != nullptr){
				lqueue->Imprimir();
			} else{
				cout << "\t\tEsta Vacia" << endl;
			}
		}
		break;
		case 6:
		{ //Borra todos los elementos de la cola
			lqueue->Anula();
			cout << "\t\tTodos los elementos han sido eliminados de la cola." << endl;
		}
		break;
		case 7:
			cout << "\t\tregresando al menu principal.......\n"
				"\t\t=====================================\n\n";
			break;
		default:
			cerr << "Rango invalido\n";
			break;

	}
}

void pilasArrayStack(int& opcionExtra){
	//Despliega el menu de ArrayStack
	cout << "\n\t\t===============MENU_ARRAYSTACK==================\n"
		"\t\t1.) Empujar\n"
		"\t\t2.) Sacar\n"
		"\t\t3.) Ver Tope\n"
		"\t\t4.) Verificar si esta vacio\n"
		"\t\t5.) Imprimir Elementos\n"
		"\t\t6.) Eliminar Elementos\n"
		"\t\t7.) Regresar al menu anterior\n";
	cout << "\t\tIngrese su opcion: ";
	validateInputNumber(opcionExtra, 2);
	char c;
	switch (opcionExtra){
		case 1:
			cout << "\t\tIngrese un simbolo: ";
			cin >> c;
			arrayStack.push(new Simbolo(c));
			cout << "\n\t\t.............\n"
				"\t\tSe agrego a la pila con exito\n";
			break;
		case 2:
			if (!arrayStack.isEmpty()){
				cout << "\t\tSimbolo sacado de la pila: " << dynamic_cast<Simbolo*>(arrayStack.pop())->getValor() << endl;
			} else{
				cout << "\t\tLa pila se encuentra sin elementos\n";
			}
			break;
		case 3:
			if (!arrayStack.isEmpty()){
				cout << "\t\tSimbolo tope de la pila: " << dynamic_cast<Simbolo*>(arrayStack.top())->getValor() << endl;
			} else{
				cout << "\t\tLa pila se encuentra sin elementos\n";
			}
			break;
		case 4:
			cout << (arrayStack.isEmpty() ? "\t\tEsta Vacia\n" : "\t\tNo Esta Vacia\n");
			break;
		case 5:
			if (!arrayStack.isEmpty()){
				cout << "\t\tValores de la pila: " << endl;
				arrayStack.print();
			} else{
				cout << "\t\tLa pila se encuentra sin elementos\n";
			}
			break;
		case 6:
			arrayStack.clear();
			cout << "\t\tTodos los elementos de la pila han sido eliminados con exito!\n";
			break;
		case 7:
			cout << "\t\tregresando al menu principal.......\n"
				"\t\t=====================================\n\n";
			break;
		default:
			cerr << "\t\tRango invalido\n";
			break;

	}
}

void pilasLinkedStack(int& opcionExtra){
	//Despliega el menu de LinkedStack
	cout << "\n\t\t===============MENU_LINKEDSTACK==================\n"
		"\t\t1.) Empujar\n"
		"\t\t2.) Sacar\n"
		"\t\t3.) Ver Tope\n"
		"\t\t4.) Verificar si esta vacio\n"
		"\t\t5.) Imprimir Elementos\n"
		"\t\t6.) Eliminar Elementos\n"
		"\t\t7.) Regresar al menu anterior\n";
	cout << "\t\tIngrese su opcion: ";
	validateInputNumber(opcionExtra, 2);
	char c;
	switch (opcionExtra){
		case 1:{
			bool continuar = true;
			do{
				std::cout << "" << std::endl;
				std::cout << "\t\tIngrese un caracter: ";
				char c;
				std::cin >> c;
				linkedStack.push(new Simbolo(c));

				std::cout << "" << std::endl;
				std::cout << "\t\t¿Desea ingresar otro simbolo? (s/n): ";
				char respuesta;
				std::cin >> respuesta;
				if (respuesta != 's' && respuesta != 'S'){
					continuar = false;
				}
			} while (continuar);
			break;
		}
		
		case 2: 
			std::cout << "" << std::endl;
			if (!linkedStack.estaVacia()){
				linkedStack.pop();
				std::cout << "\t\tElemento sacado" << std::endl;
			} else{
				std::cout << "\t\tLa pila esta vacia" << std::endl;
			}
			break;
		case 3:
		{
			std::cout << "" << std::endl;

			if (!linkedStack.estaVacia()){
				Nodo* elemento = linkedStack.peek();
				Simbolo* simbolo = dynamic_cast<Simbolo*>(elemento->value);

				std::cout << "\t\tTope de la pila: " << simbolo->getValor() << std::endl;
			} else{
				std::cout << "\t\tLa pila esta vacia" << std::endl;
			}
			break;
		}
		case 4:
		{
			std::cout << "" << std::endl;
			if (linkedStack.estaVacia()){
				std::cout << "\t\tLa pila esta vacia" << std::endl;
			} else{
				std::cout << "\t\tLa pila no esta vacia" << std::endl;
			}
			break;
		}

		case 5:
		{
			std::cout << "" << std::endl;
			std::cout << "\t\tElementos en la pila: \n";
			Nodo* elemento = linkedStack.peek();
			int cont = 0;
			while (elemento != NULL){
				Simbolo* simbolo = dynamic_cast<Simbolo*>(elemento->value);
				std::cout << "\t\t" << "[" << cont++ << "] " << simbolo->getValor() << "\n";
				elemento = elemento->getNext();
			}
			std::cout << std::endl;
			break;
		}
		case 6:
		{
			std::cout << "" << std::endl;
			linkedStack.~LinkedStack();
			std::cout << "\t\tLa pila ha sido vaciada" << std::endl;
			break;
		}
		case 7:
			cout << "\t\tregresando al menu principal.......\n"
				"\t\t=====================================\n\n";
			break;
		default:
			cerr << "\t\tRango invalido\n";
			break;

	}
}

void listaArrayList(int& opcionExtra){
	//Despliega el menu de ArrayList
	cout << "\n\t\t===============MENU_ARRAYLIST==================\n"
		"\t\t1.) Insertar Elemento\n"
		"\t\t2.) Imprimir Elementos\n"
		"\t\t3.) Buscar Elemento\n"
		"\t\t4.) Borrar Elemento\n"
		"\t\t5.) Ver si esta vacio\n"
		"\t\t6.) Obtener elemento por posicion\n"
		"\t\t7.) Obtener siguiente\n"
		"\t\t8.) Obtener Anterior\n"
		"\t\t9.) Borrar todos los elementos\n"
		"\t\t10.) Regresar al menu anterior\n";
	cout << "\t\tIngrese su opcion: ";
	validateInputNumber(opcionExtra, 2);
	switch (opcionExtra){
		case 1:
		{
			char respuesta;
			do{
				std::cout << "" << std::endl;
				cin.ignore();
				string nombre;
				int cuenta;
				cout << "\t\tIngrese el nombre del alumno: ";
				getline(std::cin, nombre);

				cout << "\t\tIngrese el numero de cuenta del alumno: ";
				cin >> cuenta;
				Alumno* alumno = new Alumno(nombre, cuenta);
				arrayList.insertar(alumno);
				cout << "\t\tAlumno insertado correctamente\n";

				cout << "\t\t¿Desea insertar otro alumno? (S/N) ";
				cin >> respuesta;
			} while (respuesta == 'S' || respuesta == 's');
			break;
		}
		case 2:
		{
			if (arrayList.estaVacia()){
				cout << "\t\tLa lista esta vacia." << endl;
			} else{
				cout << "\t\tAlumnos en la lista:" << endl;
				for (int i = 0; i < arrayList.getTamano(); i++){
					Alumno* alumno = static_cast<Alumno*>(arrayList.obtener(i));
					cout << "\t\t[" << i << "] " << alumno->getNombre() << " [" << alumno->getNumCuenta() << "]";
					cout << endl;
				}
			}
			break;
		}
		case 3:
		{
			std::cout << "" << std::endl;
			int cuenta;
			cout << "\t\tIngrese el numero de cuenta del alumno a buscar: ";
			cin >> cuenta;
			bool encontrado = false;
			int i = 0;
			for (i = 0; i < arrayList.getTamano(); i++){
				Alumno* alumno = static_cast<Alumno*>(arrayList.obtener(i));
				if (alumno->getNumCuenta() == cuenta){
					encontrado = true;
					break;
				}
			}
			if (encontrado){
				cout << "\t\tAlumno encontrado en la posicion " << i << endl;
				Alumno* alumno = static_cast<Alumno*>(arrayList.obtener(i));
				cout << "\t\tNombre: " << alumno->getNombre() << endl;
				cout << "\t\tCuenta: " << alumno->getNumCuenta() << endl;
			} else{
				cout << "\t\tAlumno no encontrado" << endl;
			}
			break;
		}
		case 4:
		{
			std::cout << "" << std::endl;
			int cuenta;
			cout << "\t\tIngrese el numero de cuenta del alumno a borrar: ";
			cin >> cuenta;
			bool encontrado = false;

			for (int i = 0; i < arrayList.getTamano(); i++){
				Alumno* alumno = static_cast<Alumno*>(arrayList.obtener(i));
				if (alumno->getNumCuenta() == cuenta){
					encontrado = true;

				}
				bool borrado = arrayList.borrar(alumno);
				if (borrado){
					cout << "\t\tEl alumno con el numero de cuenta " << cuenta << " fue borrado de la lista\n";
				} else{
					cout << "\t\tEl alumno con el numero de cuenta " << cuenta << " no se encontro en la lista, no se pudo borrar\n";
				}
				delete alumno;
				break;

			}
			break;
		}

		case 5:
		{
			std::cout << "" << std::endl;
			if (arrayList.estaVacia()){
				cout << "\t\tLa lista esta vacia\n";
			} else{
				cout << "\t\tLa lista no esta vacia\n";
			}
			break;
		}

		case 6:
		{
			std::cout << "" << std::endl;
			if (!arrayList.estaVacia()){
				int posicion;
				cout << "\t\tIngrese la posicion del elemento que desea obtener: ";
				cin >> posicion;
				Object* obj = arrayList.obtener(posicion);
				if (obj == nullptr){
					cout << "\t\tPosicion invalida." << endl;
				} else{
					Alumno* alumno = dynamic_cast<Alumno*>(obj);
					cout << "\t\tEl elemento en la posicion " << posicion << " es:" << endl;
					cout << "\t\tNombre: " << alumno->getNombre() << endl;
					cout << "\t\tCuenta: " << alumno->getNumCuenta() << endl;
				}
			} else{
				cout << "\t\tLa lista esta vacia." << endl;
			}
			break;
		}
		case 7:
		{
			std::cout << "" << std::endl;
			int posicion;
			cout << "\t\tIngrese la posicion del elemento anterior al que desea obtener: ";
			cin >> posicion;
			if (posicion >= 0 && posicion < arrayList.getTamano() - 1){
				Alumno* alumno = dynamic_cast<Alumno*>(arrayList.obtener(posicion));
				if (alumno != nullptr){
					// Acceder a los miembros de la clase Alumno
					std::cout << "\t\tNombre: " << alumno->getNombre() << std::endl;
					std::cout << "\t\tNumero de cuenta: " << alumno->getNumCuenta() << std::endl;
				} else{
					std::cout << "\t\tEl elemento no es de tipo Alumno." << std::endl;
				}
			} else{
				cout << "\t\tNo hay siguiente elemento" << endl;
			}
			break;
		}
		case 8:
		{
			std::cout << "" << std::endl;
			int posicion;
			cout << "\t\tIngrese la posici�n del elemento siguiente al que desea obtener: ";
			cin >> posicion;
			if (posicion > 0){
				Alumno* alumnoAnterior = dynamic_cast<Alumno*>(arrayList.obtener(posicion - 1));
				cout << "\t\tEl alumno anterior es: " << endl;
				cout << "\t\t" << alumnoAnterior->getNombre() << "[" << alumnoAnterior->getNumCuenta() << "]\n";
			} else{
				cout << "\t\tNo hay alumno anterior, ya est�s en el inicio de la lista." << endl;
			}
			break;
		}
		case 9:
		{
			std::cout << "" << std::endl;
			arrayList.anular();
			cout << "\t\tSe han borrado todos los elementos de la lista." << endl;
			break;
		}
		case 10:
			cout << "\t\tregresando al menu principal.......\n"
				"\t\t=====================================\n\n";
			break;
		default:
			cerr << "\t\tRango invalido\n";
			break;

	}
}
void listaLinkedList(int& opcionExtra){
	//Despliega el menu de LinkedList
	cout << "\n\t\t===============MENU_LINKEDLIST==================\n"
		"\t\t1.) Insertar Elemento\n"
		"\t\t2.) Imprimir Elementos\n"
		"\t\t3.) Buscar Elemento\n"
		"\t\t4.) Borrar Elemento\n"
		"\t\t5.) Ver si esta vacio\n"
		"\t\t6.) Obtener elemento por posicion\n"
		"\t\t7.) Obtener siguiente\n"
		"\t\t8.) Obtener Anterior\n"
		"\t\t9.) Borrar todos los elementos\n"
		"\t\t10.) Regresar al menu anterior\n";
	cout << "\t\tIngrese su opcion: ";
	validateInputNumber(opcionExtra, 2);
	switch (opcionExtra){
		case 1:
		{
			bool correct = false;
			bool seguir = true;
			string segAdd;
			do{
				while (correct == false){
					try{
						string tmp;
						getline(cin, tmp);
						char nombre [100];
						int cuenta, pos;
						cout << "\t\tIngrese el nombre del Alumno: ";
						cin.getline(nombre, 100);
						cout << "\t\tIngrese el numero de Cuenta: ";
						cin >> cuenta;
						cout << "\t\tIngrese la posicion a insertar: ";
						cin >> pos;
						if (linkedList->insert(new Alumno(nombre, cuenta), pos)){
							cout << "\t\tEl elemento se inserto con exito\n";
						} else{
							cout << "\t\tOcurrio un eror al insertar el elemento\n";
						}
						correct = true;
					} catch (exception e){
						cout << "\t\tCometi� un error al ingresar datos, intente de nuevo." << endl;
						cin.clear();
						string tmp;
						getline(cin, tmp);
					}
				}
				cout << "\t\tDesea insertar mas elementos?\n";
				cout << "\t\tIngrese 1 para seguir y cualquier otra tecla para salir: ";
				cin >> segAdd;
				seguir = segAdd == "1";
				correct = false;
			} while (seguir);
			cin.clear();
			break;
		}
		case 2:
		{
			if (!linkedList->vacio())
				linkedList->imprime();
			else
				cout << "\t\tLista Vacia\n";
		}
		cin.clear();
		break;

		case 3: //Busca elemento por medio de numero de cuenta
		{
			bool correct = false;
			cin.clear();
			while (correct == false){
				try{
					int cuenta;
					cout << "\t\tIngrese el numero de cuenta a buscar: ";
					cin >> cuenta;
					int pos = linkedList->localiza(new Alumno("Nombre", cuenta));
					Object* alumno = linkedList->recupera(pos);
					if (alumno){
						cout << "\t\tPosicion: " << pos << endl;
						cout << "\t\tAlumno: " << dynamic_cast<Alumno*>(alumno)->getNombre() << endl;
						cout << "\t\tCuenta: " << dynamic_cast<Alumno*>(alumno)->getNumCuenta() << endl << endl;
					} else{
						cout << "\t\tNo se encontro el alumno con numero de cuenta: " << cuenta << endl;
					}
					correct = true;
				} catch (exception e){
					cout << "\t\tCometi� un error al ingresar datos, intente de nuevo." << endl;
					cin.clear();
					string tmp;
					getline(cin, tmp);
				}
			}
		}
		break;
		case 4: //Elimina elemento de la LinkedList
		{
			bool correct = false;
			cin.clear();
			while (correct == false){
				try{
					int pos;
					cout << "\t\tIngrese la posicion del elemento que desea eliminar la lista: ";
					cin >> pos;
					bool success = linkedList->suprime(pos);
					if (success){
						cout << "\t\tElemento eliminado Exitosamente. " << endl;
					} else{
						cout << "\t\tElemento no fue eliminando. " << endl;
					}
					correct = true;
				} catch (exception e){
					cout << "\t\tCometi� un error al ingresar datos, intente de nuevo." << endl;
					cin.clear();
					string tmp;
					getline(cin, tmp);
				}
			}
		}
		break;
		case 5: //Detecta si la lista esta vacia o no, mostrando la cantidad de elementos dentro de la lista si no esta vacia
		{
			if (!linkedList->vacio())
				cout << "\t\tLista No Vacia, contiene " << linkedList->getSize() << " elementos\n";
			else
				cout << "\t\tLista Vacia\n";
		}
		break;
		case 6: //Encuentra un elemento de acuerdo a una posicion, si es que existe
		{
			bool correct = false;
			cin.clear();
			while (correct == false){
				try{
					int pos;
					cout << "\t\tIngrese la posicion del elemento que desea buscar en la lista: ";
					cin >> pos;
					Object* alumno = linkedList->recupera(pos);
					if (alumno){
						cout << "\t\tAlumno: " << dynamic_cast<Alumno*>(alumno)->getNombre() << endl;
						cout << "\t\tCuenta: " << dynamic_cast<Alumno*>(alumno)->getNumCuenta() << endl << endl;
					} else{
						cout << "\t\tPosici�n Invalida. " << endl;
					}
					correct = true;
				} catch (exception e){
					cout << "\t\tCometi� un error al ingresar datos, intente de nuevo." << endl;
					cin.clear();
					string tmp;
					getline(cin, tmp);
				}
			}
		}
		break;
		case 7: //Retorna el elemento siguiente a la posicion dada por el usuario, si existe
		{
			bool correct = false;
			cin.clear();
			while (correct == false){
				try{
					int pos;
					cout << "\t\tIngrese la posicion del elemento: ";
					cin >> pos;
					Object* alumno = linkedList->siguiente(pos);
					if (alumno){
						cout << "\t\tEl elemento siguiente a la posicion " << pos << " es: " << endl;
						cout << "\t\tAlumno: " << dynamic_cast<Alumno*>(alumno)->getNombre() << endl;
						cout << "\t\tCuenta: " << dynamic_cast<Alumno*>(alumno)->getNumCuenta() << endl << endl;
					} else{
						cout << "\t\tEl elemento siguiente esta vacio. " << endl;
					}
					correct = true;
				} catch (exception e){
					cout << "\t\tCometi� un error al ingresar datos, intente de nuevo." << endl;
					cin.clear();
					string tmp;
					getline(cin, tmp);
				}
			}
		}
		break;
		case 8: //Retorna el elemento anterior a la posicion dada por el usuario, si existe
		{
			bool correct = false;
			cin.clear();
			while (correct == false){
				try{
					int pos;
					cout << "\t\tIngrese la posicion del elemento: ";
					cin >> pos;
					Object* alumno = linkedList->anterior(pos);
					if (alumno){
						cout << "\t\tEl elemento anterior a la posicion " << pos << " es: " << endl;
						cout << "\t\tAlumno: " << dynamic_cast<Alumno*>(alumno)->getNombre() << endl;
						cout << "\t\tCuenta: " << dynamic_cast<Alumno*>(alumno)->getNumCuenta() << endl << endl;
					} else{
						cout << "\t\tEl elemento anterior esta vacio. " << endl;
					}
					correct = true;
				} catch (exception e){
					cout << "\t\tCometi� un error al ingresar datos, intente de nuevo." << endl;
					cin.clear();
					string tmp;
					getline(cin, tmp);
				}
			}
		}
		break;
		case 9: //Elimina todos los elementos de la lista
		{
			linkedList->Anula();
			cout << "\t\tLista borrada" << endl;
		}
		break;
		case 10:
			cout << "\t\tregresando al menu principal.......\n"
				"\t\t=====================================\n\n";
			break;
		default:
			cerr << "\t\tRango invalido\n";
			break;

	}
}


