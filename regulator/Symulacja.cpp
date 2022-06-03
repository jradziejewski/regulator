#include "Symulacja.h"

void Symulacja::iteracja(float _dt, float _poziomMocy) {
	grzejnik.setPoziomMocy(_poziomMocy);
	pomieszczenie.dodajCieplo(grzejnik.aktualnieEmitowaneCieplo());
	pomieszczenie.aktualizuj(_dt);
}

void Symulacja::przebieg(int _liczbaIteracji, float _dt, float _poziomMocy) {
	for (int i = 0; i < _liczbaIteracji; i++) {
		iteracja(_dt, _poziomMocy);
		std::cout << pomieszczenie.getTemperatura() << std::endl;
	}
}