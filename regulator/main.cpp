#include <iostream>
#include "Pomieszczenie.h"
#include "Symulacja.h"

int main() {
	Symulacja symulacja(5, 5, 5, 6000);
	symulacja.przebieg(10, 0.5);
	symulacja.zapiszPrzebiegi();
}