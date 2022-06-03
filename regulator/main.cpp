#include <iostream>
#include "Pomieszczenie.h"
#include "Symulacja.h"

int main() {
	Symulacja symulacja(5, 5, 5, 3010);
	//std::cout << grzejnik.aktualnieEmitowaneCieplo();
	symulacja.przebieg(10, 1, 1);
	symulacja.wypiszPrzebiegi();
}