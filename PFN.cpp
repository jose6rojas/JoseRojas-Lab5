// Clase Pequena Familia Noble

#include "PFN.h"

PFN::PFN() {
}
PFN::PFN(string nombre, string simboloEscudo, string lema, int cantidadPersonas, int ataque, int defensa) {
	this -> nombre = nombre;
	this -> simboloEscudo = simboloEscudo;
	this -> lema = lema;
	this -> cantidadPersonas = cantidadPersonas;
	this -> ataque = ataque;
	this -> defensa = defensa;
}

// Nombre
void PFN::setNombre(string nombre) {
	this -> nombre = nombre;
}
string PFN::getNombre() {
	return nombre;
}

// Simbolo Escudo
void PFN::setSimboloEscudo(string simboloEscudo) {
	this -> simboloEscudo = simboloEscudo;
}
string PFN::getSimboloEscudo() {
	return simboloEscudo;
}

// Lema
void PFN::setLema(string lema) {
	this -> lema = lema;
}
string PFN::getLema() {
	return lema;
}

// Cantidad Personas
void PFN::setCantidadPersonas(int cantidadPersonas) {
	this -> cantidadPersonas = cantidadPersonas;
}
int PFN::getCantidadPersonas() {
	return cantidadPersonas;
}

// Ataque
void PFN::setAtaque(int ataque) {
	this -> ataque = ataque;
}
int PFN::getAtaque() {
	return ataque;
}

// Defensa
void PFN::setDefensa(int defensa) {
	this -> defensa = defensa;
}
int PFN::getDefensa() {
	return defensa;
}
