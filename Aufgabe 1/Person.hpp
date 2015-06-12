
/* Labor 4, Aufgabe 1
Erstersteller: Matthias Geckeler / Jan Binder / Thomas G�nter
E-Mail: matthias.geckeler@stud.hs-esslinge.de / jabi00hs-esslingen.de / thomas.guenter@stud.hs-esslingen.de
Datum: 17.5.15
Version: 1.0
Zeitaufwand:
Aenderungshistorie:
-------------------
Durchgefuehrte Aenderung												|Autor		|Datum
Repository angelegt, Kopf und �nderungshistorie hinzu.					Tommel		17.5.15
-------------------------------------------------------
Programmbeschreibung:
---------------------
*/


// Person.hpp
#pragma once

#include <string>
using namespace std;

// Klasse f�r alle Personen, die Medien ausleihen k�nnen
class Person {
	// Name der Person
	string name;
	// Dauer in Tagen, die die Person ein Medium ausleihen darf
	// wird von den abgelieteten Klassen festgelegt
	int ausleihdauer;
public:
	// Standardkonstruktor
	Person(string, int);
	// den Namen zur�ckliefern
	string getName() const;
	// die Ausliehdauer zur�ckliefern
	int getAusleihdauer() const;
	// die Person auf der Konsole ausgeben
	void print() const;
};
