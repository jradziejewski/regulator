#include "Symulacja.h"

void Symulacja::iteracja(float _dt, float _cieploGrzejnika) {
	pomieszczenie.dodajCieplo(_cieploGrzejnika);
	pomieszczenie.aktualizuj(_dt);
	std::cout << pomieszczenie.getTemperatura() << std::endl;
}