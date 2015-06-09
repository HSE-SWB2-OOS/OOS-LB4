/* Uebungen zu OOP, Aufgabe 1.0
Erstersteller: Thomas Günter
E-Mail: Thomas.Guenter@stud.hs-esslinge.de

Datum: 21.04.2015
Version: 1.0
Zeitaufwand: xh

Aenderungshistorie:
-------------------
Aenderungsgrund  durchgefuehrte Aenderung  Autor  Datum
-------------------------------------------------------
Programmbeschreibung:
Die Klasse ObjectCounter zählt Elemente, vergibt eindeutige IDs und verwaltet diese.
---------------------
*/

#pragma once

class ObjectCounter {

	// Variablen deklarieren
	unsigned int id = 0;				// Speicher jeweils unveränderlich die ID des Objects
	static unsigned int maxId;				// speichert die höchste vergebene ID
	static unsigned int number;			// speichert die Anzahl der Objekte einer Klasse

	// Funktionsprototypen

public:
	// get Methoden
	virtual unsigned int getId();
	static unsigned int getMaxId();
	static unsigned int getNumber();

	// Konstruktoren
	ObjectCounter();

	// Destruktoren
	~ObjectCounter();
};