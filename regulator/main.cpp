#include <iostream>
#include "Pomieszczenie.h"
#include "Symulacja.h"

int main() {
	Symulacja symulacja(5, 5, 5, 1000);
	//std::cout << grzejnik.aktualnieEmitowaneCieplo();
	symulacja.przebieg(10, 0.5, 1);
	symulacja.zapiszPrzebiegi();
}