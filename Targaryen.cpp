// Clase Targaryen

#include "Targaryen.h"

Targaryen::Targaryen() {
}
Targaryen::Targaryen(string reina, string animalEmblema, string lema, int cantidadDragones, int cantidadBarcos) {
	this -> reina = reina;
	this -> animalEmblema = animalEmblema;
	this -> lema = lema;
	this -> cantidadDragones = cantidadDragones;
	this -> cantidadBarcos = cantidadBarcos;
}

void Targaryen::setDothraki(Dothraki* D) {
	DothrakiArmy.push_back(D);
}
Dothraki* Targaryen::getDothraki(int x) {
	return DothrakiArmy[x];
}

Targaryen::~Targaryen() {
	cout << "Limpiando Dothraki... " << this << endl;
		for(int i = 0; i < this -> DothrakiArmy.size(); i++)
			delete this -> DothrakiArmy[i];
		this -> DothrakiArmy.clear();
}
