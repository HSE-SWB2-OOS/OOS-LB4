#include <iostream>
#include <string>
using namespace std;

class A {
public:
	void f() {
		cout << "A::f()" << endl;
	}
	void g(double d) {
		cout << "A::g(double)" << d << endl;
	}
	void g(string s) {
		cout << "A::g(string)" << endl;
	}
	void h(char c) {
		cout << "A::h(char)" << endl;
	}
	void h(string s) {
		cout << "A::h(string)" << endl;
	}
};

class B : public A {
public:
	void g(int i) {
		cout << "B::g(int)" << endl;
	}
	void h(int i) {
		cout << "B::h(int)" << endl;
	}
	void h(string s) {
		cout << "B::h(string)" << endl;
	}
};

int main() {
	A a;
	B b;
	cout << "a.f() ";
	a.f();  // kein Fehler
	cout << "b.f() ";
	b.f();  // kein Fehler
	cout << "a.g(1.2) ";
	a.g(1.2); // Funktion ist �berladen
	cout << "b.g(1.2) ";
	b.g(1.2); //  Funktion redefinert und �berdeckt somit a.g
	cout << "a.g(1) ";
	a.g(1); // kein Fehler. Funktion ist �berladen
	cout << "b.g(1) ";
	b.g(1); // kein Fehler. Funktion redefinert und �berdeckt somit a.g
	cout << "a.g('a') ";
	a.g('a'); // Funktion ist �berladen (Kein Fehler es wird der ASCII Wert von 'a' ausgegeben.)
	cout << "b.g('a') ";
	b.g('a'); // Funktion ist redefiniert und �berdeckt somit a.g (Kein Fehler es wird der ASCII Wert von 'a' ausgegeben.)
	cout << "a.g(\"a\") ";
	a.g("a"); // kein Fehler. Funktion �berladen
	//cout << "b.g(\"a\") ";
	//b.g("a"); // Kompielerfehler.
	cout << "a.h(1) ";
	a.h(1); // kein Fehler. Funktion ist �berladen. 
	cout << "b.h(1) ";
	b.h(1); // kein Fehler. Funtion ist �berladen und redefiniert, Somit wird die Funktion a.h �berdeckt
	cout << "a.h('a') ";
	a.h('a'); // kein Fehler. Funktion ist �berladen
	cout << "b.h('a') ";
	b.h('a'); // kein Fehler. Funktion �berladen und redefiniert, Somit wird die Funktion a.h �berdeckt
	cout << "a.h(\"a\") ";
	a.h("a"); // kein Fehler. Funktion ist �berladen
	cout << "b.h(\"a\") ";
	b.h("a"); // kein Fehler. Funktion ist �berladen und redefinert, somit wird die Fuktion a.h �berdeckt

	getchar();
return 0;
}
