/*
 * Turbina.cpp
 *
 *  Created on: 23 may. 2024
 *      Author: tecnologo
 */

#include <iostream>
#include "Turbina.h"
using namespace std;
Turbina::Turbina() {
	// TODO Auto-generated constructor stub

}

Turbina::~Turbina() {
	// TODO Auto-generated destructor stub
}

Turbina::Turbina(bool activa, double potencia) {
	this->activa = activa;
	this->potencia = potencia;
}

double Turbina::calcularPotencia() {
	if(this->activa){
	cout<<"Potencia Turbina: "<<this->potencia<<endl;
	return this->potencia;

} else {
		cout << "la turbina no esta activa" << endl;
		return 0;
	}
}

double Turbina::getPotencia() {
	return this->potencia;
}
