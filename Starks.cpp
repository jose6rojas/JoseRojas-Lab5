// Clase Starks

#include "Starks.h"

Starks::Starks() {
}
Starks::Starks(string jefeFamilia, int cantidadLobosHuargos, string animalEmblema, string lema, string MVP, int cantidadIntegrantes) {
	this -> jefeFamilia = jefeFamilia;
	this -> cantidadLobosHuargos = cantidadLobosHuargos;
	this -> animalEmblema = animalEmblema;
	this -> lema = lema;
	this -> MVP = MVP;
	this -> cantidadIntegrantes = cantidadIntegrantes;
}

void Starks::setPFN(PFN* pfn) {
	PFNs.push_back(pfn);
}
PFN* Starks::getPFN(int x) {
	return PFNs[x];
}

Starks::~Starks() {
	cout << "Limpiando Starks... " << this << endl;
	for(int i = 0; i < this -> PFNs.size(); i++)
		delete this -> PFNs[i];
	this -> PFNs.clear();
}

// esto va en el main
// PFN P = Starks.getPFN(0);
