/* Uebungen zu OOP, Aufgabe 2.3
Erstersteller: Matthias Geckeler
E-Mail: matthias.geckeler@stud.hs-esslinge.de

Datum: 16.04.2015
Version: 1.2
Zeitaufwand: 0,5h

Aenderungshistorie:
-------------------
Durchgefuehrte Aenderung | Autor | Datum
Methode toString hinzu, Sie liefert einen String für die Ausgabe, Methode print ruft jetzt toString auf. | Tommel | 23.04.15
Operator "<<" und "+" hinzugefügt | Geckeler | 24.04.15
-------------------------------------------------------
Programmbeschreibung:
Die Header Datei für die Klasse Polygonlinie.
---------------------
*/

#pragma once

#include "PlgElement.hpp"
#include "Ponit.hpp"
#include "myString.hpp"
#include <sstream>
#include <string>
#include <ostream>

class Polygonline
{
public:
	Polygonline();
	Polygonline(Point pPos);
	Polygonline(string);											// Konvertierkonstruktor wandelt einen String in ein Objekt um.
	~Polygonline();

	void createNewHead(Point pPos);
	void print() const;
	Polygonline & addPoint(Point pPos);
	Polygonline & appendPolygonline(Polygonline const & additionalLine);
	void move(double dx, double dy);

	PlgElement & getList() const;
	string toString() const;										// Wandelt die Infos des Objektes in einen String um


	// Operatoren
	friend ostream & operator<< (ostream & o, Polygonline const & line);
	Polygonline & operator+ (Point p);
	Polygonline & operator+ (Polygonline const & l);

private:
	PlgElement *endNode;
	PlgElement *head;
	int elementCounter;

};

