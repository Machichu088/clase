/*
 * TurbinaEspecial.cpp
 *
 *  Created on: 23 may. 2024
 *      Author: tecnologo
 */

#include <iostream>
#include "TurbinaEspecial.h"
using namespace std;

TurbinaEspecial::TurbinaEspecial() {
	// TODO Auto-generated constructor stub

}

TurbinaEspecial::~TurbinaEspecial() {
	// TODO Auto-generated destructor stub
}

TurbinaEspecial::TurbinaEspecial(bool activa, double potencia, int coef){
	this->activa = activa;
	this->potencia = potencia;
	this->coeficiente = coef;
}

double TurbinaEspecial::calcularPotencia() {
	if (this->activa){
	cout <<"Potencia turbina especial: "<<this->potencia * this->coeficiente <<endl;
	return this->potencia * this->coeficiente;
	} else {
		cout << "la turbina no esta activa" << endl;
		return 0;
	}

}

int TurbinaEspecial::getCoeficiente() {
	return this->coeficiente;
}
