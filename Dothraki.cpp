// Clase Dothraki

#include "Dothraki.h"

Dothraki::Dothraki() {
}
Dothraki::Dothraki(string nombre, string jefeBarbaro, string nombreCaballo, string colorCaballo, int ataque, int defensa) {
	this -> nombre = nombre;
	this -> jefeBarbaro = jefeBarbaro;
	this -> nombreCaballo = nombreCaballo;
	this -> colorCaballo = colorCaballo;
	this -> ataque = ataque;
	this -> defensa = defensa;
}

// Nombre
void Dothraki::setNombre(string nombre) {
	this -> nombre = nombre;
}
string Dothraki::getNombre() {
	return nombre;
}

// Jefe Barbaro
void Dothraki::setJefeBarbaro(string jefeBarbaro) {
	this -> jefeBarbaro = jefeBarbaro;
}
string Dothraki::getJefeBarbaro() {
	return jefeBarbaro;
}

// Nombre Caballo
void Dothraki::setNombreCaballo(string nombreCaballo) {
        this -> nombreCaballo = nombreCaballo;
}
string Dothraki::getNombreCaballo() {
        return nombreCaballo;
}

// Color Caballo
void Dothraki::setColorCaballo(string colorCaballo) {
        this -> colorCaballo = colorCaballo;
}
string Dothraki::getColorCaballo() {
        return colorCaballo;
}

// Ataque
void Dothraki::setAtaque(int ataque) {
	this -> ataque = ataque;
}
int Dothraki::getAtaque() {
	return ataque;
}

// Defensa
void Dothraki::setDefensa(int defensa) {
	this -> defensa = defensa;
}
int Dothraki::getDefensa() {
	return defensa;
}
