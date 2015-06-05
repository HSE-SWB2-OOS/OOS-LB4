/* Uebungen zu OOP, Aufgabe 2.3
Erstersteller: Matthias Geckeler
E-Mail: matthias.geckeler@stud.hs-esslinge.de

Datum: 16.04.2015
Version: 1.3
Zeitaufwand: 0,5h

Aenderungshistorie:
-------------------
Durchgefuehrte Aenderung | Autor | Datum
Operator "<<" und "+" hinzugef�gt | Geckeler | 24.04.15
Methode toString hinzu, Sie liefert einen String f�r die Ausgabe, Methode print ruft jetzt toString auf. | Tommel | 24.04.15
Die Klasse Polygonlinie erbt nun von der Klasse OneDimObject | Tommel | 3.6.15
-------------------------------------------------------
Programmbeschreibung:
Die Klasse Polygonline die eien Linienzug mit einer verkettenten Liste darstellt.
---------------------
*/

#pragma once
#include "Polygonline.hpp" 

// Default Konstruktor
Polygonline::Polygonline() : OneDimObject()
{
}

Polygonline::Polygonline(Point pPos)
{
	createNewHead(pPos);
}

// Konvertierkonstruktor wandelt einen String in ein Polygoneline Objekt um.
Polygonline::Polygonline(string str){

	char checkChar;
	char pointBegin = '(';
	char pointEnd = ')';

	str = MyString::remove(str, ' ');
	istringstream strStream(str);

	// Jedes Zeichen durchgehen
	do
	{
		string subStr;
		strStream >> checkChar;
		if (checkChar == pointBegin)
		{
			subStr += checkChar;
			do
			{
				strStream >> checkChar;
				subStr += checkChar;
			} while (checkChar != pointEnd);

			Point p(subStr);
			this->addPoint(p);
		}
	} while (strStream);
}

// Destruktor
Polygonline::~Polygonline()
{

	if (head != nullptr)
	{
		do
		{
			endNode = head->next;
			delete head;
			head = endNode;
		} while (endNode != nullptr);

	}
}

void Polygonline::createNewHead(Point pPos)
{
	endNode = new PlgElement();
	endNode->point = pPos;
	endNode->next = nullptr;
	this->elementCounter++;

	head = new PlgElement();
	head = endNode;
}

// Ausgabe der Linie
void Polygonline::print() const
{
	cout << this->toString() << endl;
	
	/*PlgElement *temp = head;
	cout << "|";

	
	if (this->elementCounter > 0)
	{
		do
		{
			cout << "(" << temp->point.getX() << "," << temp->point.getY() << ")" ;
			temp = temp->next;

			if (this->elementCounter > 1 && temp != nullptr)
				cout << "-";
					
		} while (temp != nullptr);
	}
	cout << "|" << endl;*/
}

// Diese Methode f�gt einen neuen Punkt zu Linie hinzu.
Polygonline & Polygonline::addPoint(Point pPos)
{
	PlgElement *temp = new PlgElement;
	temp->point = pPos;
	temp->next = nullptr;

	if (this->elementCounter == 0)
		createNewHead(pPos);
	else
	{
		endNode->next = temp;
		endNode = endNode->next;
		this->elementCounter++;
	}
	
	return *this;
}

// Diese Methode h�ngt die �bergebene Linie an die bestehende Linie hinten an.
Polygonline & Polygonline::appendPolygonline(Polygonline const & additionalLine)
{
	PlgElement *temp = additionalLine.head;

	do
	{
		addPoint(temp->point);
		temp = temp->next;
	} while (temp != nullptr);
	
	return *this;
}

// Diese Methode verschiebt die Linie um den angegebenen offset.
void Polygonline::move(double dx, double dy)
{
	PlgElement *temp = head;

	do
	{
		temp->point.move(dx,dy);
		temp = temp->next;
	} while (temp != nullptr);
}

PlgElement & Polygonline:: getList() const
{
	return *this->endNode;
}

string Polygonline::toString() const
{

	// Variablen deklaration

	ostringstream tempstream;
	PlgElement *temp = head;
	tempstream << "|";


	// Start schleife, jeder durchlauf f�llt einen Punkt in den Stream

	if (this->elementCounter > 0)
	{
		do
		{
			tempstream << "(" << temp->point.getX() << "," << temp->point.getY() << ")";
			temp = temp->next;

			if (this->elementCounter > 1 && temp != nullptr)
				tempstream << "-";

		} while (temp != nullptr);
	}
	tempstream << "|";
	return tempstream.str();

}

// Operator "<<"
ostream & operator<< (ostream & o, Polygonline const & line)
{
	// Insert Polygonline.toString von Aufgabe 3
	return o << line.toString();
}

// Operator "+" um eine Punkt an die Linie hinten anh�ngen zu k�nnen 
Polygonline & Polygonline::operator+ (Point p)
{
	return this->addPoint(p);
}

// Operator "+" um mehere Linien miteinander zu verbinden (z.B. L1 + L2 + L3 (L2 und L3 werden zu L1 hinzugef�gt))
Polygonline & Polygonline::operator+ (Polygonline const & l)
{
	return this->appendPolygonline(l);
}
