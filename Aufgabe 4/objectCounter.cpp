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
Die Klasse objectCounter zählt Elemente, vergibt eindeutige IDs und verwaltet diese.
---------------------
*/

// Includes
#pragma once
#include "ObjectCounter.hpp"
#include <iostream>

// Get Methioden
unsigned int ObjectCounter::getId() {return this->id;}
unsigned int ObjectCounter::getMaxId(){return maxId;}
unsigned int ObjectCounter::getNumber() {return number;}

//// Initialieren der Konstanten
//unsigned int ObjectCounter::maxId = 0;
//unsigned int ObjectCounter::number = 0;

// Konstruktoren
ObjectCounter::ObjectCounter() {

	this->id = getMaxId() +1;
	maxId++;
	number++;
	std::cout << std::endl << "Konstruktor der Klasse objectCounter, ObjectID: " << getId() << std::endl;
}

// Destruktor
ObjectCounter::~ObjectCounter(){
	std::cout << std::endl << "Destruktor der Klasse objectCounter, ObjectID: " << getId() << std::endl;
	number--;
}