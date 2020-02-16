/*
 * Estado.cpp
 *
 *  Created on: Feb 15, 2020
 *      Author: curso
 */
#include<iostream>
#include<string>
#include "Estado.h"
using std::string;

Estado::Estado() {
	// TODO Auto-generated constructor stub

}

Estado::~Estado() {
	// TODO Auto-generated destructor stub
}

void Estado::setEstado(string estado){
	this->estado=estado;
}

string Estado::getEstado(){
	return this->estado;
}

