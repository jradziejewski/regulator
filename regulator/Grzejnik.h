#pragma once
#include <iostream>

class Grzejnik
{
private:
	const float mocNominalna;
	float poziomMocy = 0;
public:
	Grzejnik(float _mocNominalna) : mocNominalna(_mocNominalna) {};
	void setPoziomMocy(float _poziomMocy) { poziomMocy = _poziomMocy; };
	float getPoziomMocy() { return poziomMocy; };
	float getMocNominalna() { return mocNominalna; };
	float aktualnieEmitowaneCieplo();
};

