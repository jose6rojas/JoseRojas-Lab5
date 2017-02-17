// Dothraki

#include <iostream>
#include <string>

using namespace std;

#ifndef DOTHRAKI_H
#define DOTHRAKI_H

class Dothraki {
	private:
		string nombre;
		string jefeBarbaro;
		string nombreCaballo;
		string colorCaballo;
		int ataque;
		int defensa;
	public:
		// Constructores
		Dothraki();
		Dothraki(string, string, string, string, int, int);
		
		// Setters y Getters
		void setNombre(string);
		string getNombre();
		
		void setJefeBarbaro(string);
		string getJefeBarbaro();
		
		void setNombreCaballo(string);
		string getNombreCaballo();
		
		void setColorCaballo(string);
		string getColorCaballo();
		
		void setAtaque(int);
		int getAtaque();
		
		void setDefensa(int);
		int getDefensa();
};

#endif
