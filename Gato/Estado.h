/*
 * Estado.h
 *
 *  Created on: Feb 15, 2020
 *      Author: curso
 */
#include<iostream>
#include <string>
#ifndef ESTADO_H_
#define ESTADO_H_
using namespace std;

class Estado {
private:
	string estado;
public:
	Estado();
	virtual ~Estado();
	void setEstado(string estado);
	string getEstado();
};


#endif /* ESTADO_H_ */
