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
#include "DVD.hpp"
using namespace std;

// Konstruktoren
DVD::DVD(string t, string v, int j, int d) : dauer(d), Medium(t, v, j, "DVD") {
}

void DVD::print()const{
	Medium::print();
}