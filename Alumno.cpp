#include "Alumno.h"

Alumno::Alumno(const string& nombre, int numCuenta): nombre(nombre), numCuenta(numCuenta){
	
}

string Alumno::getNombre() const{
	return nombre;
}

void Alumno::setNombre(const string& nombre){
	this->nombre = nombre;
}

int Alumno::getNumCuenta() const{
	return numCuenta;
}

void Alumno::setNumCuenta(int numCuenta){
	this->numCuenta = numCuenta;
}
