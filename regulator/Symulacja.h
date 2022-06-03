#pragma once
#include <iostream>
#include <vector>
#include "Pomieszczenie.h"
#include "Grzejnik.h"

class Symulacja
{
private:
	Pomieszczenie pomieszczenie;
	Grzejnik grzejnik;
	std::vector<float> przebiegTemperatury;
	std::vector<float> przebiegCzasu;
	std::vector<float> przebiegMocyGrzejnika;

public:
	Symulacja(float _wys, float _szer, float _gleb, float _mocGrzejnika) : pomieszczenie(_wys, _szer, _gleb), grzejnik(_mocGrzejnika) {}
	void iteracja(float _dt, float _cieploGrzejnika);
	void przebieg(int _liczbaIteracji, float _dt, float _poziomMocy);
	void wypiszPrzebiegi() {
		for (int i = 0; i < przebiegTemperatury.size(); i++) {
			std::cout << przebiegTemperatury[i] << " << temperatura " << przebiegCzasu[i] << " << czas  " << przebiegMocyGrzejnika[i] << " << grzejnik \n";
		}
	}
};

