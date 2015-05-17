
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
Die klasse DVD erbt jetzt von der Klasse Medium
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// DVD.hpp
#pragma once

#include "Medium.hpp"

// Klasse f�r die DVDs als Spezialisierung von Medium
class DVD : public Medium {
	// Abspieldauer der DVD
	const int dauer;
public:
	// Standardkonstruktor
	DVD(string t = "", string v = "", int j = 0, int d = 0);
	// die DVD auf der Konsole ausgeben
	void print() const;
};
