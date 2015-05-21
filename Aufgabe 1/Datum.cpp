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
Methode Print und Konstruktor hinzu.									Tommel		19.5.15
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// Datum.cpp

#pragma once;
#include "Datum.hpp"
#using namespace std;

// Konstruktoren
Datum::Datum(int Tag = 0, int Monat = 0, int Jahr = 0){
	this->Tag = Tag;
	this->Monat = Monat;
	this->Jahr = Jahr;
}

// Konvertierkonstruktor String
Datum::Datum(string strDatum){
	int tag, monat, jahr;

	tag = stoi(str.substr(0,2));
	monat = stoi(str.substr(3,4));
	jahr = stoi(str.substr(5,8));

	Datum(Tag, Monat, Jahr);
}

// Konvertierkonstruktor für C-String
Datum::Datum(char charDatum){
	string strDatum=(string)charDatum;
	Datum(strDatum);
}

// operatoren
Datum Datum::operator+(int tage){
	// Zählt Tage zu einem Datum hinzu. Dabei wird auf Monats und Jahreswechsel geachtet.
	Datum rueckgabeDatum = this;
	int monatJumper;
	int addTage;

	switch(rueckgabeDatum.monat){
		case(1):
			monatJumper = 31;
			break;
		case(2):
			monatJumper = 27;
			break;
		case(3):
			monatJumper = 31;
		case(4):
			monatJumper = 30;
			break;
		case(5):
			monatJumper = 31;
			break;
		case(6):
			monatJumper = 30;
			break;
		case(7):
			monatJumper = 30;
			break;
	} // Vervollständigen!

	do{
		if(rueckgabeDatum.tag + tage > monatJumper){
			addTage = monatJumper - rueckgabeDatum.tag;
			tage -= addTage;
			rueckgabeDatum.tag += addTage;
			rueckgabeDatum.monat += 1;
			if(rueckgabeDatum.monat > 12){
				rueckgabeDatum.jahr +=1;
				rueckgabeDatum.monat = 1;
			}
		}
		else{
			rueckgabeDatum.tag += tage;
			tage = 0;
		}
	}while(tage > 0);
}