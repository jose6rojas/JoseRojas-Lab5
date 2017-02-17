// Clase Guardia Real

#include "GuardiaReal.h"

GuardiaReal::GuardiaReal() {
}
GuardiaReal::GuardiaReal(string nombre, int edad, int ataque, int defensa) {
	this -> nombre = nombre;
	this -> edad = edad;
	this -> ataque = ataque;
	this -> defensa = defensa;
}

// Nombre
void GuardiaReal::setNombre(string nombre) {
	this -> nombre = nombre;
}
string GuardiaReal::getNombre() {
	return nombre;
}

// Edad
void GuardiaReal::setEdad(int edad) {
	this -> edad = edad;
}
int GuardiaReal::getEdad() {
	return edad;
}

// Tipo Soldado
void GuardiaReal::setTipoSoldado(int tipo) {
	if(tipo == 1)
		this -> tipoSoldado = "Caballero";
	else if(tipo == 2)
		this -> tipoSoldado = "Jinete";
	else if(tipo == 3)
		this -> tipoSoldado = "Arquero";
	else
		this -> tipoSoldado = "Ninguno";
}
string GuardiaReal::getTipoSoldado() {
	return tipoSoldado;
}

// Ataque
void GuardiaReal::setAtaque(int ataque) {
	this -> ataque = ataque;
}
int GuardiaReal::getAtaque() {
	return ataque;
}

// Defensa
void GuardiaReal::setDefensa(int defensa) {
	this -> defensa = defensa;
}
int GuardiaReal::getDefensa() {
	return defensa;
}
