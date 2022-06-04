#include <iostream>
#include "Pomieszczenie.h"
#include "Symulacja.h"
#include "RegulatorBB.h"

int main() {
	Symulacja symulacja(5, 5, 5, 6000);
	RegulatorBB regulatorBB;
	symulacja.setRegulator(&regulatorBB);
	symulacja.przebieg(1000, 1);
	symulacja.zapiszPrzebiegi();
}