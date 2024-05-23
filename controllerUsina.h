/*
 * controllerUsina.h
 *
 *  Created on: 23 may. 2024
 *      Author: tecnologo
 */
#include <list>
#include "Turbina.h"
#include "IUsina.h"
#ifndef CONTROLLERUSINA_H_
#define CONTROLLERUSINA_H_

using namespace std;
class controllerUsina : public IUsina{
private:
	list<Turbina*> turbinas;
public:
	controllerUsina();
	void calcularPotenciaTotal();
};

#endif /* CONTROLLERUSINA_H_ */
