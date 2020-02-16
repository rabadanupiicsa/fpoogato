/*
 * CoordinaJuego.cpp
 *
 *  Created on: Feb 16, 2020
 *      Author: curso
 */

#include "CoordinaJuego.h"
#include <iostream>
#include <string>
#include "Tablero.h"

CoordinaJuego::CoordinaJuego() {
	// TODO Auto-generated constructor stub

}

CoordinaJuego::~CoordinaJuego() {
	// TODO Auto-generated destructor stub
}

Estado CoordinaJuego::organiza() {
	Estado estado;
	Tablero tablero;
	registraJugador();
	int turno = 1;
	estado.setEstado("jugando");
	tablero.iniciaTablero();
	Ficha *ficha;
	while (estado.getEstado().compare("jugando") == 0) {
		tablero.dibujaTablero();
		cout<<"turno: ***********************";
		cout<<"----->turno: "<<turno;
		if (turno == 1) {
			ficha = jugador1.defineFicha();
			ficha->setTipoFigura(jugador1.getFigura());
			estado = tablero.colocaFicha(ficha);
			estado = tablero.hayGanador();
				cout<<"------>estado: "<<estado.getEstado()<<endl;
			if (estado.getEstado().compare("ganador")==0) {
				turno = 0;
			} else if (estado.getEstado().compare("jugando")==0) {
				turno = 2;
			} else {
				turno = 1;
			}
		} else if (turno == 2) {
			ficha = jugador2.defineFicha();
			ficha->setTipoFigura(jugador2.getFigura());
			estado = tablero.colocaFicha(ficha);
			estado = tablero.hayGanador();

			if (estado.getEstado().compare("ganador")==0) {
				turno = 0;
			} else if (estado.getEstado().compare("jugando")==0) {
				turno = 1;
			} else {
				turno = 2;
			}
		}
	}

	cout<< estado.getEstado();
	return estado;
}



void CoordinaJuego::registraJugador() {
string nombre;
cout << "Favor de indicar el nombre del primer Jugador" << endl;
getline(cin, nombre);
jugador1.setNombre(nombre);
jugador1.setFigura(1);
jugador1.setTurno(1);
cout << "Favor de indicar el nombre del segundo Jugador" << endl;
getline(cin, nombre);
jugador2.setNombre(nombre);
jugador2.setFigura(2);
jugador2.setTurno(2);

}

