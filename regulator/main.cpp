#include <iostream>
#include "Pomieszczenie.h"
#include "Symulacja.h"

int main() {
	Symulacja symulacja(5, 5, 5);
	for (int i = 0; i < 50; i++) {
		symulacja.iteracja(0.2);
	}
}