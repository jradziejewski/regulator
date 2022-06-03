#pragma once
#include <iostream>
#include "Pomieszczenie.h"

class Symulacja
{
private:
	Pomieszczenie pomieszczenie;
public:
	Symulacja(float _wys, float _szer, float _gleb) : pomieszczenie(_wys, _szer, _gleb) {}
	void iteracja(float _dt);
};
