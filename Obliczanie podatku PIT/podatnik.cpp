#include <iostream>
#include <string>
#include "podatnik.h"
using namespace std;

const int prog_1_max = 10800;

void PIT::oblicz_podatek() {
	if (przychod_roczny <= 120000) {
		prog_podatkowy = 1;
		zwrot_podateku = 0.12 * (przychod_roczny - 30000);
	}
	else {
		float n;
		prog_podatkowy = 2;
		n = przychod_roczny - 120000;
		zwrot_podateku = 10800 + 0.32 * (przychod_roczny - 120000);
	}
}

void PIT::wyswietl() {
	cout << "\n\tImie i nazwisko : " << imie << " " << nazwisko;
	cout << "\n\tKwalifikuje sie do " << prog_podatkowy << " progu podatkowego";
	cout << "\n\tZwrot podatku to : " << zwrot_podateku << " zl\n\n\n\n\n\n";
}