/*
 * CoordinaJuego.h
 *
 *  Created on: Feb 16, 2020
 *      Author: curso
 */

#ifndef COORDINAJUEGO_H_
#define COORDINAJUEGO_H_
#include "Jugador.h"
#include "Estado.h"

class CoordinaJuego {
	private:
	Jugador jugador1;
	Jugador jugador2;
public:
	CoordinaJuego();
	virtual ~CoordinaJuego();
	void registraJugador();
	void asignaTurno();
	Estado organiza();


};

#endif /* COORDINAJUEGO_H_ */
