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
Methoden ausgarbeitet.													Tommel		19.5.15
-------------------------------------------------------
Programmbeschreibung:
---------------------
*/

// Bibliothek.cpp

#pragma once
#include "Bibliothek.hpp"
#include <string>
#include <iostream>

// Konstruktoren

Bibliothek::Bibliothek(int maxAnza) : maxAnz(maxAnza){ // HALLO!
	anz = 0;
	//Medium *ptrArray= new Medium[maxAnz];			// Pointerarray für die Zeiger zu den einzelnen Titeln.
	//medien = &ptrArray;								// Verknüpfung PtrPtr -> ptrArray
	Medium *medienArray = new Medium[maxAnz];
	medien = &medienArray;
}

Bibliothek::~Bibliothek(){};


// Klassenmethoden

void Bibliothek::mediumBeschaffen(Buch &medium){ // HALLO!

	// Zähler um eins erhöhen, Prüfen ob maximum erreicht, wenn nein
	// wird die Adresse des Objektes dem Array hinzugefügt.
	if (anz + 1 <= maxAnz){
		anz += 1;
		medien[anz] = &medium;
		//medien[anz]->print();
	}
}

void Bibliothek::mediumBeschaffen(DVD &medium){
	// Zähler um eins erhöhen, Prüfen ob maximum erreicht, wenn nein
	// wird die Adresse des Objektes dem Array hinzugefügt.
	if (this->anz + 1 <= this->maxAnz){
		this->anz += 1;
		this->medien[this->anz] = &medium;
		// this->medien[this->anz]->print();
	}
}

void Bibliothek::mediumSuchen(string suchwort){
	for (int i = 1; i < this->anz; i++){
		if (medien[i]->getTitel() == suchwort){
			medien[i]->print();
		}
	}
}

void Bibliothek::mediumAusleihen(int nr, Person & p, Datum d){
	medien[nr]->ausleihen(p, d, d + p.getAusleihdauer());
}

void Bibliothek::print()const{
	for (int i = 1; i < this->anz +1; i++)
		this->medien[i]->print();	// Test
}