// Pequena Familia Noble

#include <iostream>
#include <string>

#ifndef PFN_H
#define PFN_H

using namespace std;

class PFN {
	private:
		string nombre;
		string simboloEscudo;
		string lema;
		int cantidadPersonas;
		int ataque;
		int defensa;
	public:
		// Constructores
		PFN();
		PFN(string, string, string, int, int, int);
		
		// Setters y Getters
		void setNombre(string);
		string getNombre();
		
		void setSimboloEscudo(string);
		string getSimboloEscudo();
		
		void setLema(string);
		string getLema();
		
		void setCantidadPersonas(int);
		int getCantidadPersonas();
		
		void setAtaque(int);
		int getAtaque();
		
		void setDefensa(int);
		int getDefensa();
};

#endif
