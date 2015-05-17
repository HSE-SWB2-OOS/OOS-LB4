
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

// Bibliothek.hpp
#pragma once

#include "Buch.hpp"
#include "DVD.hpp"
#include "Person.hpp"
#include "Datum.hpp"

// Die Klasse Bibliothek verweist auf alle Medien (B�cher und DVDs),
// die von Personen (Studierende und Dozenten) ausgeliehen werden 
// k�nnen.
class Bibliothek {
	// Anzahl der in der im Bibliothekskatalog verzeichneten Medien
	int anz;
	// maximale Anzahl der Medien im Katalog
	const int maxAnz;
	// Zeiger auf das Array der Zeiger auf die Medien im Katalog
	// Deshalb wird hier ein Doppelzeiger genutzt.
	Medium ** medien;
public:
	// Standardkonstruktor
	Bibliothek(int maxAnz = 1000);
	// Destruktor
	~Bibliothek();
	// Kopie eines Buches in den Katalog der Bibliothek eintragen
	void mediumBeschaffen(Buch &);
	// Kopie einer DVD in den Katalog der Bibliothek eintragen
	void mediumBeschaffen(DVD &);
	// alle Medien auf der Konsole ausgeben, 
	// die im Titel das Suchwort enthalten
	void mediumSuchen(string suchwort);
	// im Medium mit der Nummer nr, die Person p als Ausleiher
	// eintragen mit von-Datum d und bis-Datum d+p.ausleihdauer
	void mediumAusleihen(int nr, Person & p, Datum d);
	// alle Medien in der Konsole ausgeben
	void print() const;
};
