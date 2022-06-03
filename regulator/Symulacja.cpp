#include "Symulacja.h"

void Symulacja::iteracja(float _dt) {
	pomieszczenie.aktualizuj(_dt);
	std::cout << pomieszczenie.getTemperatura() << std::endl;
}