/*
 * 04_EjercicioRefactoringUsina.cpp
 *
 *  Created on: 23 may. 2024
 *      Author: tecnologo
 */

#include <iostream>
#include <list>

#include "controllerUsina.h"
#include "IUsina.h"

using namespace std;

int main() {
	IUsina *c1 = new controllerUsina();
	c1->calcularPotenciaTotal();

}
