#include "Symulacja.h"

void Symulacja::iteracja(float _dt, float _poziomMocy) {
	grzejnik.setPoziomMocy(_poziomMocy);
	pomieszczenie.dodajCieplo(grzejnik.aktualnieEmitowaneCieplo());
	pomieszczenie.aktualizuj(_dt);
}

void Symulacja::przebieg(int _liczbaIteracji, float _dt, float _poziomMocy) {
	przebiegTemperatury.clear();
	przebiegCzasu.clear();
	przebiegMocyGrzejnika.clear();
	float czas = 0;
	for (int i = 0; i < _liczbaIteracji; i++) {
		czas += _dt;
		iteracja(_dt, _poziomMocy);
		przebiegTemperatury.push_back(pomieszczenie.getTemperatura());
		przebiegCzasu.push_back(czas);
		przebiegMocyGrzejnika.push_back(grzejnik.aktualnieEmitowaneCieplo());
		std::cout << pomieszczenie.getTemperatura() << std::endl;
	}
}