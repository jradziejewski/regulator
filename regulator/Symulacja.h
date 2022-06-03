#pragma once
#include <iostream>
#include "Pomieszczenie.h"
#include "Grzejnik.h"

class Symulacja
{
private:
	Pomieszczenie pomieszczenie;
	Grzejnik grzejnik;
public:
	Symulacja(float _wys, float _szer, float _gleb, float _mocGrzejnika) : pomieszczenie(_wys, _szer, _gleb), grzejnik(_mocGrzejnika) {}
	void iteracja(float _dt, float _cieploGrzejnika);
	void przebieg(int _liczbaIteracji, float _dt, float _poziomMocy);
};

