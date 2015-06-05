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

class OneDimObject : public DrawingObject {
public:
	// Konstruktoren und Destruktoren
	OneDimObject();
	~OneDimObject();
};