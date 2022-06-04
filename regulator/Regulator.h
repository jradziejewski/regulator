#pragma once
class Grzejnik;
class Pomieszczenie;

class Regulator
{
protected:
	float zadanaTemperatura;
public:
	Grzejnik* grzejnik;
	Pomieszczenie* pomieszczenie;
	virtual float steruj(float _zadanaTemperatura, float _zmierzonaTemperatura, float _dt) = 0;
};

