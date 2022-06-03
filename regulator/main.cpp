#include <iostream>
#include "Pomieszczenie.h"
#include "Symulacja.h"

int main() {
	Symulacja symulacja(5, 5, 5, 1500);
	//std::cout << grzejnik.aktualnieEmitowaneCieplo();
	symulacja.przebieg(100, 1, 1);
}