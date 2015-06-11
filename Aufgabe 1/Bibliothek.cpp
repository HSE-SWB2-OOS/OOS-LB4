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

// Konstruktoren

Bibliothek::Bibliothek(int maxAnz = 1000){ // HALLO!
	this->maxAnz = maxAnz;
	this->anz = 0;
	Medium *ptrArray[maxAnz];		// Pointerarray für die Zeiger zu den einzelnen Titeln.
	medien = ptrArray;				// Verknüpfung PtrPtr -> ptrArray
}


// Klassenmethoden

void Bibliothek::mediumBeschaffen(Buch &medium){ // HALLO!

	// Zähler um eins erhöhen, Prüfen ob maximum erreicht, wenn nein
	// wird die Adresse des Objektes dem Array hinzugefügt.
	if(this->anz +1 <= this->maxAnz){
		this->anz += 1;
		medien[this->anz] = medium;
	}	
}

void Bibliothek::mediumBeschaffen(DVD &medium){
	// Zähler um eins erhöhen, Prüfen ob maximum erreicht, wenn nein
	// wird die Adresse des Objektes dem Array hinzugefügt.
	if(this->anz +1 <= this->maxAnz){
		this->anz += 1;
		medien[this->anz] = medium;
	}
}

void Bibliothek::mediumSuchen(string suchwort){
	for(Medium medObjekt : ptrArray){
		if(strstr(medObjekt->getTitel(), suchwort)!=null){
			medObjekt->print();
		}
	}
}

void Bibliothek::mediumAusleihen(int nr, Person & p, Datum d){
	for(Medium medObjekt : ptrArray){
		if(medObjekt->nr == nr){
			medObjekt->ausleihen(p, d, d+p->getAusleihdauer());
		}
	}
}

void Bibliothek::print(){
	for(Meium medObjekt : ptrArray){
		medObjekt->print();
	}
} 