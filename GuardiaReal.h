// Guardia Real

#include <iostream>
#include <string>

using namespace std;

#ifndef GUARDIAREAL_H
#define GUARDIAREAL_H

class GuardiaReal {
	private:
		string nombre;
		int edad;
		string tipoSoldado;
		int ataque;
		int defensa;
	public:
		// Constructores
		GuardiaReal();
		GuardiaReal(string, int, int, int);
		
		// Setters y Getters
		void setNombre(string);
		string getNombre();
		
		void setEdad(int);
		int getEdad();
		
		void setTipoSoldado(int);
		string getTipoSoldado();
		
		void setAtaque(int);
		int getAtaque();

		void setDefensa(int);
		int getDefensa();
};

#endif
