#pragma once
#include <iostream>

class Grzejnik
{
private:
	float mocNominalna;
	float poziomMocy = 0;
public:
	Grzejnik(float _mocNominalna) : mocNominalna(_mocNominalna) {};
	float aktualnieEmitowaneCieplo();
	float getMocNominalna() { return mocNominalna; };
	float getPoziomMocy() { return poziomMocy; };
	void setPoziomMocy(float _poziomMocy) { poziomMocy = _poziomMocy; };
};

