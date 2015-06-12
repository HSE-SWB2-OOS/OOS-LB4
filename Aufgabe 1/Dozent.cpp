
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
Die klasse Dozent erbt jetzt von der Klasse Person
Konstruktor hinzu / Printmethode hinzu									Tommel		19.5.15
-------------------------------------------------------
Programmbeschreibung:
---------------------
*/


// Dozent.cpp


#pragma once
#include "Dozent.hpp"
using namespace std;

// Konstruktoren
Dozent::Dozent(string name, int prfrNr) : Person(name, (int)30){
	this->prfrNr = prfrNr;
}

void Dozent::print()const{
	Person::print();
}