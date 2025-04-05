#include <iostream>
#include <string>
using namespace std;

class PIT {
	string imie, nazwisko;
	float przychod_roczny = 120000, prog_podatkowy, zwrot_podateku;

public:
	void oblicz_podatek();
	void wyswietl();

	PIT(string i, string n, float pr) {
		imie = i;
		nazwisko = n;
		przychod_roczny = pr;
	}
};