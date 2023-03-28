/**
 * @file Alumno.h
 * @author Alberth
 * @brief Clase Alumno, pos crea alumnos ;3
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include <ios>
#include "Object.h"
using namespace std;
class Alumno : public Object{
private:
	string nombre;
	int numCuenta;

public:
	/**
	 * \brief Constructor que crea un nuevo alumno object
	 *
	 * @param nombre Es el nombre del alumno
	 * @param numCuenta Es el numero de cuenta del alumno
	 */
	Alumno(const string& nombre, int numCuenta);
	/**
	 * \brief Obtiene El nombre del alumno.
	 *
	 * @return string Retorna un string con el nombre.
	 */
	string getNombre() const;
	/**
	 * \brief Coloca el nombre del ALumno
	 *
	 * @param nombre Es el nombre que le va agregar el alumno.
	 */
	void setNombre(const string& nombre);
	/**
	 * \brief Obtiene el numero de cuenta del alumno
	 *
	 * @return int retorno el valor del numero de cuenta del alumno
	 */
	int getNumCuenta() const;
	/**
	 * \brief Coloca el numero de cuenta del alumno.
	 *
	 * @param numCuenta es el numero de cuenta del alumno.
	 */
	void setNumCuenta(int numCuenta);
};
