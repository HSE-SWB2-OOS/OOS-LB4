/* Uebungen zu OOP, Aufgabe 2.3
Erstersteller: Matthias Geckeler
E-Mail: matthias.geckeler@stud.hs-esslinge.de

Datum: 15.04.2015
Version: 1.3
Zeitaufwand: 0,5h

Aenderungshistorie:
-------------------
Durchgefuehrte Aenderung | Autor | Datum
Parameter behafteter Konstruktor angelegt | Geckeler | 16.04.15
Operatoren "+", "++", "--" und "<<" hinzugef�gt | Geckeler | 23.04.15
Klasse Point erbt jetzt von DrawingObject | Tommel | 3.6.15
Kopierkonstruktor hinzu. | Tommel | 10.6.15
-------------------------------------------------------
Programmbeschreibung:
Die Header Datei f�r die Klasse Point die das geometrische Objekt Punkt darstellt.
---------------------
*/

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <ostream>
#include "MyString.hpp"
#include "DrawingObject.hpp"

using namespace std;

class Point : public DrawingObject
{
public:
	Point();
	Point(double posX, double posY);
	Point(string);
	Point(const Point &);
	~Point();

	void setX(double posX);
	double getX() const;
	void setY(double posY);
	double getY() const;

	void move(double dx, double dy);
	void print(bool newLine = true) const;
	string toString() const;

	// Operatoren
	friend void operator>>(istringstream & iStrStream, Point & pos);
	friend ostream & operator<< (ostream & o, Point const & pos);
	Point operator= (Point p);
	
	friend Point operator+ (Point p, double offset);
	friend Point operator+ (double offset, Point p);
	Point operator+ (Point p);
	Point operator- (Point p);
	Point operator- ();

	Point operator++ ();
	Point operator++ (int);
	Point operator--();
	Point operator--(int);

private:
	double x;
	double y;
};


