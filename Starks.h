// Starks

#include <string>
#include <vector>
#include <iostream>

#include "PFN.h"

using namespace std;

#ifndef STARKS_H
#define STARKS_H

class Starks {
	private:
		string jefeFamilia;
		int cantidadLobosHuargos;
		string animalEmblema;
		string lema;
		vector<PFN*> PFNs; // ejercito de Pequenas Familias Nobles
		string MVP; // guerrero mas valioso
		int cantidadIntegrantes;
	public:
		Starks();
		Starks(string, int, string, string, string, int);
		
		// Setter y Getter para las Pequenas Familias Nobles
		void setPFN(PFN*);
		PFN* getPFN(int);
		
		~Starks();	
};

#endif
