#include <iostream>
#include <conio.h>
#include "Pomieszczenie.h"
#include "Symulacja.h"
#include "RegulatorBB.h"
#include "RegulatorPID.h"

int main() {
	Symulacja symulacja(5, 5, 5, 80000);
	RegulatorPID regulatorPID;
	RegulatorBB regulatorBB;
	symulacja.setRegulator(&regulatorBB);
	
	bool menu = true;
	char rodzaj;

	while (menu) {
		std::cout << "Wybierz rodzaj regulatora \n1. Regulator BB\n2. Regulator PID\n";
		std::cin >> rodzaj;
		if (rodzaj == '1' || rodzaj == '2') {
			menu = 0;
		} else {
			system("CLS");
			std::cout << "Nie ma takiego numeru. Sprobuj ponownie\n";
		}
	}
		
	if (rodzaj == '1') {
		symulacja.setRegulator(&regulatorBB);
	}
	else if (rodzaj == '2') {
		symulacja.setRegulator(&regulatorPID);
	}
	else return 0;
	symulacja.przebieg(1000, 0.5);
	symulacja.zapiszPrzebiegi();
}