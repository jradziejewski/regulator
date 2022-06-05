#pragma once
#include "Pomieszczenie.h"
#include "Grzejnik.h"


class Regulator
{
protected:
	float zadanaTemperatura;
public:
	Regulator()
		: grzejnik(nullptr)
		, pomieszczenie(nullptr)
		, zadanaTemperatura(20)
		{};
	Grzejnik* grzejnik;
	Pomieszczenie* pomieszczenie;
	virtual void steruj(float _zadanaTemperatura, float _dt) = 0;
	virtual void dodajGrzejnik(Grzejnik& _grzejnik) { grzejnik = &_grzejnik; };
	virtual void dodajPomieszczenie(Pomieszczenie& _pomieszczenie) { pomieszczenie = &_pomieszczenie; };
};

