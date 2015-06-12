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


// Medium.cpp

#pragma once
#include "Medium.hpp"
#include <iostream>
#include <string>
using namespace std;

// Konstruktoren
Medium::Medium(string t, string v, int j, string typ) : titel(t), verlag(v), jahr(j), typ(t){
}

// Get und Set
string Medium::getTitel()const{ return this->titel; }
string Medium::getTyp()const{ return this->typ; }
Person * Medium::getAusleiher()const{ return this->ausleiher; }

// Klassenmethoden
void Medium::ausleihen(Person & p, Datum von, Datum bis){
	ausleiher = &p;
	this->von = von;
	this->bis = bis;
}

void Medium::print()const{

	cout << "-----------------------------------------" << endl;
	cout << this->getTyp() << endl;
	cout << "Titel:     " << this->getTitel() << endl;
	cout << "Verlag:    " << this->verlag << endl;
	cout << "Jahr:      " << this->jahr << endl;
	cout << "Ausleiher: " << this->getAusleiher()->getName() << endl;
	cout << "-----------------------------------------" << endl;

}