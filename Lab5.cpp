// viernes, 17 de febrero de 2017
// Examen 1 - Laboratorio 5 - Programacion III
// Jose Carlos Rojas Herrera - 11541234

#include <string>
#include <vector>
#include <iostream>

#include "Starks.h"
#include "PFN.h"
#include "Lannister.h"
#include "GuardiaReal.h"
#include "Targaryen.h"
#include "Dothraki.h"

using namespace std;

int menuFamiliasNobles();

int main() {
	cout << "En el comienzo del tiempo;\nlas violentas luchas dinasticas entre varias familias nobles por el control del Trono de Hierro eran epicas,\nalgunos se apoyaban en la lealtad de sus vasallos,\notros en aliados traidos desde tierras lejanas,\ny nunca falta aquellos que aprovechan de sus riquezas.\n";
	
	Starks* S = NULL;
	Lannister* L = NULL;
	Targaryen* T = NULL;
	
	int opcion_principal = 0;
	cout << endl << "Menu Principal" << endl;
	while (opcion_principal != 6) {
		cout << "\t1. Agregar Familias Nobles" << endl;
		cout << "\t2. Agregar Ejercitos" << endl;
		cout << "\t3. Listar Ejercitos" << endl;
		cout << "\t4. Eliminar Ejercitos" << endl;
		cout << "\t5. Simulacion de Batalla" << endl;
		cout << "\t6. Salir" << endl;
		cout << "\tEscoja una opcion:";
		cin >> opcion_principal;
		
		if(opcion_principal == 1) {
			int opcion1 = menuFamiliasNobles();
			if(opcion1 == 1) {
				// Starks
				string jefeFamilia, animalEmblema, lema, MVP;
				int cantidadLobosHuargos, cantidadIntegrantes;
				
				cout << "Ingrese el jefe de familia: ";
				cin >> jefeFamilia;
				// S.setJefeFamilia(jefeFamilia);
				
				cout << "Ingrese una cantidad de lobos huargos: ";
				cin >> cantidadLobosHuargos;
				// S.setCantidadLobosHuargos(cantidadLobosHuargos);
				
				cout << "Ingrese el animal emblema: ";
				cin >> animalEmblema;
				// S.setAnimalEmblema(animalEmblema);
				
				cout << "Ingrese el lema de su familia: ";
				cin >> lema;
				// S.setLema(lema);
				
				cout << "Ingrese el guerrero mas valioso: ";
				cin >> MVP;
				// S.setMVP(MVP);
				
				cout << "Ingrese la cantidad de integrantes: ";
				cin >> cantidadIntegrantes;
				// S.setCantidadIntegrantes(cantidadIntegrantes);
				
				S = new Starks(jefeFamilia, cantidadLobosHuargos, animalEmblema, lema, MVP, cantidadIntegrantes);
				cout << "Familia Stark agregada correctamente" << endl;
			} else if(opcion1 == 2) {
				// Lannister
				string jefeFamilia, animalEmblema, lema;
				double cantidadDinero;
				int fuerzaMontana, cantidadIntegrantes;
				
				cout << "Ingrese el jefe de familia: ";
                                cin >> jefeFamilia;
                                // L.setJefeFamilia(jefeFamilia);
				
				cout << "Ingrese el animal emblema: ";
                                cin >> animalEmblema;
                                // L.setAnimalEmblema(animalEmblema);
				
				cout << "Ingrese el lema de su familia: ";
                                cin >> lema;
                                // L.setLema(lema);
				
				cout << "Ingrese una cantidad de dinero: ";
				cin >> cantidadDinero;
				// L.setCantidadDinero(cantidadDinero);
				
				cout << "Ingrese la fuerza de la montana: ";
				cin >> fuerzaMontana;
				// L.setFuerzaMontana(fuerzaMontana);
				
				L = new Lannister(jefeFamilia, animalEmblema, lema, cantidadDinero, fuerzaMontana, cantidadIntegrantes);
				cout << "Familia Lannister agregada correctamente" << endl;
			} else if(opcion1 == 3) {
				// Targaryen
				string reina, animalEmblema, lema;
				int cantidadDragones, cantidadBarcos;
				
				cout << "Ingrese la reina: ";
				cin >> reina;
				// T.setReina(reina);
				
				cout << "Ingrese el animal emblema: ";
                                cin >> animalEmblema;
                                // T.setAnimalEmblema(animalEmblema);
				
				cout << "Ingrese el lema de su familia: ";
                                cin >> lema;
                                // T.setLema(lema);
				
				cout << "Ingrese la cantidad de dragones: ";
				cin >> cantidadDragones;
				// T.setCantidadDragones(cantidadDragones);
				
				cout << "Ingrese la cantidad de barcos: ";
				cin >> cantidadBarcos;
				// T.setCantidadBarcos(cantidadBarcos);
				
				T = new Targaryen(reina, animalEmblema, lema, cantidadDragones, cantidadBarcos);
				cout << "Familia Targaryen agregada correctamente" << endl;
			}
		} else if(opcion_principal == 2) {
		} else if(opcion_principal == 3) {
		} else if(opcion_principal == 4) {
		} else if(opcion_principal == 5) {
		} else if(opcion_principal == 6)
			break;
	}
	
	delete S;
	delete L;
	delete T;
	
	return 0;
}

int menuFamiliasNobles() {
	int opcion;
	cout << "\t\t1. Starks\n";
	cout << "\t\t2. Lannister\n";
	cout << "\t\t3. Targaryen\n";
	cout << "\t\tEscoja una Familia Noble:";
	cin >> opcion;
	return opcion;
}
