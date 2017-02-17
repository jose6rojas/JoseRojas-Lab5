// Clase Lannister

#include "Lannister.h"

Lannister::Lannister() {
}
Lannister::Lannister(string jefeFamilia, string animalEmblema, string lema, double cantidadDinero, int fuerzaMontana, int cantidadIntegrantes) {
	this -> jefeFamilia = jefeFamilia;
	this -> animalEmblema = animalEmblema;
	this -> lema = lema;
	this -> cantidadDinero = cantidadDinero;
	this -> fuerzaMontana = fuerzaMontana;
	this -> cantidadIntegrantes = cantidadIntegrantes;
}

void Lannister::setGR(GuardiaReal* gr) {
	GRs.push_back(gr);
}
GuardiaReal* Lannister::getGR(int x) {
	return GRs[x];
}

Lannister::~Lannister() {
	cout << "Limpiando Lannister... " << this << endl;
	for(int i = 0; i < this -> GRs.size(); i++)
		delete this -> GRs[i];
	this -> GRs.clear();
}
