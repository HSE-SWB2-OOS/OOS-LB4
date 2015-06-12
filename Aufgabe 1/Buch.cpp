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
Klasse Buch erbt jetzt von Klasse Medium.
Methode Print und Konstruktor hinzu.									Tommel		19.5.15
-------------------------------------------------------
Programmbeschreibung:
---------------------
*/

#pragma once
#include "Buch.hpp"
#include <iostream>
//Konstruktoren
Buch::Buch(string t, string a, string v, int jahr) : Medium(t, v, jahr, "Buch"){
	this->autor = a;
}

void Buch::print()const{
	Medium::print();
}