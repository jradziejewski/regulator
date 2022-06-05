#include "Grzejnik.h"

float Grzejnik::aktualnieEmitowaneCieplo() {
	if (poziomMocy > 1) poziomMocy = 1;
	else if (poziomMocy < 0) poziomMocy = 0;
	return mocNominalna * poziomMocy;
};