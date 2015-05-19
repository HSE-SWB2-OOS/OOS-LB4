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
Medium::Medium(string t = "", string v = "", int j = 0, string typ = "undef"){
	this->titel = t;
	this->verlag = v;
	this->jahr = j;
	this->typ = typ;
}

// Get und Set
string Medium::getTitel(){return this->titel;}
string Medium::getTyp(){return this->typ;}
Person * Medium::getAusleiher(){return this->ausleiher;}

// Klassenmethoden
void Medium::ausleihen(Person & p, Datum von, Datum bis){
	this->ausleiher = p;
	this->von = von;
	this->bis = bis;
}

void Medium::print(){
	switch(this->typ){
		case: 'Buch'
			Buch::print();
			break;
		case: 'DVD'
			DVD::print();
		case else:
			cout << "Sorry, kein Medientyp festgelegt";
		}
	}
}