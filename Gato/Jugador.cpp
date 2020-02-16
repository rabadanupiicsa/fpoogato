/*
 * Jugador.cpp
 *
 *  Created on: Feb 16, 2020
 *      Author: curso
 */
#include <string>
#include "Jugador.h"
#include "Estado.h"
#include "Ficha.h"

Jugador::Jugador() {
	string figura = "Empezando";
	int turno = 0;

}

Jugador::~Jugador() {
	// TODO Auto-generated destructor stub
}

Ficha* Jugador::defineFicha() {
	Ficha *ficha = new Ficha();
	int i, j;
	cout << "Favor de ingresar la córdena i" << endl;
	cin >> i;
	cout << "Favor de ingresar la córdena i" << endl;
	cin >> j;
	ficha->setI(i);
	ficha->setJ(j);
return ficha;
}
