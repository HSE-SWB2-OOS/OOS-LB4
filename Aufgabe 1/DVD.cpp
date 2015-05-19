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
Die klasse DVD erbt jetzt von der Klasse Medium
Konstruktor und Methode Print hinzu.									Tommel		19.5.15
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// DVD.cpp

#pragma once
#include <DVD.hpp>

// Konstruktoren
DVD::DVD(string t = "", string v = "", int j = 0, int d = 0) : Medium(t, v, j, "DVD") {
	this->dauer = d;
}

void DVD::print(){
			cout << "-----------------------------------------" << endl;
	cout << this->typ << endl;
	cout << "Titel:     " << this->titel << endl;
	cout << "Verlag:    " << this->verlag << endl;
	cout << "Jahr:      " << this->jahr << endl;
	cout << "Ausleiher: " << this->ausleiher->getName() << endl;
	cout << "Dauer:     " << this->dauer << endl;
	cout << "-----------------------------------------" << endl;
}