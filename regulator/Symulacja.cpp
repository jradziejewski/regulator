#include "Symulacja.h"

void Symulacja::iteracja(float _dt) {
	pomieszczenie.dodajCieplo(grzejnik.aktualnieEmitowaneCieplo());
	pomieszczenie.aktualizuj(_dt);
}

void Symulacja::przebieg(int _liczbaIteracji, float _dt) {
	przebiegTemperatury.clear();
	przebiegCzasu.clear();
	przebiegMocyGrzejnika.clear();
	regulator->dodajGrzejnik(grzejnik);
	regulator->dodajPomieszczenie(pomieszczenie);
	float czas = 0;
	for (int i = 0; i < _liczbaIteracji; i++) {

		//USTAWIAM POZIOM MOCY!!!!!!!!!!
		regulator->steruj(30, _dt);
		// USTAWIAM POZIOM MOCY ^^^ !!!!!!!!!!!!

		czas += _dt;
		iteracja(_dt);
		przebiegTemperatury.push_back(pomieszczenie.getTemperatura());
		przebiegCzasu.push_back(czas);
		przebiegMocyGrzejnika.push_back(grzejnik.aktualnieEmitowaneCieplo());
		std::cout << pomieszczenie.getTemperatura() << std::endl;
	}
}

void Symulacja::zapiszPrzebiegi() {
	std::ofstream przebiegi("przebiegi.csv");
	std::locale mylocale("pl-PL");   // get global locale
	//przebiegi.imbue(mylocale);
	if (!przebiegi.is_open()) {
		std::cout << "Nie udalo sie utworzyc pliku.";
		return;
	}
	przebiegi << "Czas; Temperatura; Czas; Moc grzejnika" << std::endl;
	for (int i = 0; i < przebiegCzasu.size(); i++) {
		przebiegi << przebiegCzasu[i] << "; " << przebiegTemperatury[i] << "; " << przebiegCzasu[i] << "; " << przebiegMocyGrzejnika[i] << std::endl;
	}
}