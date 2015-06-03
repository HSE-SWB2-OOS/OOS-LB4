/* Uebungen zu OOP, Aufgabe 2.3
Erstersteller: Matthias Geckeler
E-Mail: matthias.geckeler@stud.hs-esslinge.de

Datum: 16.04.2015
Version: 1.0
Zeitaufwand: xh

Aenderungshistorie:
-------------------
Aenderungsgrund  durchgefuehrte Aenderung  Autor  Datum
-------------------------------------------------------
Programmbeschreibung:
Die Header Datei für die Klasse PlgElement die ein Element der Verketteten Liste von Polygonline darstellt.
---------------------
*/

#pragma once

#include "Ponit.hpp"

class PlgElement
{
public:
	PlgElement();
	~PlgElement();

	Point point;
	PlgElement *next;

};

