
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
Kontruktor, Get/Set, Ausleihen und print hinzu.							Tommel		19.5.15
-------------------------------------------------------
Programmbeschreibung:
---------------------
*/


// Medium.hpp
#pragma once

#include <string>
#include "Datum.hpp"
#include "Person.hpp"
using namespace std;

// Klasse f�r die Medien, die in der Bibliothek ausgeliehen werden 
// k�nnen
class Medium {
	// Titel des Mediums
	const string titel;
	// Verlag, der das Medium herausgibt
	const string verlag;
	// Jahr, in dem das Medium ver�ffentlicht wurde
	const int jahr;
	// Typ des Mediums (z.B. Buch, DVD, ...)
	// wird von den abgeleiteten Klassen festgelegt
	const string typ;
	// ausgeliehen von
	Person * ausleiher;
	// ausgeliehen am 
	Datum von;
	// ausgeliehen bis
	Datum bis;

public:
	// Konstruktor
	Medium(string t = "", string v = "", int j = 0,
		string typ = "unbek");
	// Titel zur�ckliefern
	string getTitel() const;
	// Typ zur�ckliefern
	string getTyp() const;
	// Ausleiher zur�ckliefern
	Person * getAusleiher() const;
	// das Mediuem "ausleihen", d.h. Person p, von und bis eintragen
	void ausleihen(Person & p, Datum von, Datum bis);
	// Medium in der Konsole ausgeben
	virtual void print() const;
};