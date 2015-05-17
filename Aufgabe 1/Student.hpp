
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
Die Kasse Student erbt jetzt von der Klasse Person
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// Student.hpp
#pragma once

#include "Person.hpp"

// Klasse Student als Spezialisierung von Person
class Student : public Person {
	// Matrikelnummer des Studenten/der Studentin
	int matNr;
public:
	// Standardkonstruktor
	Student(string name, int matNr);
	// Student auf der Konsole ausgeben
	void print() const;
};
