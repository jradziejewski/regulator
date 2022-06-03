#pragma once
#include <iostream>

class Grzejnik
{
private:
	float mocNominalna;
	float poziomMocy;
public:
	Grzejnik(float _mocNominalna);
	float aktualnieEmitowaneCieplo() { return mocNominalna * poziomMocy; };
	float getMocNominalna() { return mocNominalna; };
	float getPoziomMocy() { return poziomMocy; };
};

