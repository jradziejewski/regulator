#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "Pomieszczenie.h"
#include "Grzejnik.h"
#include "Regulator.h"

class Symulacja
{
private:
	Pomieszczenie pomieszczenie;
	Grzejnik grzejnik;
	Regulator* regulator;
	std::vector<float> przebiegTemperatury;
	std::vector<float> przebiegCzasu;
	std::vector<float> przebiegMocyGrzejnika;
public:
	Symulacja(float _wys, float _szer, float _gleb, float _mocGrzejnika) 
		: pomieszczenie(_wys, _szer, _gleb)
		, grzejnik(_mocGrzejnika)
		, regulator(nullptr) {}
	void iteracja(float _dt);
	void przebieg(int _liczbaIteracji, float _dt);
	void zapiszPrzebiegi();
	void setRegulator(Regulator* _regulator) {
		regulator = _regulator;
	}
};

