/* Uebungen zu OOP, Aufgabe 2.3
Erstersteller: Matthias Geckeler
E-Mail: matthias.geckeler@stud.hs-esslinge.de

Datum: 15.04.2015
Version: 1.3
Zeitaufwand: 0,5h

Aenderungshistorie:
-------------------
Durchgefuehrte Aenderung | Autor | Datum
Operator "<<" hinzugefügt | Geckeler | 23.04.15
Methode toString und Konvertierungskonstruktor hinzu. Die Methode Print greift nun auf die Methode toString zu. | Tommel | 24.04.15
Die Klasse Circle erbt nun von der Klasse OneDimObject | Tommel | 3.6.15
-------------------------------------------------------
Programmbeschreibung:
Die Header Datei für die Klasse Circle die das geometrische Objekt für Kreis darstellt.
---------------------
*/

#pragma once

#include "Ponit.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <ostream>
#include "OneDimObject.hpp"

class Circle : public OneDimObject
{
public:
	Circle();
	Circle(Point pos);
	Circle(Point pos, double radius);
	Circle(string);								// Legt aus einem String im Format ("<(5.5, 6.6), 10.1>") einen Kreis an.
	~Circle();

	void setCentre(Point pos);
	Point getCentre() const;
	void setRadius(double r);
	double getRadius() const;

	void move(double dx, double dy);
	void print(bool newLine = true) const;

	string toString()const;							// Erzeugt eine Ausgabe in einem string outputstream 

	// Operatoren
	friend ostream & operator<< (ostream & o, Circle const & circle);
private:
	Point centre;
	double radius;
	

};
