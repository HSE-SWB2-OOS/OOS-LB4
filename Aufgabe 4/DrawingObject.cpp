/* Uebungen zu OOP, Aufgabe 2.3
Erstersteller: Jan Binder, Matthias Geckeler, Thomas Günter
E-Mail: jabi00@hs-esslingen.de, matthias.geckeler@stud.hs-esslinge.de, Thomas.Guenter@stud.hs-esslingen.de

Datum: 03.06.2015
Version: 1.0
Zeitaufwand: 0,5h

Aenderungshistorie:
-------------------
Durchgefuehrte Aenderung | Autor | Datum


-------------------------------------------------------
Programmbeschreibung:
---------------------
*/

#pragma once
#include "DrawingObject.hpp"
#include <iostream>

// Konstruktor, Destruktor
DrawingObject::DrawingObject() : ObjectCounter(){
	std::cout << std::endl << "Konstruktor der Klasse DrawingObject, ObjectID: " << getId() << std::endl;

}
DrawingObject::~DrawingObject(){
	std::cout << std::endl << "Destruktor der Klasse DrawingObject, ObjectID: " << getId() << std::endl;
};

