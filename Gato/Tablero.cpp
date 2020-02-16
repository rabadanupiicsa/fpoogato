/*
 * Tablero.cpp
 *
 *  Created on: Feb 16, 2020
 *      Author: curso
 */

#include "Tablero.h"

Tablero::Tablero() {
	// TODO Auto-generated constructor stub

}

Tablero::~Tablero() {
	// TODO Auto-generated destructor stub
}

void Tablero::iniciaTablero() {
	//int* tablero=getTablero();
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tablero[i][j] = -1;
		}
	}
}

Estado Tablero::colocaFicha(Ficha *ficha) {
	Estado estado;
	//int* tablero=getTablero();
	if (tablero[ficha->getI()][ficha->getJ()] == -1) {
		tablero[ficha->getI()][ficha->getJ()] = ficha->getTipoFigura();
		estado.setEstado("jugando");
	} else {
		estado.setEstado("Lugar ocupado");
	}
	return estado;
}

Estado Tablero::hayGanador() {
	Estado estado;
	estado.setEstado("jugando");
	for (int i = 0; i < 3; i++) {
		if (tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2]&& tablero[i][2]!=-1) {
			estado.setEstado("ganador");
			cout<<"--->1"<<endl;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (tablero[0][i] == tablero[1][i] && tablero[1][i] == tablero[2][i]&& tablero[2][i]!=-1) {
			estado.setEstado("ganador");
			cout<<"--->2"<<endl;
		}
	}
	if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]&& tablero[0][0]!=-1) {
		estado.setEstado("ganador");
		cout<<"--->3"<<endl;
	}
	if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]&& tablero[1][1]!=-1) {
		estado.setEstado("ganador");
		cout<<"--->4"<<endl;
	}
	return estado;
}

void Tablero::dibujaTablero(){
	//system("cls");
	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<"\t "<<tablero[i][j];
		}
		cout<<endl;
	}


}

