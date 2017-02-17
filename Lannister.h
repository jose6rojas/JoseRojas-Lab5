// Lannister

#include <string>
#include <vector>
#include <iostream>

#include "GuardiaReal.h"

using namespace std;

#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister {
	private:
		string jefeFamilia;
		string animalEmblema;
		string lema;
		vector<GuardiaReal*> GRs; // ejercito de Guardias Reales
		double cantidadDinero;
		int fuerzaMontana;
		int cantidadIntegrantes;
	public:
		Lannister();
		Lannister(string, string, string, double, int, int);
		
		// Setter y Getter del ejercito de Guardias Reales
		void setGR(GuardiaReal*);
		GuardiaReal* getGR(int);
		
		~Lannister();
};

#endif
