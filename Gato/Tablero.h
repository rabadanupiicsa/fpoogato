/*
 * Tablero.h
 *
 *  Created on: Feb 16, 2020
 *      Author: curso
 */

#ifndef TABLERO_H_
#define TABLERO_H_
#include "Ficha.h"
#include "Estado.h"

class Tablero {
private:

	Estado estado;
public:
	Tablero();
	virtual ~Tablero();
	int tablero[3][3];


	/*const int* getTablero() const {
		return &tablero;
	}*/

	void iniciaTablero();
	Estado colocaFicha(Ficha* ficha);
	Estado hayGanador();
	void dibujaTablero();


};

#endif /* TABLERO_H_ */
