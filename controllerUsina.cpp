#include <iostream>
#include <list>
#include <string>
#include "Turbina.h"
#include "TurbinaEspecial.h"
#include "controllerUsina.h"
using namespace std;

controllerUsina::controllerUsina() {
	Turbina *t1 = new Turbina(true, 100);
	Turbina *t2 = new Turbina(true, 150);
	Turbina *t3 = new Turbina(false, 200);
	Turbina *t4 = new TurbinaEspecial(true, 200, 10);

	turbinas.push_back(t1);
	turbinas.push_back(t2);
	turbinas.push_back(t3);
	turbinas.push_back(t4);
}
void controllerUsina::calcularPotenciaTotal() {
	double potenciaTotal = 0;
	list<Turbina*>::iterator it;
	for (it = turbinas.begin(); it != turbinas.end(); ++it) {

		double pot = ((Turbina*) *it)->calcularPotencia();
		potenciaTotal += pot;
	}
	cout << "Potencia total " << to_string(potenciaTotal)<<endl;
}

