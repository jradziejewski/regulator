#include <iostream>
#include "Pomieszczenie.h"
#include "Symulacja.h"
#include "RegulatorBB.h"
#include "RegulatorPID.h"

int main() {
	Symulacja symulacja(5, 5, 5, 10000);
	RegulatorPID regulatorBB;
	symulacja.setRegulator(&regulatorBB);
	symulacja.przebieg(1000, 1);
	symulacja.zapiszPrzebiegi();
}