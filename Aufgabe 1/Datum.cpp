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

#pragma once
#include "Datum.hpp"
using namespace std;
#include <string>

// Konstruktoren
Datum::Datum(int tag, int monat, int jahr){
	this->tag = tag;
	this->monat = monat;
	this->jahr = jahr;
}

// Konvertierkonstruktor String
Datum::Datum(const string & strDatum){
	int tag, monat, jahr;
	//tag = stoi(string.substr(0,2));
	//monat = stoi(str.substr(3,4));
	//jahr = stoi(str.substr(5,8));

	Datum(tag, monat, jahr);
}

// Konvertierkonstruktor für C-String
Datum::Datum(const char *charDatum){
	string &strDatum = (string)charDatum;
	Datum(strDatum);
}

// operatoren
Datum Datum::operator+(int tage){
	do{
		if (this->monat == 1 || this->monat == 3 || this->monat == 5 || this->monat == 8 || this->monat == 10 || this->monat == 12){
			if (this->tag == 31){
				if (this->monat == 12) {
					this->jahr++;
					this->monat = 1;
					this->tag = 1;
					tage--;
				}
				else{
					this->monat++;
					this->tag = 1;
					tage--;
				}
			}
			else{
				this->tag++;
				tage--;
			}
		}

		if (this->monat == 4 || this->monat == 6 || this->monat == 7 || this->monat == 9 || this->monat == 11){
			if (this->tag == 30){
				this->monat++;
				this->tag = 1;
				tage--;
			}
			else{
				this->tag++;
				tage--;
			}
		}
		if (this->monat == 2){
			if (this->tag == 28){
				if (this->jahr % 400 == 0 || this->jahr % 100 > 0 || this->jahr % 4 == 0){
					this->tag++;
					tage--;
				}
				else{
					this->monat++;
					this->tag = 1;
					tage--;
				}

			}
			else{
				this->tag++;
				tage--;
			}
		}
	} while (tage > 0);

	return *this;
}