#include <iostream>
#include "podatnik.h"
#include <string>

int main()
{
	PIT p1("Grzegorz", "Kruk", 120000);
	p1.oblicz_podatek();
	p1.wyswietl();
}
