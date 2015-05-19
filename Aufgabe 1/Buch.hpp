
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
Klasse Buch erbt jetzt von Klasse Medium.
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// Buch.hpp
#pragma once
#include "Medium.hpp"

// Klasse f�r die B�cher als Spezialisierung von Medium
class Buch : public Medium {
	// Autor(en) des Buches
	string autor;
public:
	// Standardkonstruktor
	Buch(string t = "", string a = "", string v = "", int jahr = 0);
	// das Buch auf der Konsole ausgeben
	void print() const;
};
