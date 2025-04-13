/*Napisz klasę Pojazd, która ma metodę jedz() – wypisuje np. „Pojazd jedzie”.

Napisz klasę Samochod, która dziedziczy publicznie po Pojazd i ma dodatkową metodę trąb() – wypisuje np. „Beep beep!”.

W funkcji main():

utwórz obiekt Samochod.

wywołaj obie metody: jedz() (odziedziczoną) i trąb() (własną).*/

#include <iostream>
#include <string>
using namespace std;

class pojazd {
	 string marka, model;

public:
	void jedz() {
		cout << "Pojazd jedzie!";
	}
};

class samochod : public pojazd {
	int rok;
	
public:
	void trab() {
		cout << "Beep Beep";
	}
};

int main() {
	samochod o1;
	o1.jedz();
	o1.trab();

	return 0;
}