/**
 * @file Simbolo.h
 * @author Wilmer Zuniga
 * @brief Clase simbolo que hereda de objeto
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once
#include "Object.h"

class Simbolo : public Object{
public:
	/**
	 * @brief Constructor que recibe un char y lo asigna al atributo valor
	 *
	 * @param c es el valor del caracter
	 */
	Simbolo(char c);
	/**
	 * @brief Destructor
	 *
	 */
	~Simbolo();
	/**
	 * @brief Metodo que retorna el valor del atributo valor
	 *
	 * @return char variable de retorno
	 */
	char getValor() const;
	/**
	 * @brief Metodo que asigna un valor al atributo valor
	 *
	 * @param c valor a asignar
	 */
	void setValor(char c);

private:
	/**
	 * @brief Atributo que almacena un caracter
	 *
	 */
	char valor;
};