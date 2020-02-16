/*
 * Ficha.h
 *
 *  Created on: Feb 15, 2020
 *      Author: curso
 */

#ifndef FICHA_H_
#define FICHA_H_

class Ficha {
private:
	int figura;
	int i;
	int j;
public:
	Ficha();
	virtual ~Ficha();
	void setTipoFigura(int figura);
	int getTipoFigura();

	int getI() const {
		return i;
	}

	void setI(int i) {
		this->i = i;
	}

	int getJ() const {
		return j;
	}

	void setJ(int j) {
		this->j = j;
	}
};

#endif /* FICHA_H_ */
