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
Die Kasse Student erbt jetzt von der Klasse Person
Konstruktor hinzu / Printmethode hinzu									Tommel		19.5.15
-------------------------------------------------------
Programmbeschreibung:

---------------------
*/


// Student.hpp

#pragma once
#include "Student.hpp"
using namespace std;

// Konstruktoren
Student::Student(string name, int matNr) : Person(name, 40){
	this->matNr = matNr;
}

// Klassenmethoden
void Student::print(){
	Person::print();
}