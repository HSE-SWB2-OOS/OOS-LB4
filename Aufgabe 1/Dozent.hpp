
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
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// Dozent.hpp
#pragma once

#include "Person.hpp"

// Klasse Dozent als Spezialisierung von Person
class Dozent : public Person {
	// Prüfernummer des Dozenten
	int prfrNr;
public:
	// Standardkosntruktor
	Dozent(string name, int prfrNr);
	// Dozenten auf der Konsole ausgeben
	void print() const;
};
