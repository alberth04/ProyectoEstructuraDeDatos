#include "Simbolo.h"
#include <iostream>

// Constructor que inicializa el valor del s�mbolo con el caracter especificado
Simbolo::Simbolo(char c) : valor(c){}

// Destructor vac�o ya que no hay memoria din�mica que liberar
Simbolo::~Simbolo(){}

// Metodo que devuelve el valor del s�mbolo
char Simbolo::getValor() const{
	return valor;
}

// Metodo que actualiza el valor del s�mbolo con el caracter especificado
void Simbolo::setValor(char c){
	valor = c;
}