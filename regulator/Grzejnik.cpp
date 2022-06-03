#include "Grzejnik.h"

float Grzejnik::aktualnieEmitowaneCieplo() {
	if (poziomMocy > 1) poziomMocy = 1;
	return mocNominalna * poziomMocy;
};