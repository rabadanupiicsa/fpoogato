/*
 * Jugador.h
 *
 *  Created on: Feb 16, 2020
 *      Author: curso
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_
#include<string>
#include"Estado.h"
#include"Ficha.h"
using namespace std;

class Jugador {
private:
	string nombre;
	int turno;
	int figura;

public:
	Jugador();
	virtual ~Jugador();
	Ficha* defineFicha();

	int getFigura() const {
		return figura;
	}

	void setFigura(int figura) {
		this->figura = figura;
	}

	const string& getNombre() const {
		return nombre;
	}

	void setNombre(const string &nombre) {
		this->nombre = nombre;
	}

	int getTurno() const {
		return turno;
	}

	void setTurno(int turno) {
		this->turno = turno;
	}
};

#endif /* JUGADOR_H_ */
