/*
 * Ficha.cpp
 *
 *  Created on: Feb 15, 2020
 *      Author: curso
 */

#include "Ficha.h"


Ficha::Ficha() {
 figura=0;

}

Ficha::~Ficha() {
	// TODO Auto-generated destructor stub
}

int Ficha::getTipoFigura(){
	return figura;
}

void Ficha::setTipoFigura(int figura){
	this->figura=figura;
}

