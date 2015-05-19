
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
Methode Print und Konstruktor hinzu.									Tommel		19.5.15
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// Datum.hpp
#pragma once

#include <string>
using namespace std;

// Klasse Datum, �hnlich zu der in der �bung der Vorlesung
class Datum {
	// Elemente eines Datums
	int tag, monat, jahr;




public:
	// Standardkonstruktor
	Datum(int = 0, int = 0, int = 0);
	// Konvertierkonstruktor f�r String
	Datum(const string &);
	// Konvertierkonstruktor f�r C-String
	Datum(const char *);
	// Operator + addiert eine Anzahl von Tagen zum Datum hinzu
	Datum operator+(int tage);
	// Ausgabeoperator <<, Ausgabe in dem Format tt.mm.jjjj
	friend ostream & operator<<(ostream &, const Datum &);
};


