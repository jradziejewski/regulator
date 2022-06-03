#include <iostream>
#include "Pomieszczenie.h"
#include "Symulacja.h"

int main() {
	Symulacja symulacja(5, 5, 5);
	Grzejnik grzejnik(1500);
	grzejnik.setPoziomMocy(50);
	//std::cout << grzejnik.aktualnieEmitowaneCieplo();
	for (int i = 0; i < 25; i++) {
		symulacja.iteracja(5, grzejnik.aktualnieEmitowaneCieplo());
	}
}