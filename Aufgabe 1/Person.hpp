
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
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// Person.hpp
#pragma once

#include <string>
using namespace std;

// Klasse für alle Personen, die Medien ausleihen können
class Person {
	// Name der Person
	string name;
	// Dauer in Tagen, die die Person ein Medium ausleihen darf
	// wird von den abgelieteten Klassen festgelegt
	int ausleihdauer;
public:
	// Standardkonstruktor
	Person(string , int);
	// den Namen zurückliefern
	string getName() const;
	// die Ausliehdauer zurückliefern
	int getAusleihdauer() const;
	// die Person auf der Konsole ausgeben
	void print() const;
};


