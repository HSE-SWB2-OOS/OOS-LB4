/* Uebungen zu OOP, Aufgabe 2.3
Erstersteller: Matthias Geckeler
E-Mail: matthias.geckeler@stud.hs-esslinge.de

Datum: 15.04.2015
Version: 1.3
Zeitaufwand: 0,75h

Aenderungshistorie:
-------------------
Durchgefuehrte Aenderung | Autor | Datum
Operator "<<" hinzugef�gt | Geckeler | 23.04.15
Methode toString und Konvertierungskonstruktor hinzu. Die Methode Print greift nun auf die Methode toString zu. | Tommel | 24.04.15
Die Klasse Circle erbt nun von der Klasse OneDimObject | Tommel | 3.6.15
-------------------------------------------------------
Programmbeschreibung:
Die Klasse Circle die das geometrische Objekt Kreis darstellt
---------------------
*/

#include "Circle.hpp"

// Standart Konstruktor
Circle::Circle()
{
	this->radius = 0;
}

// Konvertirungskonstruktor Point -> Circle
Circle::Circle(Point pos)
{
	this->centre = pos;
	this->radius = 0;
}

Circle::Circle(Point pos, double radius)
{
	this->centre = pos;
	this->radius = radius;
}

// Konvertirungskonstruktor String -> Circle
Circle::Circle(string str){
	int startX = (int)str.find("(") + 1;
	int endeX = (int)str.find(",") - 1;
	int startY = (int)str.find(",") + 1;
	int endeY = (int)str.find(")") - 1;
	int startR = (int)str.find(")") + 3;
	int endeR = (int)str.find(">") - 1;

	this->setRadius(stod(str.substr(startR, endeR)));
	Point tempPoint;
	tempPoint.setX(stod(str.substr(startX, endeX)));
	tempPoint.setY(stod(str.substr(startY, endeY)));
	this->setCentre(tempPoint);
}

// Destruktor
Circle::~Circle()
{
}

// Methode um den Mittelpunkt von dem Kreis zu setzten.
void Circle::setCentre(Point pos)
{
	this->centre = pos;
}

// Methode um den Mittelpunkt von dem Kreis abzufragen.
Point Circle::getCentre() const
{
	return this->centre;
}

// Methde um den Radius von dem Kreis zu bestimmer.
void Circle::setRadius(double r)
{
	this->radius = r;
}

// Methode um den Radius von dem Kreis abzufragen.
double Circle::getRadius() const
{
	return this->radius;
}

// Methode um den Mittelpunkt an die neuen Koordinaten zu verschieben.
// Die neue Koordinaten werden mit den alten addiert.
void Circle::move(double dx, double dy)
{
	this->centre.move(dx, dy);
}

// Methode um den Mittelpuntes und den Radius des Kreises auszugeben.
void Circle::print(bool newLine) const
{
	cout << "<";

	if (newLine == true)
	{
		// Audgabe der Koordinaten des Mittelpunks ohne NewLine
		/*this->centre.print(false);
		cout << "," << this->radius << ">" << endl;*/
		cout << this->toString() << endl;
	}
		
	else
	{
		/*this->centre.print(false);
		cout << "," << this->radius << ">";*/
		cout << this->toString() << endl;
	}
}

// Methode die einen String mit dem Mittelpunkt und dem Radius zur�ckliefert.
string Circle::toString() const 
{
	ostringstream output;
	output << this->centre.toString() << "," << this->radius << ">";
	return output.str();
}

// Operator "<<"
ostream & operator<< (ostream & o, Circle const & circle)
{
	return o << "<" << circle.toString();
}