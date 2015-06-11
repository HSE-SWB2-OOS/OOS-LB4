/* Labor 4, Aufgabe 1
Erstersteller: Matthias Geckeler / Jan Binder / Thomas Günter
E-Mail: matthias.geckeler@stud.hs-esslinge.de / jabi00hs-esslingen.de / thomas.guenter@stud.hs-esslingen.de

Datum: 17.5.15
Version: 1.0
Zeitaufwand: 

Aenderungshistorie:
-------------------
Durchgefuehrte Aenderung												|Autor		|Datum
Repository angelegt, Kopf und Änderungshistorie hinzu.					Tommel		17.5.15
Konstruktor hinzu / Printmethode hinzu									Tommel		19.5.15
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// Person.cpp

#pragma once
#include "Person.hpp"
#include <iostream>

// Konstruktoren
Person::Person(string name, int dauer = 0){
	this->name = name;
	this->ausleihdauer = dauer;
}

// Set und Get
string Person::getName()const{return this->name;}
int Person::getAusleihdauer()const{return this->ausleihdauer;}

// klassenmethoden
void Person::print()const{
	std::cout << this->name;
}