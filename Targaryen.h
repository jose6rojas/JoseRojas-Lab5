// Targaryen

#include <string>
#include <vector>
#include <iostream>

#include "Dothraki.h"

using namespace std;

#ifndef TARGARYEN_H
#define TARGARYEN_H

class Targaryen {
	private:
		string reina;
		string animalEmblema;
		string lema;
		int cantidadDragones;
		vector<Dothraki*> DothrakiArmy;
		int cantidadBarcos;
	public:
		Targaryen();
		Targaryen(string, string, string, int, int);
		
		// Setter y Getter de DothrakiArmy
		void setDothraki(Dothraki*);
		Dothraki* getDothraki(int);
		
		~Targaryen();
};

#endif
